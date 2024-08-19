#include <iostream>
using namespace std;

bool recorrerArreglo(int[], int, int);
int main()
{
  int n, d;
  cout << " Ingrese la cantidad de elementos que tiene el arreglo: ";
  cin >> n;
  int arreglo[n];
  for (int i = 0; i < n; i++)
  {
    cout << " Ingrese un elemento: ";
    cin >> arreglo[i];
  }
  cout << " Ingrese el numero a buscar: ";
  cin >> d;
  bool respuesta = recorrerArreglo(arreglo, d, n);

  if (respuesta == 1)
  {
    cout << " El digito se encuentra en el arreglo. " << endl;
  }
  else if (respuesta == 0)
  {
    cout << " El digito no se encuentra en el arreglo. " << endl;
  }

  return 0;
}

bool recorrerArreglo(int arreglo[], int d, int n)
{
  if (n == 0)
  {
    return 0;
  }
  else if (arreglo[n] == d)
  {
    return 1;
  }

  return recorrerArreglo(arreglo, d, n - 1);
}