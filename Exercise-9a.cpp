/*
 * Exercise 9:
 * 
 * Dados un mes y el año correspondiente, informar cuantos dias tiene el mes.
 *
 ******
 * Solucion en Proposicion logica
 * p=es divisible por 4, r=es divisible por 400, ¬q=es divisible por 100
 * p y (¬q o r)r
 ******
 * Solucion en Pseudo codigo:
 * 1. Datos de Entrada m=3, anio=2018
 * 2. Si el anio es divisible por 4 y 400, pero no por 100
 * 2.1 es anio bisiesto, entonces febrero tiene 29 dias
 * 2.1 sino febrero tiene 28 dias
 * 3. Segun el numero de mes mostrar x cantidad de dias
 *
*/

#include <iostream>

using namespace std;

int main(){
  // Definir variables
  int dia, anio, mes;
  bool es_anio_bisiesto;
  
  // Texto informativo
  cout << "Averigua cuantos dias tiene tal mes, a partir del mes y anio" << endl;
  
  // Entrada de datos
  cout << "Ingrese el mes en formato (mm): ";
  cin >> mes;
  
  cout << "Ingrese el anio en formato (aaaa): ";
  cin >> anio;

  // Verificar si es anio bisiesto
  // Si el anio es divisible por 4 y por 400 o no es divisible por 100
  // entonces es Anio Bisiesto
  es_anio_bisiesto = ((anio % 4 == 0) && (anio % 400 == 0 || anio % 100 != 0));

  /*
   * Meses con 31 dias:
   * Enero(1), Marzo(3), Mayo(5), Julio(7), Agosto(8), Octubre(10), Diciembre(12)
   *  
   * Meses con 30 dias:
   * Abril(4), Junio(6), Septiembre(9), Noviembre(11)
   *
   * Meses con 28-29 dias:
   * Febrero(2)
   */

  // Segun el mes elegido, mostrar x cantidad de dias
  switch(mes){
  case 2:
    dia = (es_anio_bisiesto) ? 29 : 28;
    break;
  case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    dia = 31;
    break;
  case 4: case 6: case 9: case 11:
    dia = 30;
    break;
  }

  // Salida de datos
  cout << "El mes " << mes << " del anio " << anio;
  cout << " tiene " << dia << "dias" << endl;  
  
  return 0;
}


