/*
 * Exercise 2:
 * Dados dos valores numericos enteros a y b 
 * calcular e informar el cosiente a/b
 * Considere que b puede ser cero,
 * en ese caso mostrar el correspondiente mensaje de error
*/

/*
 * Exercise 2b
 * Se utiliza funciones para realizar la division
 * ademas de Try y Catch para manejar el errores
 * verificando que el divisor sea distinto de cero
*/

#include <iostream>

using namespace std;

// declare function dividir
int dividir(int a, int b);

int main(){
  int a, b, result;

  cout << "Ingrese el primer numero ";
  cin >> a;

  cout << "Ingrese el segundo numero ";
  cin >> b;

  try{
    result = dividir(a, b);
    cout << "La divisón a/b es " << result << endl;
    
  } catch(const char* msg){
    cerr << msg << endl;
  }

  return 0;
}

// function dividir
int dividir(int a, int b){
  if(b == 0){
    throw "No se puede dividir por cero!";
  }
  
  return (a / b);
}
