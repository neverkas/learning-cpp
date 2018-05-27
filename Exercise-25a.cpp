/*
 * Exercise 25a:
 *
 * Dados n valores numéricos, informar el mayor, el menor
 * y en que posición del conjunto fueron ingresados 
 * cada uno de ellos.
 *

SOLUCION 1 (Pseudocódigo):

VARIABLES
    contador=0,cantidad_ingresos, numero
    numero_mayor=0, numero_mayor_posicion=0
    numero_menor=0, numero_menor_posicion=0
	    
INICIO
	LEER (cantidad_ingresos)
	MIENTRAS (contador < cantidad_ingresos) HACER:
		LEER (numero)
		SI (contador==1) 
			numero_menor=numero
			numero_mayor=numero
	 	SINO
		 	SI (numero > numero_mayor) 
		 		numero_mayor=numero
				numero_mayor_posicion=contador
		 	SINO (numero < numero_menor) 
		 		numero_menor=numero
				numero_menor_posicion=contador
		 SI_FIN
	 MIENTRAS_FIN
FIN
*/

#include <iostream>

using namespace std;

int main(){
	// VARIABLES
	int contador=0, cantidad_ingresos, numero,
		numero_mayor=0, numero_mayor_posicion=0,
		numero_menor=0, numero_menor_posicion=0;
	
	cout << "Cuantos numeros desea ingresar? ";
	cin >> cantidad_ingresos;
	
	// MIENTRAS
	while(contador < cantidad_ingresos){
		contador++;

		cout << "Ingresar un numero: ";
		cin >> numero;
		
		if(contador == 1){
			numero_menor = numero;
			numero_mayor = numero;
		}
		else{
			if(numero > numero_mayor){
				numero_mayor = numero;
				numero_mayor_posicion=contador;
			}
			else if(numero < numero_menor){
				numero_menor = numero;
				numero_menor_posicion = contador;
			}
		} // end if
	} // end bucle

		cout << "Numero mayor: " << numero_mayor << endl;
		cout << "Numero mayor posicion: " << numero_mayor_posicion << endl;
		cout << "Numero menor: " << numero_menor << endl;
		cout << "Numero menor posicion: " << numero_menor_posicion << endl;
	
  return 0;
}
