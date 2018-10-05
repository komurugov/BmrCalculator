//---------------------------------------------------------------------------

#ifndef BmsH
#define BmsH


#include <system.hpp>
#include <ADODB.hpp>


class Bms
{
public:
	static bool CalculateClassAndRatio(
        	TADODataSet * contracts,       // ������� ����������� �� ����� Pays
                AnsiString & bmsClass,
                float & ratio);
private:
	const static int _minClass = -1;	// ������������� M
        const static int _maxClass = 13;
        const static int _maxPays = 4;		// ������� ���������� ������ �������������� � �����
	static int CalculateClass(int currentClass, int pays);
	static AnsiString ClassToString(int currentClass);
        static float ClassToRatio(int currentClass);
};


#endif
