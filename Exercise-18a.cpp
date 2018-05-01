/*
 * Exercise 18a:
 *
 * Se ingresa un valor numérico entero, se pide
 * calcular e informar su factorial.
 *
 * Tip: El factorial de un número es el producto de 
 * multiplicar el número 'x', por los numeros naturales
 * o enteros positivos desde el primero hasta el nùmero 'x'.
 * (Ej.: El factorial de 5 es 120 a causa de  1*2*3*4*5=120)
 *
 * Solución 1: (en Pseudocódigo)
 * 1. Datos de entrada, n=6
 * 2. Bucle (i < n), iterar n veces 
 *    (i*=n): multiplicar desde 1 hasta n
*/

#include <iostream>

using namespace std;

int main(){
  /*
   * 1. Declaro las variables
   */
  int numero, resultado;
  int contador;

  /*
   * 2. Datos de Entrada
   */
  cout << "Ingrese el numero del que quiere su factorial: ";
  cin >> numero;

  /*
   * 3. Proceso y muestro la información
   */

  // 'contador' ira en incremento
  contador  = 1;
  // 'resultado' se multiplicará con el incremental
  resultado = 1; 

  cout << "La forma factorial del numero " << numero << " es:" << endl;
  cout << numero << "!=" << resultado;
  
  while(contador < numero){
    contador++;

    // Esto es lo mismo que
    // resultado = resultado * contador;
    // se guardara el resultado de la operacion y
    // seguira operando hasta finalizar el bucle
    resultado*=contador;

    cout << "*" << contador;
  }

  cout << "=" << resultado;
  cout << '\n'; // new line
  
  return 0;
}
