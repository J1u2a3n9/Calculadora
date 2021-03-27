// CalculadoraC++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "operacion.h"

#include <iostream>

using namespace std;

int main()
{
  int opcion = 0, num1, num2;
  Operacion* LineaSeparadora = new Operacion(num1, num2);
  cout<<"          BIENVENIDO A TU CALCULADORA"<<endl;
  do
  {
    cout<<""<<endl;
    LineaSeparadora->ImprimirSeparador();
    cout<<"      1)SUMAR"<<endl;
    cout<<"      2)RESTAR"<<endl;
    cout<<"      3)MULTIPLICAR"<<endl;
    cout<<"      4)DIVIDIR"<<endl;
    cout<<"      5)SALIR"<<endl;
    LineaSeparadora->ImprimirSeparador();
        
    cout << "    Ingrese su opcion: ";
    cin >> opcion;
    cout << "    Ingrese un numero: ";
    cin >> num1;
    cout << "    Ingrese otro numero: ";
    cin >> num2;
    switch (opcion)
    {
      case 1:
        ImprimirResultado(1, num1, num2);
        break;
      case 2:
        ImprimirResultado(2, num1, num2);
        break;
      case 3:
        ImprimirResultado(3, num1, num2);
        break;
      case 4:
        ImprimirResultado(4, num1, num2);
        break;
    }

  } while (opcion > 0 && opcion < 5);
}