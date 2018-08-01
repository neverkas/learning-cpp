#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

//
// # PROTOTIPOS
//
float f(int);
float metodoBiseccion(float, float);

//
// # MAIN
//
int main(){
    int contar=0; // se reutiliza en el bucle
    int a, b, N; 
    float s, error;
    bool salir = false;
    float x1, x2; // parametros para metodoBiseccion()
    
    // Datos de entrada        
    cout<<"Ingrese valor a del intrevalo (0 en ambos valores para salir): ";
    cin>>a;
    
    cout<<"Ingrese valor b del intrevalo: ";
    cin>>b;
    
    cout<<"Ingrese el e <error>: ";
    cin>>s;
    
    cout<<"Ingrese la cantidad de iteraciones deseadas: ";
    cin>>N;

    // Mientras que 'salir' tenga valor 'false' se sigue ejecutando
    while(!salir){
        // Condicion que aparece al ingresar los datos
        // Si tanto 'a' como 'b' tienen como valor 0 en simultaneo
        if(a == 0 && b == 0){
            // habilito el centinela 'salir' que maneja el bucle
            salir = true;
        }
        /*
        2a: El sistema deberC! iterar hasta que el error sea menor a la cota.
        2b: NC:mero mC!ximo de iteraciones: el sistema deberC! iterar hasta que se 
        llegue al nC:mero de iteraciones ingresada o se cumpla la condiciC3n del
        punto anterior.
        */
        if(error < s || contar < N){
            // habilito el centinela 'salir' que maneja el bucle
            salir = true;
        }
        
        //f(x);
        // los valores retornan un valor que se reutiliza en metodoBiseccion()
        x1 = f(a);
        x2 = f(b);
        // guardo el valor en 'error' para manejar el bucle en combinacion con 's'
        error = metodoBiseccion(x1, x2); 

        contar++;
    }

    return 0;
}

//
// # FUNCIONES
//
float f(int x){
    return sqrt(x)-4*x+2;
}

float metodoBiseccion(float x1, float x2){
    int xR;
    
    int paso_numero = 1;
    
    // PASO 1: Escoger extremos y cambiar signos
    if(paso_numero == 1){
        if(x1 < 0){
        }
        
        paso_numero = 2;
    }
    
    // PASO 2: aproximacion a la raiz
    if(paso_numero == 2){
        xR = ((x1 + x2) / 2);
        
        paso_numero = 3;
    }
    
    // PASO 3: EVALUACIONES
    // a)
    if(paso_numero == 3){
        if(x1*xR < 0){
            x2 = xR;
            paso_numero = 4;
        }
        else if(x1*xR > 0){
            x1 = xR;
            paso_numero = 4;
        }
        else if(x1*xR == 0){
            // ???
        }
    }

    // PASO 4: NUEVA APROXIMACION
    if(paso_numero == 4){
        xR = ((x1 + x2) / 2);
    }
    
    return xR;
}
