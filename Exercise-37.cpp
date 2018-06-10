/*
 * Exercise 37a:
 * Dado un valor entero positivo que se ingresa por teclado,
 * desarrollar un programa que muestre por consola los n
 * números primos.
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int numero_ingresar;
	int contador = 0;
	int numeros_divisibles = 0;
	int contador_numeros_primos = 0;
	int resto;
	bool es_numero_primo = false; // flag (true/false)

	cout << "Ingrese un numero: "; cin >> numero_ingresar;

	// El bucle se repetirá mientras se cumpla la condición
	// si 'numero_ingresar' es positivo el bucle se detiene
	while(numero_ingresar < 0){
		cout << "Ingrese un numero: "; cin >> numero_ingresar;
	}

	// Verifico que 'numero_ingresar' sea positivo
	if(numero_ingresar > 0){
		// mientras la condición se cumpla, el bucle seguirá iterando
		while(contador_numeros_primos < numero_ingresar){
			contador++; // Al principio del bucle, para incluir el número 1

			// Valores predeterminados
			// se reestablece los valores de las variables
			numeros_divisibles = 0;
			es_numero_primo = false;

			// Genero un loop desde 1 hasta 'contador',
			// es decir se ejecutará n veces según el valor de 'contador'			
			// Ej. Si contador=10; se ejecutará 10 veces, contando desde el 1 al 10
			//
			// Observación: 'i' debe tener valor '1', sino compilador retornará error
			// al no poder dividir un número por cero.
			for(int i=1; i <= contador; i++){
				// Divido 'contador' por 'i',
				// siendo 'contador' el dividendo que es mayor
				// que el divisor que es 'i'
				resto = (contador % i);

				// Si el resto de la división es igual a cero
				// entonces 'contador' es divisible por 'i'
				if(resto == 0)
					// acumulo +1 en los números divisibles
					numeros_divisibles++;
			}
			
			// Si el número es divisible sólo por 2 números (por si mismo
			// y por 1) entonces primo.
			if(numeros_divisibles <= 2)
				es_numero_primo = true;

			// si el número es primo
			if(es_numero_primo == true){
				// imprimo el número
				cout << contador << endl;
				// Acumulo +1 en el contador de números primos
				// y cuando su valor sea igual al número ingresado,
				// entonces el bucle se dejará de ejecutar
				contador_numeros_primos++;
			}
						
		}
	}
	
	return 0;
}
