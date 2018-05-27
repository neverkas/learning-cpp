/*
 * Exercise 30a:
 * 
 * Se dispone de un conjunto de valores enteros positivos que finaliza
 * con el ingreso de un número negativo.
 * El conjunto está dividido en subconjuntos mediante valores 0 (cero).
 * Se pide Desarrollar un programa que determine e informe:
 * -Por cada subconjunto, el promedio de valores que lo componen.
 * -El total de subconjuntos procesados.
 * -El valor máximo del conjunto indicando en que subconjunto se encontró
 *  y su posición relativa dentro del mismo.
 * -El valor mínimo de cada subconjunto.
 * Nota: El lote puede estar vacío (el primer valor ingresado será negativo),
 * o bien puede contener uno, varios o todos los sublotes vacios (ceros consecutivos)
 *
 *******************************************
 *
 * Solución: (Pseudocódigo)
 
  VARIABLES
		numero_ingresar,
		subconjuntos_cantidad=0,
		menor_numero, mayor_numero=0, mayor_numero_subconjunto=0
		subconjunto_sumatoria=0, subconjunto_promedio=0,
		contador=0,
 
  INICIO
		MIENTRAS (ingresar_numero > 0)
			SI(ingresar_numero > 0)
				subconjunto_sumatoria += ingresar_numero
				
				SI(numero_menor == 0 || numero_mayor == 0)
					numero_menor = ingresar_numero
					numero_mayor = ingresar_numero
				SI_FIN

				SI(ingresar_numero > numero_mayor)
					numero_mayor = ingresar_numero
					numero_mayor_subconjunto = subconjuntos_cantidad

				SINO(ingresar_numero < numero_menor)
					numero_menor = ingresar_numero
				SI_FIN

			SINO(ingresar_numero == 0)
				subconjuntos_cantidad+=1
				
				subconjunto_promedio = (subconjunto_sumatoria / contador)

				ESCRIBIR("Menor numero, subconjunto es " + numero_menor)
				ESCRIBIR("Promedio del subconjunto es " + subconjunto_promedio)

				contador = 0
				subconjunto_sumatoria = 0
				numero_menor = 0
			SI_FIN
		MIENTRAS_FIN

		ESCRIBIR("Subconjuntos: " + subconjuntos_cantidad)
		ESCRIBIR ("Mayor numero del subconjunto " + numero_mayor_subconjunto)
		ESCRIBIR ("es " + numero_mayor)
  FIN

*/

#include <iostream>

using namespace std;

int main(){
	int ingresar_numero;
	int subconjuntos_cantidad=0;
	int numero_menor = 0;
	int numero_mayor = 0;
	int numero_mayor_subconjunto = 0;
	int subconjunto_sumatoria = 0;
	int subconjunto_promedio = 0;
	int contador = 0;
	
	cout << "Numero: ";
	cin >> ingresar_numero;

	while(ingresar_numero >= 0){
		if(ingresar_numero > 0){
			contador++;
			subconjunto_sumatoria += ingresar_numero;

			if(numero_menor == 0 || numero_mayor == 0){
				numero_menor = ingresar_numero;
				numero_mayor = ingresar_numero;
			}
			
			if(ingresar_numero > numero_mayor){
				numero_mayor = ingresar_numero;
				numero_mayor_subconjunto = subconjuntos_cantidad;
			}
			else if(ingresar_numero < numero_menor){
				numero_menor = ingresar_numero;
			}
		}		
		else if(ingresar_numero == 0){
			subconjuntos_cantidad+=1;
			subconjunto_promedio = (subconjunto_sumatoria / contador);

			cout << "*Menor numero del subconjunto: " << numero_menor << endl;
			cout << "*Promedio del subconjunto: " << subconjunto_promedio << endl;
			cout << "\n";

			//
			contador = 0;
			subconjunto_promedio = 0;
			numero_menor = 0;
		}		
		
		cout << "Numero: ";
		cin >> ingresar_numero;
		
	}

	cout << "\n";
	cout << "Cantidad de Subconjuntos: " << subconjuntos_cantidad << endl;
	
  cout << "El mayor numero es del subconjunto " << numero_mayor_subconjunto;
	cout << " y es " << numero_mayor << endl;
																			
	
	return 0;
}
