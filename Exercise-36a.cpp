/*
 * Exercise 36a:
 *
 * Desarrollar un programa tal que, dado un valor entero positivo que
 * se ingresa por teclado, indique si se trata de un número primo o no.
 * Nota: Los números primos son aquellos valores enteros positivos que
 * solo son divisibles por si mismos y por el 1.
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int numero, resto;
	bool es_primo = true; // flag
	int contador = 0;
	int numeros_divisibles = 0;

	cout << "Ingrese un numero: "; cin >> numero;

	// El bucle se repitirá si el número es negativo
	// Loop controlado por centinela con valor cero
	while(numero < 0){
		cout << "Ingrese un numero: "; cin >> numero;
	}


	// Si el numero ingresado es positivo
	if(numero > 0){
		// Incrementar desde 0 hasta el numero
		while(contador < numero){		
			contador++; // incremental

			// Divido el numero por el incremental, y obtengo el resto
			// El incremental es el divisor que debe ser menor
			// a 'numero' que es el dividendo
			resto = (numero % contador);

			// Si la división da como resto cero,
			// entonces es divisible por ese número
			if(resto == 0)
				numeros_divisibles++;
			
			printf("%d / %d (Resto = %d)\n", numero, contador, resto);
		}
		
		if(numeros_divisibles > 2)
			es_primo = false;

		if(es_primo == true)
			cout << "El numero " << numero << " es primo" << endl;
		else
			cout << "El numero " << numero << " no es primo" << endl;
	}

	return 0;
}

