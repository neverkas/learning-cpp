/*
 * Exercise 16a:
 *
 * Se ingresa un valor numérico entero 'n', 
 * se pide desarrollar un algoritmo que muestre por consola
 * los primeros 'n' números naturales.
 *
 * Tip: Los números naturales(N), son los enteros(Z) positivos
 * (Ej. 1,2,3,..,40,50,60,...)
 *
 * Solución 1: (en Pseudocódigo)
 * 1. Datos de entrada, n=5
 * 2. Bucle, (i <= n) con i=0 hasta 'n'=5
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  /*
  * 1. Declaro variables
  */
  int numero;
  
  /*
   * 2. Entrada de datos
   */
  cout << "Ingrese un numero entero: ";
  cin >> numero;
  cout << '\n'; // new line
  
  /*
   * 3. Proceso la información
   */
  
  // Verifico que 'numero' sea un entero positivo
  if(numero > 0){    
    int i = 1; // El bucle contará desde 1 hacia delante

    cout << "Numeros naturales: " << endl;
    cout << i; // Imprimo el primer valor, el numero 1

    // Bucle while, desde 'i' hasta 'numero'
    // va a iterar hasta que se cumpla la condición de que
    // 'i' sea menor igual a 'numero
    while(i < numero){
      i++; // incremental de 1 en 1
    
      cout << setw(3) << i;
    } // end while

    cout << '\n'; // new line
    
  } // end if
  
  return 0;
}
