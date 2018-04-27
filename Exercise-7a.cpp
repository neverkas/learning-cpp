/*
 * Exercise 7
 * 
 * Dados tres valores numericos diferentes, indicar:
 * -Cual es el menor
 * -Cual esta en el medio
 * -Cual es el mayor
*/

#include <iostream>

using namespace std;

int main(){
  // Defino las variables
  // Las 3 primeras entradas
  int a,b,c;
  // Segun se cumplan las condiciones se guardaran
  // en una variable distinta
  int numeroMayor;
  int numeroMedio;
  int numeroMenor;
  
  // Texto informativo
  cout << "Se pide que ingrese 3 numeros" << endl;
  
  // Ingreso de informacion
  cout << "Primer numero: ";
  cin >> a;

  cout << "Segundo numero: ";
  cin >> b;

  cout << "Tercer numero: ";
  cin >> c;

  // Si el mayor numero es A 
  if((a > b) && (a > c)){
    numeroMayor = a;

    // Solo me quedan 2 numeros a evaluar
    // Determino si B es mayor que C
    if(b > c){
      numeroMenor = c;
      numeroMedio = b;
    }
    else{
      numeroMenor = b;
      numeroMedio = c;
    }
  }
  // Si el mayor es B
  else if((b > a) && (b > c)){
    numeroMayor = b;

    // Solo me quedan 2 numeros a evaluar
    // Determino si A es mayor que C    
    if(a > c){
      numeroMenor = c;
      numeroMedio = a;
    }
    else{
      numeroMenor = c;
      numeroMedio = a;
    }
  }
  // Por descarte
  // Si el mayor es C
  else{
    numeroMayor = c;

    // Solo me quedan 2 numeros a evaluar
    // Determino si A es mayor que B    
    if(a > b){
      numeroMenor = b;
      numeroMedio = a;
    }
    else{
      numeroMenor = a;
      numeroMedio = b;
    }
  }

  // Imprimo datos
  cout << "El mayor numero es: " << numeroMayor << endl;
  cout << "El numero medio es: " << numeroMedio << endl;
  cout << "El menor numero es: " << numeroMenor << endl;
  
  
  return 0;
}
