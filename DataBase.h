//---------------------------------------------------------------------------

#ifndef DataBaseH
#define DataBaseH


#include <system.hpp>
#include <ADODB.hpp>


class DataBase
{
public:
	// ��������� contracts � �������� Contracts �� �� �� ������ fileName, ��������������� �� ����������� ���� Year
        static bool PrepareContractsHistory(AnsiString fileName, TADODataSet * contracts);
};


#endif
