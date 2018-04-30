/*
 * Exercise 12a:
 *
 * Dada una terna de numeros naturales que representan
 * el dia, el mes y el año de una determinada fecha
 * informarla como un solo número natural de 8 digitos (aaaammdd)
 *
 * Solucion 1 (pseudo codigo)
 * 
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
  int dia1, mes1, anio1, primer_fecha_formato;
  int dia2, mes2, anio2, segunda_fecha_formato;
  string primer_fecha, segunda_fecha, fecha_actual;
  //char dia2[5], mes2[5];

  // Texto informativo
  cout << "El formato de la fecha debe estar separado por espacios" << endl;
  cout << "(Ej.: 04 12 2016)" << endl;
  cout << '\n';

  // Entrada de datos
  cout << "Ingrese la primera fecha: ";
  cin >> dia1 >> mes1 >> anio1;

  cout << "Ingrese la segunda fecha: ";
  cin >> dia2 >> mes2 >> anio2;
  
  cout << '\n';
  
  // El formato quedará: 31/12/2016 (sin los espacios)
  primer_fecha = dia1 + " " + mes1 + " " + anio1;
  segunda_fecha = dia2 + " " + mes2 + " " + anio2;
 
  // El formato quedará: 2016 12 31 (sin los espacios)
  primer_fecha_formato = (anio1 * 10000) + (mes1 * 100) + dia1;
  segunda_fecha_formato = (anio2 * 10000) + (mes2 * 100) + dia2;

  if(primer_fecha_formato > segunda_fecha_formato){
    fecha_actual = primer_fecha;
  }else{
    fecha_actual = segunda_fecha;
  }

  cout << "La fecha mas actual es " << fecha_actual << endl;
	 
  return 0;
}
