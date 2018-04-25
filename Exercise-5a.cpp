/*
 * Exercise 5a
 *
 * Crear una matriz con las tablas de multiplicar hasta el 5.
 * El objetivo es mostrar por pantalla la siguiente salida.
 *
 * 1 2  3  4  5  6  7  8  9  10
 * 2 4  6  8  10 12 14 16 18 20
 * 3 6  9  12 15 18 21 24 27 30
 * 4 8  12 16 20 24 28 32 36 40
 * 5 10 15 20 25 30 35 40 45 50
 * 
 * Donde el valor de las filas se multiplica por el valor de la
 * columna. Solo se puede emplear la estructura de control 'for'.
 *
 * Para conseguir columnas de espacio uniforme de 3 caracteres,
 * se debera concatenar una llamada a la funcion setw(3) de la
 * biblioteca <iomanip> a la salida.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  int numero;

  // Genero loop del 1 al 5
  for(int i = 1; i <= 5; i++){

    // Genero loop del 1 al 10
    for(int d = 1; d <= 10; d++){

      // Cada numero del primer loop,
      // se multiplica por todos los de este bucle
      numero = (i*d);

      // Se muestra el numero con un espaciado de 3
      // el espaciado se forma con la funcion setw()
      cout << setw(3) << numero;
    }

    // Salto de linea
    cout << endl;
  }
  
  return 0;
}
