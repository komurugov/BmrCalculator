//---------------------------------------------------------------------------


#pragma hdrstop

#include "Core.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)


#include "DataBase.h"


bool Core::CalculateClassAndRatioByDB(AnsiString fileName, TADODataSet * contracts, AnsiString & bmsClass, float & ratio)
{
	try
        {
	        if (!DataBase::PrepareContractsHistory(fileName, contracts))
        		return false;

		return false;	// пока заглушка
        }
        catch (...)
        {
        	return false;
        }
}
