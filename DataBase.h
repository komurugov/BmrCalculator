//---------------------------------------------------------------------------

#ifndef DataBaseH
#define DataBaseH


#include <system.hpp>
#include <ADODB.hpp>


class DataBase
{
public:
	// связывает contracts с таблицей Contracts из БД по адресу fileName, отсортированной по возрастанию поля Year
        static bool PrepareContractsHistory(AnsiString fileName, TADODataSet * contracts);
};


#endif
