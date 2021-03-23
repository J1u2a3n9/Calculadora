// CalculadoraC++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;


class Impresora
{
public:
    void ImprimirVacio()
    {
        cout << "              ---------------------------------------------------------------------------------------------";
    }
};

class RealizarOperacion
{
public:
    int sumar(int x, int y)
    {
        return x + y;
    }

    int restar(int x, int y)
    {
        return x - y;
    }
    int dividir(int x, int y)
    {
        return x / y;
    }

    int multiplicar(int x, int y)
    {
        return x * y;
    }
};




















class Operacion
{
private:
    int x;
    int y;
public:
    Operacion(int j, int k)
    {
        x = j;
        y=k;
    }

    int getX()
    {
        return x;
    }

    int getY()
    {
        return y;
    }
    int ObtenerResultado(int cases)
    {
        int res;
        RealizarOperacion* operacion = new RealizarOperacion();
        switch (cases)
        {
        case 1:
            res=operacion->sumar(getX(), getY());
            break;
        case 2:
            res=operacion->restar(getX(), getY());
            break;
        case 3:
            res=operacion->multiplicar(getX(), getY());
            break;
        case 4:
            res=operacion->dividir(getX(), getY());
            break;
        default:
            res = 0;
            break;
        }
        return res;
    }

};










int r(int cases, int x, int y)
{
    
    Operacion* operacion = new Operacion(x, y);
    return operacion->ObtenerResultado(cases);
     
}





//Identificadores excesivamente cortos=Lineas 9,37,52,54,56,57,73
//Codigo Duplicado=61,64,67,70
//Clase perezosa=9-15
//Identificadores excesivamente largos=56,61,68
//Envidia de caracteristicas = Operacion 60, Realizar Operacion 18


int main()
{
    int o = 0, x, y;
    Impresora* ImprimeLineasDeEspacioParaSepararParrafos = new Impresora();
    cout<<"BIENVENIDO A TU CALCULADORA"<<endl;
    do
    {
        cout<<""<<endl;
        ImprimeLineasDeEspacioParaSepararParrafos->ImprimirVacio();
        cout<<"                                              Bienvenido a Calculadora"<<endl;
        cout<<"                                              1)SUMAR"<<endl;
        cout<<"                                              2)RESTAR"<<endl;
        cout<<"                                              3)MULTIPLICAR"<<endl;
        cout<<"                                              4)DIVIDIR"<<endl;
        cout<<"                                              5)SALIR"<<endl;
        ImprimeLineasDeEspacioParaSepararParrafos->ImprimirVacio();
        
        cout<<"                                              Ingrese su opcion: ";
        cin >> o;
        cout << "                                              Ingrese un numero: ";
        cin >> x;
        cout << "                                              Ingrese otro numero: ";
        cin >> y;
        switch (o)
        {
        case 1:
            cout << "                                            El resultado es: " << r(1, x, y)<<endl;
            break;
        case 2:
            cout<<"                                              El resultado es: "<<r(2, x, y)<<endl;
            break;
        case 3:
            cout<<"                                              El resultado es: "<<r(3, x, y)<<endl;
            break;
        case 4:
            cout<<"                                              El resultado es:  "<<r(4, x, y)<<endl;
            break;
        }

    } while (o > 0 && o < 5);

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln

