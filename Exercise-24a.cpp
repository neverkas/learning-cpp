/*
 * Exercise 24a:
 *
 * Dado 10 valores numéricos, informar cual es el mayor.
 *
 * Solución 1: (en pseudocódigo)
 * 1. Defino variables
 * > numeroMayor=0, incremental=0, numero, 
 * 1. # Bucle (incremental < 10)
 * > Iterará 10 veces
 * 1.1 # Datos de entrada, numero=5, numero=3, ...
 * > Dentro del bucle, pedirá ingresar un valor que se guardará
 * en la variable 'numero.
 * 1.2. # Condicional (numero > numeroMayor)
 * > Evaluar si el valor ingresado es mayor que el anterior ingresado
 * > Si se cumple, se guarda en 'numeroMayor'.
*/

#include <iostream>

using namespace std;

int main(){
  /*
   * 1. Defino variables && Les asigno valor
   */
  int numeroMayor = 0;
  int incremental = 0;
  int numero;

  /*
   * 2. Entrada de datos && Proceso la Información
   */
  while(incremental < 10){
    incremental++;

    // 2.1 Datos de entrada
    cout << "Ingrese un número: ";
    cin >> numero;

    // 2.2 Proceso la información
    // Si el 'numero' es mayor a 'numeroMayor', entonces
    // reemplazo 'numeroMayor' por 'numero'
    if(numero > numeroMayor){
      numeroMayor = numero;
    }
  }

  /*
  * 3. Salida de datos
  */
  cout << "El mayor número es: " << numeroMayor << endl;
  
  return 0;
}
