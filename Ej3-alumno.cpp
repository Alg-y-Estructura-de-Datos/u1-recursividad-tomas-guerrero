/*
 Ejercicio N°3
Implementar una función recursiva que dado un número entero lo muestre de forma
 invertida ej: 10523 de mostrar 32501. Dar aviso de error en caso de uso de números
 negativos y mostrar primero el número a invertir y después el número invertido.

 */

#include <iostream>
using namespace std;
void mostrarInvertido(int numero, int &invertido);

int main()
{
  int numero = 4231;
  cout << " El numero original es: " << numero << endl;

  int invertido = 0;
  mostrarInvertido(numero, invertido);
  cout << " El numero Invertido es: " << invertido << endl;

  return 0;
}

void mostrarInvertido(int numero, int &invertido)
{
  if (numero == 0)
  {
    return;
  }

  else
  {
    invertido = invertido * 10 + numero % 10;
    mostrarInvertido(numero / 10, invertido);
  }
}
