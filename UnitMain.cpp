//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"


#include "Core.h"


TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::ButtonGoClick(TObject *Sender)
{
       	MemoResults->Clear();
        if (OpenDialogMdb->Execute())
	{
        	AnsiString bmsClass = "";
                float ratio;
        	if (Core::CalculateClassAndRatioByDB(OpenDialogMdb->FileName, bmsClass, ratio))
                {
                	MemoResults->Lines->Add("Класс: " + bmsClass + ".");
                        MemoResults->Lines->Add("Коэффициент = " + FormatFloat("0.00", ratio) + ".");
                }
                else
                	MemoResults->Lines->Add("Не удалось провести расчет.");
    	}
}
//---------------------------------------------------------------------------

