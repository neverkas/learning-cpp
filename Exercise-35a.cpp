/*
 * Exercise 35a:
 * Dado un número entero positivo entre 1 y 3999 informar
 * su correspondiente "número romano".

Solución lógica:

	// Recorro la cadena de caracteres
	//
	// 1) Si tiene 1 caracter, entonces
	// Analizo ese caracter
	// si (n==1) => I, si (n==2) => II, si (n==3) => III
	// si (n==4) => IV, si (n==5) => V, si (n==6) => VI
	// si (n==7) => VII, si (n==8) => VIII
	// si (n==9) => IX
	// 
	// 2) Si tiene 2 caracteres, entonces
	// 2.1) Analizo el primer caracter
	// si (n==1) => X, si (n==2) => XX, si (n==3) => XXX
	// agrego tantas X según 'n'
	// si (n==4) => XL, si (n==5) => L, si (n==6) => LX
	// si (n==7) => LXX, si (n==8) => LXXX
	// si (n==9) => XC,
	//
	// 2.2) Analizo el segundo caracter
	// 58
	// (c1 == 5) => L
	// (c2 == 8 ) => Lo analizo como el primer punto

	// 3) Si tiene 3 caracteres
	// 3.1) Analizo el primer caracter
	// si (n==1) => C, si (n==2) => CC, si (n==3) => CCC
	// si (n==4) => DC, si (n==5) => D, si (n==6) => DC
	// si (n==7) => DCC, si (n==8) => DCCC
	// si (n==9) => MC
	//
	// 3.2) Analizo el segundo caracter
	// 458
	// (c1 == 4) => DC
	// (c2 == 5 ) => L // Lo analizo como el segundo punto
	// (c3 == 8 ) => VIII // Lo analizo como el primer punto

	// 4) Si tiene 4 caracteres
	// 4.1) Analizo el primer caracter
	// si (n==1) => M, si (n==2) => MM, si (n==3) => MMM
	//
	// 4.2) Analizo el segundo caracter
	// 2458
	// (c1 == 2) => MM
	// (c2 == 458 ) => Lo analizo como el tercer punto
	// otra opcion
	// (c2 == 4) => Lo analizo como el tercer punto
	// (c3 == 58) => Lo analizo como el segundo punto
*/


#include <iostream>
#include <string>

using namespace std;

// prototypes
void imprimir_numero_romano(int, int);
void obtener_digitos(int, int [], int &);

int main(){
	int numero_ingresado;
	int cantidad_digitos;
	int lista_digitos[4];

	cout << "Ingrese un numero: ";
	cin >> numero_ingresado;

	while(numero_ingresado < 0){
		cout << "Ingrese un numero: ";
		cin >> numero_ingresado;
	}

	if(numero_ingresado > 0){
		obtener_digitos(numero_ingresado, lista_digitos, cantidad_digitos);
    
		cout << "Numero ingresado: " << numero_ingresado << endl;
		cout << "Numero romano: ";

		if(cantidad_digitos == 1)
			imprimir_numero_romano(numero_ingresado, 1);
		else{
			for(int i=0; i < cantidad_digitos; i++)
				imprimir_numero_romano(lista_digitos[i], cantidad_digitos-i);
		}
	
		cout << endl;
	}
}

// functions
void imprimir_numero_romano(int numero, int cantidad_digitos){
	string numero_romano, numero_seleccionado, numero_seleccionado_b;	
		
	switch(numero){
	case 1: case 2: case 3:
		switch(cantidad_digitos){
		case 1:
			numero_seleccionado = "I";
			break;
		case 2:
			numero_seleccionado = "X";
			break;
		case 3:
			numero_seleccionado = "C";
			break;
		case 4:
			numero_seleccionado = "M";
			break;
		}
		
		for(int i = 0; i < numero; i++){
			numero_romano+=numero_seleccionado;
		}
		
		break;
			
	case 4:
		switch(cantidad_digitos){
		case 1:
			numero_romano = "IV";
			break;
		case 2:
			numero_romano = "XL";
			break;
		case 3:
			numero_romano = "DC";
			break;
		}
		break;
	case 5: case 6: case 7: case 8:		
		switch(cantidad_digitos){
		case 1:
			numero_seleccionado = "V";
			numero_seleccionado_b = "I";
			break;
		case 2:
			numero_seleccionado = "L";
			numero_seleccionado_b = "X";
			break;
		case 3:		
			numero_seleccionado = "D";	
			numero_seleccionado_b = "C";
			break;
		}

		numero_romano += numero_seleccionado;
		
		for(int i=5; i < numero; i++){
			numero_romano+=numero_seleccionado_b;
		}
		
		break;
	case 9:
		switch(cantidad_digitos){
		case 1:
			numero_romano = "IX";
			break;
		case 2:
			numero_romano = "XC";
			break;
		case 3:
			numero_romano = "CM";
			break;
		}
		break;			
	}

	cout << numero_romano;
}

void obtener_digitos(int n, int lista_digitos[], int &cantidad_digitos){
	// Analizo si tiene 1 dígito (1-9)
    if(n < 10){
		cantidad_digitos = 1;
    }
	// Analizo si tiene 2 dígitos (1-99)
   else if(n < 100){
		cantidad_digitos = 2;
		
		lista_digitos[0] = (n / 10);
		lista_digitos[1] = (n % 10);
    }
	// Analizo si tiene 3 dígitos (1-999)
    else if(n < 1000){
		cantidad_digitos = 3;
		
		lista_digitos[0] = (n / 100);
		lista_digitos[1] = ((n / 10) % 10);
		lista_digitos[2] = (n % 10);			
    }
	// Analizo si tiene 4 dígitos (1-9999)
    else if(n < 10000){
		cantidad_digitos = 4;
		
		lista_digitos[0] = (n / 1000);
		lista_digitos[1] = ((n / 100) % 10);
		lista_digitos[2] = ((n / 10) % 10);
		lista_digitos[3] = ((n % 100)) - (((n / 10) % 10) * 10); // mejorar			
    }    
}
