//---------------------------------------------------------------------------


#pragma hdrstop

#include "Core.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)


#include "DataBase.h"
#include "Bms.h"


bool Core::CalculateClassAndRatioByDB(AnsiString fileName, TADODataSet * contracts, AnsiString & bmsClass, float & ratio)
{
	try
        {
	        if (!DataBase::PrepareContractsHistory(fileName, contracts))
        		return false;
                if (!Bms::CalculateClassAndRatio(contracts, bmsClass, ratio))
                	return false;
		return true;
        }
        catch (...)
        {
        	return false;
        }
}
