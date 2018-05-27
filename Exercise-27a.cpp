/*
 * Exercise 27a
 *
 * Dado un conjunto de nombres y fechas de nacimiento 
 * con formato ddmmaaaa, que finaliza cuando se ingrese 
 * un nombre igual a "fin", informar el nombre de la 
 * persona con mayor edad y el de la más joven.
 *
 * Solución 1: (en pseudocódigo)

VARIABLES
	fecha,
	fecha_formateada = 0,
	nombre, mas_joven_nombre, mas_viejo_nombre,
	mas_joven_fecha, mas_viejo_fecha
	contador = 0

INICIO
	MIENTRAS (nombre != '#') hacer:
		LEER (nombre)
		LEER (fecha)

		// Ex. 31 12 2014
		// 1. Extraigo el Dia, divido para obtener los 2 primeros enteros
		// desplanzando la coma hacia la iquierda.
		fecha_formateada += (fecha / 1000000 );

		// 2. Extraigo el Mes, obtiene el resto de dividir por 1000000
		// para obtener mes,año, y divido para obtener los primeros 2 enteros
		fecha_formateada += ((fecha % 1000000) / 10000)

		// 3. Extraer el año, obtiene como resto, los ultimos 4 enteros
		fecha_formateada += (fecha % 10000) //año
	
		SI(contador == 1)
			mas_joven_fecha = fecha_formateada
			mas_viejo_fecha = fecha_formateada
		SINO
			SI(fecha_formateada > mas_joven_fecha)
				mas_viejo_fecha = fecha_formateada
				mas_viejo_nombre = nombre
			SI(fecha_formateada < mas_viejo_fecha)
				mas_joven_fecha = fecha_formateada
				mas_joven_nombre = nombre
		
	MIENTRAS_FIN
FIN

LEER
MIENTRAS, MIENTRAS_FIN
SI, SI_FIN

*/

#include <iostream>
#include <string>

using namespace std;
using std::string;

int main(){
	int fecha_ingresada;
	string nombre_ingresado;
			
	int mas_joven_fecha = 0;
	int mas_viejo_fecha = 0;
	string mas_viejo_nombre = "";
	string mas_joven_nombre = "";

	int fecha_formateada = 0;
	int contador = 0;
	
	while(nombre_ingresado != "fin"){
		contador++;
		
		cout << "nombre: ";
		cin >> nombre_ingresado;

		if(nombre_ingresado != "fin"){
			cout << "fecha: ";
			cin >> fecha_ingresada;

			fecha_formateada += (fecha_ingresada / 1000000); // día
			fecha_formateada += ((fecha_ingresada % 1000000) / 10000 ); // mes
			fecha_formateada += (fecha_ingresada % 10000); // año

			cout << fecha_formateada << endl;
		
			if(contador == 1){
				mas_joven_fecha = fecha_formateada;
				mas_viejo_fecha = fecha_formateada;
				mas_joven_nombre = nombre_ingresado;
				mas_viejo_nombre = nombre_ingresado;
			}
			else{
				if(fecha_formateada > mas_joven_fecha){
					mas_joven_fecha = fecha_formateada;
					mas_joven_nombre = nombre_ingresado;
				}
				else if(fecha_formateada < mas_viejo_fecha){
					mas_viejo_fecha = fecha_formateada;
					mas_viejo_nombre = nombre_ingresado;
				}

			}
			
		}
				
	} // end while

	cout << "Mas joven: " <<  mas_joven_nombre << endl;
	cout << "Mas viejo: " << mas_viejo_nombre << endl;
	
	return 0;
}
