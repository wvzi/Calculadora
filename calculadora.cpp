// Librerias
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	// Iniciando las variables   
	double num1, num2;
	char operation, redo;
	// Titulo   
	cout << " Bienvenido a Calculadora " << endl;
	cout << " Version: [v.0.1]" << endl;
	cout << endl << endl << endl;
   
	do
	{
	
		cout << " Ingresa una operacion (+,-,*,/) ";
		cin >> operation;
		cout << endl << endl;
		cout << " Ingresa 2 numeros para realizar tu operacion ";
		cout << operation << "):" << endl << " 1er numero: ";
		cin >> num1;
		cout << " 2do numero: ";
		cin >> num2;
		cout << endl;
		 
		switch (operation)
		{
		
		case'+':
			cout << " Resultado de la Suma (" << num1 << "+" << num2 << "): ";
			cout << num1 + num2 << endl;
			break;
		case'-':
			cout << " Resultado de las resta (" << num1 << "-" << num2 << "): ";
			cout << num1 - num2 << endl;
			break;
		case'*':
			cout << " Resultado de la multipliacion (" << num1 << "*" << num2 << "): ";
			cout << num1*num2 << endl;
			break;
		case'/':
			cout << " Resultado de la division (" << num1 << "/" << num2 << "): ";
			if (num2 == 0)
			{
				cout << " Error - No Valido" << endl;
			}
			cout << (num1 / num2) << endl;
			break;
	
			swap(num1, num2);
			cout << " 1er numero=" << num1 << "y 2do numero" << num2 << endl << endl;
			break;
		default:
			cout << "Comando Desconocido" << endl;

		}
	        
		cout << "Ingresa y para continuar ";
		cin >> redo;
		cout << endl << endl;
	} while (redo == 'y' || redo == 'Y');

	return 0;

}
