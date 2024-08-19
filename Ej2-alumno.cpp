#include <iostream>
using namespace std;

int sumaNaturales(int);

int main()
{
  int n;
  cout << " Ingrese el numero maximo a sumar: ";
  cin >> n;

  cout << " La suma de los primeros " << n << " numeros primos es: " << sumaNaturales(n) << endl;

  return 0;
}

int sumaNaturales(int n)
{
  if (n <= 0)
  {
    return 0;
  }
  else
  {
    return n + sumaNaturales(n - 1);
  }
}