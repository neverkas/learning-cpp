/*
 * Exercise 8:
 *
 * Dado un valor entero n, informar los primeros n numeros primos.
 * Ej.: Si n==6 entonces la salida debe ser 1,2,3,5,7,11
 *
 * Tip: Los numeros primos son los que son divisibles solo
 * por si mismos, y por 1 y -1.
 *
 * Solucion: (Pseudo codigo)
 * 
 * 1) Entrada de info n=x
 * 2) Condicional (n>0):
 * Verificar que n sea un entero positivo
 *
 * 3) Bucle A (i < n):
 * Repetir operacion x veces, incremental 'i'.
 *
 * 3.1) Bucle B (x < i):
 * Listar numeros desde 2 hasta 'i'
 * 
 * 3.1.1) Condicional: (i%x==0)
 * Verificar si i no es primo,
 * Si al dividir 'i' por 'x' da resto 0, es primo
 *
 * 4) Condicional: (i%x != 0)
 * Si es primo mostrar
 *
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  int cantidad_primos;
  // Mensaje informativo
  cout << "Cantidad de numeros primos a mostrar: ";
  cin >> cantidad_primos;

  // verifico si cantidad_primos es un entero positivo
  if(cantidad_primos > 0){
    // Defino variables
    int i = 1;
    int repetir_loop = 1;
    int numeros_divisibles;
    bool es_compuesto;
    
    // Imprimo el primer valor
    // El numero 1, es el primer primo
    cout << i; // Imprimo el numero 1

      // Bucle va a iterar mientras 'i' sea menor a 'cantidad_primos'
      // mientras la condicion sea 'verdadero' seguira incrementando a 'i'
      while(repetir_loop < cantidad_primos){
	i++;
	// Cada vez que itera, reestablezco 'numeros_divisibles'  a 0
	numeros_divisibles = 0;
	// Bucle que va desde 1 hasta 'i' que va en incremento
	for(int x = 1; x <= i; x++){
	  // Si 'i' dividido 'x' da como resto cero, es compuesto
	  es_compuesto = (i % x == 0);
	
	  // contar por cuantos numeros que divide da resto 0
	  if(es_compuesto) numeros_divisibles++;
	}

	// Un numero primo es divisible por 2 numeros,
	// por 1 y por si mismo, por eso el 2
	if(numeros_divisibles == 2){
	  // repetir el loop por la cantidad de numeros compuestos
	  repetir_loop++;
	  
	  cout << setw(3) << i;
	}

      } // end while

      cout << '\n'; // new line
  }
  
  return 0;
}
