#include <iostream>
using namespace std;

int buscarPotencia(int base, int exponente);

int main()
{
  int base, exponente;
  cout << " Ingrese la base: ";
  cin >> base;
  cout << " Ingrese el exponenete: ";
  cin >> exponente;

  cout << " El resultado final es: " << buscarPotencia(base, exponente);

  return 0;
}

int buscarPotencia(int base, int exponente)
{

  if (exponente == 0)
  {
    return 1;
  }
  else
  {
    return base * buscarPotencia(base, exponente - 1);
  }
}
