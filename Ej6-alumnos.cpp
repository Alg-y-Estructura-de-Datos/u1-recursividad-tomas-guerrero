/*
 Ejercicio N°6
Crear un programa que pida al usuario un número entero positivo "n". Luego implementar
 una función recursiva que cuente la cantidad de dígitos pares que ocupan posiciones
 impares (identificándolas de izquierda a derecha) en "n". Ej.: si el número es 22005
 el resultado es 2, y si fuera 1414 el resultado es 0

 */

#include <iostream>
using namespace std;

int contarParesEnPosicionesImpares(int[], unsigned int);

int main()
{

  unsigned int n, d;
  cout << " Ingrese la cantidad de digitos: ";
  cin >> n;
  cout << " Ingrese un numero Natural: ";
  cin >> d;
  int arreglo[n];
  for (int i = n - 1; i >= 0; i--)
  {
    arreglo[i] = d % 10;
    d = d / 10;
  }

  for (int i = 0; i < n; i++)
  {
    cout << arreglo[i] << " ";
  }
  int resultado = contarParesEnPosicionesImpares(arreglo, n);
  cout << endl;
  cout << " La cantidad de numeros pares en posiciones impares es de: " << resultado << endl;

  return 0;
}

int contarParesEnPosicionesImpares(int arreglo[], unsigned int n)
{

  if (n == 0)
  {
    return 0;
  }

  n = n - 1;

  if ((n % 2 == 0) && (arreglo[n] % 2 == 0))
  {
    return 1 + contarParesEnPosicionesImpares(arreglo, n);
  }
  else
  {
    return contarParesEnPosicionesImpares(arreglo, n);
  }
}