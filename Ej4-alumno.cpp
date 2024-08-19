/*
 Ejercicio N°4

 Crear un programa que emplee recursividad para calcular el mayor de los elementos
 de un vector de “n” tamaño dado por pantalla por el usuario.
 */

#include <iostream>
using namespace std;

void calcularMayor(int[], int &, int);

int main()
{
  int cantidad, numeroMax = 0;
  ;
  cout << " Ingrese la cantidad de elementos del vector: ";
  cin >> cantidad;
  int arreglo[cantidad];
  for (int i = 0; i < cantidad; i++)
  {
    cout << i + 1 << " Ingrese un numero: ";
    cin >> arreglo[i];
  }
  calcularMayor(arreglo, numeroMax, cantidad);

  cout << " El numero mas grande es: " << numeroMax << endl;
  return 0;
}

void calcularMayor(int arreglo[], int &numeroMax, int cantidad)
{
  if (cantidad == -1)
  {
    return;
  }
  int numero = arreglo[cantidad];
  if (numero > numeroMax)
  {
    numeroMax = numero;
  }
  calcularMayor(arreglo, numeroMax, cantidad - 1);
}