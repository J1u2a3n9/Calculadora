#include <iostream>

using namespace std;

class Operacion
{
private:
    int x;
    int y;
public:
  Operacion(int num1, int num2)
  {
    x = num1;
    y = num2;
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
    switch (cases)
    {
      case 1:
        res= getX() + getY();
        break;
      case 2:
        res= getX() - getY();
        break;
      case 3:
        res= getX() * getY();
        break;
      case 4:
        res= getX() / getY();
        break;
      default:
        res = 0;
        break;
    }
    return res;
  }

  void ImprimirSeparador()
  {
    cout << "---------------------------------------------------------"<<endl;
  }
  
};

int Resultado(int cases, int x, int y)
{  
  Operacion* operacion = new Operacion(x, y);
  return operacion->ObtenerResultado(cases);    
}

void ImprimirResultado(int cases, int x, int y)
{
  cout<<"    El resultado es: "<<Resultado(cases, x, y)<<endl;
}