/*
 * Dados dos valores numericos enteros a y b
 * Calcular e informar
 * -La suma de a+b
 * -La diferencia a-b
 * -El producto a*b
*/
#include <iostream>

using namespace std;

// declaro las funciones "sumar, restar, mutiplicar"
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);

int main(){
  int a,b;

  cout << "Ingrese el primer número: ";
  cin>>a;
  cout << "Ingrese el segundo número: ";
  cin>>b;

  cout << "Operaciones efectuadas: " << endl;
					
  cout << "La suma de a+b es " << sumar(a, b) << endl;
  cout << "La resta a-b es " << restar(a, b) << endl;
  cout << "La multiplicacion a*b es " << multiplicar(a, b) << endl;
}

//function sumar
int sumar(int a, int b){
  return (a + b);
}

//function restar
int restar(int a, int b){
  return (a - b);
}

//function multiplicar
int multiplicar(int a, int b){
  return (a * b);
}

