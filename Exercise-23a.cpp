/*
 * Exercise 23a:
 *
 * Dado un valor numérico entero m, determinar e imprimir
 * un listado con los m primeros múltiplos de 3
 * y que no sean múltiplos de 5
 *
 * # Tips:
 * El multiplo de un número, es el producto de ese número por otro entero.
 * (Ej. Multiplos de 3 son 6,9,12 porque 3*2=6, 3*3=9, 3*4=12
 *
 * # Solución 1: (en pseudocódigo)
 * 1. # Datos de entrada: m=5
 * 2. # Bucle 1: (m < 1)
 * > Verifico que 'm' sea un entero positivo,
 * > El programa no avanzará hasta que 'm' sea mayor a cero
 * 3. # Bucle 2: (contadorMultiplos <= m)
 * > teniendo incremental=0, contadorMultiplos=0 y m=5,
 * > iterar tantas veces, hasta que se cumpla la condición de
 * > cuando 'contadorMultiplos' sea igual a 'm' se detendrá
 * 3.1 # Operación: (incremental+=3)
 * > Calcular los multiplos de 3 con (incremental=+3)
 * > sumando +3 por cada iteración, es lo mismo que 1*3,2*3,..
 * 3.2 # Condicional: ((incremental) % 5 != 0)
 * > Verificar que el incremental no sea multiplo de 5,
 * > si la división de 'incremental' por 5, no da como resto 0,
 * > entonces no es multiplo de 5,
 * > y si se cumple la condición, acumular +1 en 'contadorMultiplos'
 *
*/

#include <iostream>

using namespace std;

int main(){
  /*
  * 1. Declaro variables y les asigno valor
  */
  int m;
  int contadorMultiplos = 0;
  int incremental = 0;

  /*
  * 2. Entrada de datos
  */
  cout << "Ingrese un numero :";
  cin >> m;

  // Verifico que 'm' no sea un entero negativo
  // si lo es, no permite continuar
  while(m < 1){
    cout << "Ingrese un numero :";
    cin >> m;
  }

  /*
   * 3. Proceso la información && Salida de datos
   */

  // El bucle iterara tantas veces mientras se cumpla
  // la condición. Se detendrá cuando 'contadorMultiplos'
  // sea igual al valor ingresado 'm'
  
  while(contadorMultiplos < m){
    // Incremento de 3 en 3, ya que son los multiplos de 3
    // Otra manera de hacerlo seria multiplicando el
    // 'contadorMultiplos' por 3
    incremental+=3;

    // Verifico que 'incremental' no sea multiplo de 5
    // Si la división entre 'incremental' por 5,
    // no da como resto cero, entonces no es multiplo de 5.
    if(incremental % 5 != 0){
      // Si se cumple, acumulo +1 en 'contadorMultiplos'
      contadorMultiplos++;

      cout << incremental << endl;
    }
    
  }
  
  return 0;
}
