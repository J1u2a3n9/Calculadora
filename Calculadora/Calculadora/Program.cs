using System;

namespace Calculadora
{
    class Program
    {
        static void Main(string[] args)
        {
            int resultado(int caso, int x, int y)
            {
                switch (caso)
                {
                    case 1:
                        return x + y;
                        break;
                    case 2:
                        return x - y;
                        break;
                    case 3:
                        return x * y;
                        break;
                    case 4:
                        return x / y;
                        break;
                }
                return 0;
            }


            int opcion = 0, x, y, resultados = 0;
            Console.WriteLine("BIENVENIDO A TU CALCULADORA");
            do
            {
                Console.WriteLine("");
                Console.Write("              ---------------------------------------------------------------------------------------------");
                Console.WriteLine("                                              Bienvenido a Calculadora");
                Console.WriteLine("                                              1)SUMAR");
                Console.WriteLine("                                              2)RESTAR");
                Console.WriteLine("                                              3)MULTIPLICAR");
                Console.WriteLine("                                              4)DIVIDIR");
                Console.WriteLine("                                              5)SALIR");

                Console.Write("              ---------------------------------------------------------------------------------------------");
                Console.Write("                                              Ingrese su opcion: ");
                opcion = Convert.ToInt32(Console.ReadLine());
                Console.Write("                                              Ingrese un numero: ");
                x = Convert.ToInt32(Console.ReadLine());
                Console.Write("                                              Ingrese otro numero: ");
                y = Convert.ToInt32(Console.ReadLine());
                switch (opcion)
                {
                    case 1:
                        Console.WriteLine($"                                              El resultado es {resultados = resultado(1, x, y)}");
                        break;
                    case 2:
                        Console.WriteLine($"                                              El resultado es {resultados = resultado(2, x, y)}"); 
                        break;
                    case 3:
                        Console.WriteLine($"                                              El resultado es {resultados = resultado(3, x, y)}"); 
                        break;
                    case 4:
                        Console.WriteLine($"                                              El resultado es {resultados = resultado(4, x, y)}");
                        break;
                }

            } while (opcion > 0 && opcion < 5);

        }
           

    }
}
