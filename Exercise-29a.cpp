/*
 * Exercise 29a:
 *
 * Dado un conjunto de valores numéricos que finaliza con el 
 * ingreso de un valor nulo, determinar e imprimir:
 * -El valor máximo negativo.
 * -El valor mínimo positivo.
 * -El valor mínimo dentro del rango -17.3 y 26.9
 * -El promedio de todos los valores ingresados
 *
 
 Solución 1: (en pseudocódigo)
  
 VARIABLES
	ingresar_numero, 
	valor_maximo_negativo=0, valor_minimo_positivo=0,
	valor_minimo_rango=0, promedio_valores_ingresados=0,
	contador_ingresos=0

 INICIO
	MIENTRAS(ingresar_numero != 0)
		contador_ingresos++;

		ESCRIBIR("Ingresar numero")
		LEER(ingresar_numero)

		promedio_valores_ingresados+=ingresar_numero;

		SI(ingresar_numero < 0)
			SI(ingresar_numero < valor_maximo_negativo)
				valor_maximo_negativo = ingresar_numero
		SI_FIN

	  SI(ingresar_numero > 0)
			SI(ingresar_numero < valor_minimo_positivo)
				valor_minimo_positivo = ingresar_numero
		SI_FIN
		
		SI(ingresar_numero > -17.3 && ingresar_numero < 26.9)
			SI(ingresar_numero < valor_minimo_rango)
				valor_en_rango = ingresar_numero
		SI_FIN

		promedio_valores_ingresados/=contador_ingresos

		ESCRIBIR("Valor maximo negativo")
		LEER(valor_maximo_negativo)

		ESCRIBIR("Valor minimo positivo")
		LEER(valor_minimo_positivo)

		ESCRIBIR("Valor minimo rango")
		LEER(valor_minimo_rango)

		ESCRIBIR("Promedio de los valores ingresados")
		LEER(promedio_valores_ingresados)

	MIENTRAS_FIN
 FIN
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	cout <<setprecision(2)<<fixed;
	
	float ingresar_numero;
	float valor_maximo_negativo = 0;
	float valor_minimo_positivo = 0;
	float valor_minimo_rango = 0;
	float promedio_valores_ingresados;
	int contador_ingresos = 0;

	//cout << "Ingresar numero: ";
	//cin >> ingresar_numero;
		
	while(ingresar_numero != 0){
		cout << "Ingresar numero: ";
		cin >> ingresar_numero;
		
		promedio_valores_ingresados+=ingresar_numero;
		if(ingresar_numero != 0){

			// Si el numero es negativo
			if(ingresar_numero < 0){
				//if(contador_ingresos == 1)
				if(valor_maximo_negativo == 0)
					valor_maximo_negativo = ingresar_numero;
				// es mayor negativo cuanto más cerca esta de cero
				else if(ingresar_numero > valor_maximo_negativo)
					valor_maximo_negativo = ingresar_numero;
			} // end if

			// Si el numero es positivo
			if(ingresar_numero > 0){					
				if(valor_minimo_positivo == 0)
					valor_minimo_positivo = ingresar_numero;
				// es menor positivo cuanto más cerca está de cero
				else if(ingresar_numero < valor_minimo_positivo)
					valor_minimo_positivo = ingresar_numero;
			} // end if

			// Si el número está entre -17 y 26
			if(ingresar_numero > -17.3 && ingresar_numero < 26.9){
				if(valor_minimo_rango == 0)
					valor_minimo_rango = ingresar_numero;
				// 
				else if(ingresar_numero < valor_minimo_rango)
					valor_minimo_rango = ingresar_numero;
			} // end if
			
		} // end if
		
		//cout << "Ingresar numero: ";
		//cin >> ingresar_numero;
		
		contador_ingresos++;
		
	} // end while

	promedio_valores_ingresados/=contador_ingresos;

	cout << '\n';
	cout << "Valor maximo negativo: " << valor_maximo_negativo << endl;
	cout << "Valor minimo positivo: " << valor_minimo_positivo << endl;
	cout << "Valor minimo rango: " << valor_minimo_rango << endl;
	cout << "Promedio entre los valores ingresados: " << promedio_valores_ingresados << endl;
		
	return 0;
}
