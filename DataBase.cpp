//---------------------------------------------------------------------------


#pragma hdrstop

#include "DataBase.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)


bool DataBase::PrepareContractsHistory(AnsiString fileName, TADODataSet * contracts)
{
	contracts->Close();
       	contracts->ConnectionString = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" + fileName + ";Persist Security Info=False";
        contracts->CommandText = "SELECT * FROM Contracts";
        contracts->Open();
        contracts->Sort = "Year ASC";
        contracts->First();
       	return true;
}
