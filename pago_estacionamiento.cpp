#include <iostream>
using namespace std;

/*
Funcion que calcula la cantidad a pagar por concepto de estacionamiento
    de 1 a 5 horas, la hora cuesta $10
    de 6 a 10 horas, la hora cuesta $9
    por mas de 10 horas el costo es de $7
*/
float pago_estacionamiento(int horas)
{
	int cant(0);
	if (horas>=0 && horas<=5)
		cant = horas*10;
	if (horas>=6 && horas<=10)
		cant = horas*9;
	if (horas>11)
		cant = horas*7;

	return cant;
}

void casos_de_prueba(){

    cout << "TEST CASES" << endl;
    // Agrega tus casos de prueba
    cout << "Test data" << "   Expected result" << "   Actual resutl" << "   Fail/Pass" << endl;
    cout << "    3    " << "           30     " << "         " << pago_estacionamiento(3);
    if(pago_estacionamiento(4) == 40) cout << "            P" << endl; else cout << "            F" << endl;
    cout << "    7    " << "           63     " << "         " << pago_estacionamiento(7);
    if(pago_estacionamiento(7) == 63) cout << "            P" << endl; else cout << "            F" << endl;
    cout << "    23    " << "          161    " << "         " << pago_estacionamiento(23);
    if(pago_estacionamiento(12) == 84) cout << "            P" << endl; else cout << "           F" << endl;
    cout << endl;
    cout << "Test data" << "   Expected result" << "   Actual resutl" << "   Fail/Pass" << endl;
    cout << "    1    " << "           10     " << "         " << pago_estacionamiento(1);
    if(pago_estacionamiento(1) == 10) cout << "            P" << endl; else cout << "            F" << endl;
    cout << "    5    " << "           50     " << "         " << pago_estacionamiento(5);
    if(pago_estacionamiento(5) == 50) cout << "            P" << endl; else cout << "            F" << endl;
    cout << "    6    " << "           54     " << "         " << pago_estacionamiento(6);
    if(pago_estacionamiento(6) == 54) cout << "            P" << endl; else cout << "            F" << endl;
    cout << "    10   " << "           90     " << "         " << pago_estacionamiento(10);
    if(pago_estacionamiento(10) == 90) cout << "           P" << endl; else cout << "            F" << endl;
    cout << "    11   " << "           77     " << "         " << pago_estacionamiento(11);
    if(pago_estacionamiento(11) == 77) cout << "           P" << endl; else cout << "            F" << endl;



    cout << endl;

}

int main()
{

    casos_de_prueba();

	return 0;
}
