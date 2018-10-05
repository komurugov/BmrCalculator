//---------------------------------------------------------------------------

#ifndef CoreH
#define CoreH


#include <system.hpp>
#include <ADODB.hpp>


class Core
{
public:
	static bool CalculateClassAndRatioByDB(AnsiString fileName, TADODataSet * contracts, AnsiString & bmsClass, float & ratio);
};


#endif
