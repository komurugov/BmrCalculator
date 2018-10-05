//---------------------------------------------------------------------------


#pragma hdrstop

#include "Bms.h"

//---------------------------------------------------------------------------

#pragma package(smart_init)


#include <algorithm>
#include <string>


int Bms::CalculateClass(int currentClass, int pays)
{
	static int bmsTable[_maxClass - _minClass + 1][_maxPays + 1] =
	{
		{0,	-1,	-1,	-1,	-1},
		{1,	-1,	-1,	-1,	-1},
		{2,	-1,	-1,	-1,	-1},
		{3,	1,	-1,	-1,	-1},
		{4,	1,	-1,	-1,	-1},
		{5,	2,	1,	-1,	-1},
		{6,	3,	1,	-1,	-1},
		{7,	4,	2,	-1,	-1},
		{8,	4,	2,	-1,	-1},
		{9,	5,	2,	-1,	-1},
		{10,	5,	2,	1,	-1},
		{11,	6,	3,	1,	-1},
		{12,	6,	3,	1,	-1},
		{13,	6,	3,	1,	-1},
		{13,	7,	3,	1,	-1}
	};

        if (currentClass < _minClass || currentClass > _maxClass || pays < 0)
        	throw 0;

        pays = std::min(pays, _maxPays);

        return bmsTable[currentClass + 1][pays];
}


AnsiString Bms::ClassToString(int currentClass)
{
	if (currentClass == -1)
        	return "M";
        else
	{
        	AnsiString result;
                result.printf("%d", currentClass);
                return result;
        }
}


float Bms::ClassToRatio(int currentClass)
{
	switch (currentClass)
        {
        case -1:
        	return 2.45;
        case 0:
        	return 2.3;
        case 1:
        	return 1.55;
        case 2:
        	return 1.4;
        default:
        	if (currentClass < _minClass || currentClass > _maxClass)
                	throw 1;
                return 1 - (currentClass - 3) * 0.05;
        };
}


bool Bms::CalculateClassAndRatio(TADODataSet * contracts, AnsiString & bmsClass, float & ratio)
{
	int currentClass = 3;
	while (!contracts->Eof)
        {
		int pays = contracts->FieldByName("Pays")->AsInteger;
                currentClass = CalculateClass(currentClass, pays);
                contracts->Next();
        }
        bmsClass = ClassToString(currentClass);
        ratio = ClassToRatio(currentClass);
	return true;
}
