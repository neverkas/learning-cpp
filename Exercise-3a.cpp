/*
 * Exercise 3a
 * Empleando las estructuras de control 'if, switch, while',
 * crear un programa que lea los ingresos de caracteres
 * alfabeticos de A a Z e imprima los digitos correspondientes
 * segun el teclado estandar de los telefonos. Para este caso
 * el 'centinela' es #. Previamente a efectuar la conversión
 * validar las entradas mediante la expresion.
 * letra >= 'A' && letra <= 'Z'
*/

#include <iostream>

using namespace std;

int main(){
  // Defino variables
  short numero;
  char caracter;
  char centinela;

  // Asigno valor a las variables
  centinela = '#';
  numero = 0;

  // Informacion adicional
  cout << "Para finalizar el programa ingrese el caracter '#' y presione enter" << endl;
  
  // Entrada de datos
  cout << "Ingrese el caracter: ";
  cin >> caracter;

  // Genero loop que itera tantas veces sea necesario
  // se detiene cuando se ingrese el valor centinela
  while(caracter != centinela){

    // Condicional que controla que el caracter ingresado
    // sea una letra del abecedario de A hasta Z
    // las letras pueden ser minusculas o mayusculas
    if((caracter >= 'A' || caracter >= 'a') && (caracter <= 'Z' || caracter <= 'z')){
      
      // Segun la letra ingresada
      // se almacena un digito distinto en la variable numero
      // Se respeta que sea minusculas o mayusculas
      switch(caracter){
      case 'a': case 'b': case 'c':
      case 'A': case 'B': case 'C':
	numero = 2;
	break;
      case 'd': case 'e': case 'f':
      case 'D': case 'E': case 'F':
	numero = 3;
	break;
      case 'g': case 'h': case 'i':
      case 'G': case 'H': case 'I':
	numero = 4;
	break;
      case 'j': case 'k': case 'l':
      case 'J': case 'K': case 'L':
	numero = 5;
	break;
      case 'm': case 'n': case 'o':
      case 'M': case 'N': case 'O':
	numero = 6;
	break;
      case 'p': case 'q': case 'r': case 's':
      case 'P': case 'Q': case 'R': case 'S':
	numero = 7;
	break;
      case 't': case 'u': case 'v':
      case 'T': case 'U': case 'V':
	numero = 8;
	break;
      case 'w': case 'x': case 'y': case 'z':
      case 'W': case 'X': case 'Y': case 'Z':
	numero = 0;
	break;
      }

      // Salida de informacion
      cout << "El numero de la letra " << caracter << " es " << numero << endl;
    }
    
    // Si el caracter ingresado no es una letra
    // se muestra un mensaje
    else{
      cout << "El caracter ingresado no es una letra, intente nuevamente." << endl;
    }

    // Luego de ingresar el primer caracter
    // se repite esta iteracion
    // hasta que la condicion del while sea falsa
    cout << "Ingrese el caracter: ";
    cin >> caracter;    
    
  }
  
  return 0;
  
}
