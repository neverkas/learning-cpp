/*
 * Exercise 15a:
 *
 * Se ingresa la edad de un socio de un club, 
 * se pide mostrar por pantalla alguna de las siguientes leyendas:
 * - Menor: si la edad es menor o igual a 12.
 * - Cadete: si la edad está comprendida entre 13 y 18.
 * - Juvenil: si la edad es mayor que 18, y no supera los 26.
 * - Mayor: si  no cumple ninguna de las condiciones anteriores.
 *
 * Solución 1: (en Pseudocódigo)
 * 1. Datos de entrada, edad=20
 * 2. Condicional, mostrar un mensaje segun el valor de edad.
 * 2.1 Si edad <= 12, mostrar 'menor'
 * 2.2 Si edad > 13 y edad < 18, mostrar 'cadete'
 * 2.3 Si edad > 18 y edad < 26, mostrar 'juvenil'
 * 2.4 Si no cumple ninguna de las anteriores, mostrar 'mayor'
 *
 * Solución 2: (en Lógica proposicional)
 * 
*/

#include <iostream>
#include <string>

using namespace std;
using std::string;

int main(){
  /*
  * 1. Declaro variables
  */
  short edad;
  string mensaje;

  /*
   * 2. Entrada de datos
   */
  cout << "Ingrese su edad: ";
  cin >> edad;

  /*
   * 3. Proceso la información
   */
  if(edad <= 12){
    mensaje = "menor";
  }
  else if(edad >= 13 && edad <= 18){
    mensaje = "cadete";
  }
  else if(edad > 18 && edad <= 26){
    mensaje = "juvenil";
  }
  else{
    mensaje = "mayor";
  }
  
  /*
   * 4. Salida de datos
   */

  cout << "Según la edad ingresada, la persona es " << mensaje << endl;
  
  return 0;
}


