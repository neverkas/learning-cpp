/*
 * Exercise 12a:
 *
 * Dada una terna de números naturales que representan
 * el día, el mes y el año de una determinada fecha
 * informarla como un solo número natural de 8 digitos
 * con formato (aaaammdd)
 *
 * Solucion 1: (En pseudo codigo)
 * 1. Entrada de datos > dia=13, mes=12, anio=2018
 * 2. Agregarle al 'anio' cuatro digitos a la derecha,
 * para poner colocar el dia y mes en formato (aaaammdd)
 * 2.1 Multiplicar el anio*10000, quedando 20180000
 * 2.2 Mutiplicar mes*100, quedando 1200
 * 3. Sumar el anio, mes, dia
 *
*/
#include <iostream>

using namespace std;

int main(){
  // Declaro las variables
  int dia, mes, anio, fecha;

  // Texto informativo
  cout << "Ingresar la fecha en formato dd/mm/aaaa" << endl;
  cout << "separada por espacios" << endl;
  cout << "Ej.: 22 12 2018" << endl;

  cout << '\n'; // new line

  // 1. Entrada de datos (cin)
  cout << "Fecha: ";
  cin >> dia >> mes >> anio;

  // 2. Proceso la informacion
  fecha = (anio * 10000) + (mes * 100) + dia;
  
  // 3. Salida de datos (cout)
  cout << "Fecha en formato (aaaammdd): " << fecha << endl;
    
}
