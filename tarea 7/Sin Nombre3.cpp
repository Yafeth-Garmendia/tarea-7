#include <iostream>

using namespace std; 

 void productos(int opcion);
 void imprimirFactura();
void menu()
{

	int opcion = 0;
	
	while(true)
	{
		system("cls");
		
		
		cout << "****";
		cout << "MENU";
		cout << "****";
		cout << endl;
		cout << endl;
		cout << endl;
		
		cout << "1 - Bebidas Calientas" << endl;
		cout << "2 - Bebidas Frias" << endl;
		cout << "3 - Reposteria" << endl;
		cout << "4 - Imprimir factura" << endl;
		cout << "0 - Salir" << endl;
		
		cin >> opcion;
		
		if (opcion == 0)
		{
			break;
		}
		if (opcion ==  4)
		{
			imprimirFactura();
		} else {
			productos(opcion);
		}
		
		
    }
    
}
		
	
