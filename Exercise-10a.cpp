/*
 * Exercise 10:
 *
 * Parecido al Exercise 8 pero mas dificil
 *
 * Dado un valor entero n, descomponer en factores primos.
 * Ej.: Si n==100 entonces la salida debe ser 2,2,5,5
 *
 *********************************************
 *
 * Solucion en Pseudo codigo:
 *
 * Entrada n=18, 
 * 1) Condicional (n>0)
 * Verifico si n es un entero positivo, entonces
 *
 * 2) Bucle (i < 18)
 * Genero una lista del 1 al 18
 *
 * 2.2) Condicional (i%18==0)
 * Divido por el primer numero que me de resto cero, de la division con 18
 * 18/2 = 9 (con resto 0)
 *
 * 2.3) El resultado de esa primer division 
 * Lo divido por otro numero que tambien de como resto cero
 * 9/3 = 3 (resto 0)
 *
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
}
