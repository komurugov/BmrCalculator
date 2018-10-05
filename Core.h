//---------------------------------------------------------------------------

#ifndef CoreH
#define CoreH


#include <system.hpp>
#include <ADODB.hpp>


class Core
{
public:
	static bool CalculateClassAndRatioByDB(
        	AnsiString fileName,
                TADODataSet * contracts,	// указатель на созданный экземпл€р (потому что создавать удобнее средствами визуальной разработки)
                AnsiString & bmsClass,
                float & ratio);
};


#endif
