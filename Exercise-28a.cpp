/*
 * Exercise 28a:
 *
 * Crear un programa que permita calcular a partir de un solo dato de dimensión
 * el area de:
 *
 * -un circulo
 * -un cuadrado
 * -un triángulo (equilátero)
 *
 * Cada cáculo deberá ser ejecutado por funciones sobrecargadas, con las
 * siguientes firmas:
 *
 * float calcularArea(float)
 * float calcularArea(float, float)
 * float calcularArea(char, float, float)
 *
 * Donde el compilador distinguirá a la función que calcula el área del triángulo
 * cuando recibe el símbolo 't' como parámetro. Solicitar el dato por consola, 
 * invocar las 3 funciones y mostrar los 3 resultados desde la función principal.
 * 
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
using std::string;

float calcularArea(float);
float calcularArea(float, float);
float calcularArea(char, float, float);

template <typename t> void imprimir(t &resultado, string figura){
	cout << "El area del " << figura << " es " << resultado << endl;
}

int main(){
	cout << setprecision(2) << fixed;

	float dato, resultado;
	char opcion;
	string figura;

	cout << "Menu de opciones: " << endl;
	cout << "1: para circulo" << endl;
	cout << "2: para cuadrado" << endl;
	cout << "3: para triangulo" << endl;
	cout << '\n';
	cout << "Escriba # para finalizar" << endl;
	cin >> opcion;		
		  
	while(opcion != '#'){
		
		cout << "Ingrese el dato: ";
		cin >> dato;
		
		switch(opcion){
			case '1':  // circulo
				resultado = calcularArea(dato);
				figura = "Circulo";
			break;
			case '2':  //cuadrado
				resultado = calcularArea(dato, dato);
				figura = "Cuadrado";
			break;
			case '3':  //triangulo
				resultado = calcularArea('t', dato, dato);
				figura = "Triangulo";
			break;
		}
		
		imprimir <float> (resultado, figura);

		cout << "----------------------------" << endl;

		cout << "Menu de opciones: " << endl;
		cout << "1: para circulo" << endl;
		cout << "2: para cuadrado" << endl;
		cout << "3: para triangulo" << endl;
		cout << '\n';
		cout << "Escriba # para finalizar" << endl;
		
		cin >> opcion;		

	}
	
	return 0;
}

float calcularArea(float dato){
	return (3.14 * dato);
}

float calcularArea(float dato1, float dato2){
	return (dato1 * dato2);
}

float calcularArea(char dato1, float dato2, float dato3){
	if(dato1 == 't'){
		return ((dato1 * dato2) / 2);
	}
}
