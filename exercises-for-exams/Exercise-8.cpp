#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>

using namespace std;

float f(int x){
    return pow(x, 2)-4*x+2;
}

//
// # PROTOTIPOS
//
void aproximacionRaiz(float, float, float &);
void evaluaciones(float &, float &, float, bool &);
void solicitarDatos(int &, int &, float &, int &, bool &);

//
// # MAIN
//
int main(){
    cout<<fixed<<setprecision(2);
    
    int contar=0; // se reutiliza en el bucle
    int a, b, N; 
    float s, error;
    bool salir = false; // centinela que controla el bucle
    float x1, x2, xR;
    
    // Datos de entrada        
    solicitarDatos(a, b, s, N, salir);

    // Mientras que 'salir' tenga valor 'false' se sigue ejecutando
    while(!salir){
        cout<<"ITERACION "<<contar<<endl;
        
        // Iterar N veces o hasta que el error sea menor a la cota
        // Dejar de iterar si el error es menor que la cota
        //if(xR < s || contar < N)
        if(contar == N){
            salir = true; // habilito el centinela 'salir' que maneja el bucle
        }
        
        cout<<"I ["<<a<<","<<b<<"]";
        cout<<"-->";
        
        // PASO 1: Escoger extremos y cambiar signos
        x1 += f(a);
        x2 += f(b);

        // PASO 2: aproximacion a la raiz
        aproximacionRaiz(x1, x2, xR);
        // PASO 3: EVALUACIONES
        // se le pasa como parametro el centinela 'salir' para detener el bucle
        // de ser necesario
        evaluaciones(x1, x2, xR, salir);
        // PASO 4: NUEVA APROXIMACION
        aproximacionRaiz(x1, x2, xR);
        // PASO 5: VERIFICA SI LA APROXIMACION ES EXACTA
        // se compara con 's' que es la cota de error de tolerancia
        if(xR == s){
            //salir = true; // habilito el centinela 'salir' que detiene el bucle
        }
        else
            evaluaciones(x1, x2, xR, salir);  // sino se cumple vuelvo al paso 3

        cout<<"f("<<x1<<")="<<x1;
        cout<<" - ";
        cout<<"f("<<x2<<")="<<x2;
        cout<<endl;
        
        cout<<"xR: "<<xR<<"-->";
        cout<<"f("<<xR<<")="<<f(xR);
        cout<<endl;
        
        error = x1 + x2;
        cout<<"Error: "<< error <<endl;
        cout<<"---------------------"<<endl;

        // Datos de entrada        
        //solicitarDatos(a, b, s, N, salir);
        
        contar++;
    }
    /*
    cout<<"Criterio de parada evaluado:"<<endl;
    cout<<"Se alcanzaron las "<<N<<" iteraciones";
    cout<<"El valor del error a evaluar la siguiente iteracion es: "<<xR;
    cout<<" siendo menor que el e ingresado";
    */
    return 0;
}

//
// # FUNCIONES
//
void aproximacionRaiz(float x1, float x2, float &xR){
    xR += ((x1 + x2) / 2);
}

void evaluaciones(float &x1,float &x2,float xR, bool &salir){
    if(x1*xR < 0)
        x2 += xR;
    else if(x1*xR > 0)
        x1 += xR;
    else if(x1*xR == 0){
        //salir = true; // habilito el centinela 'salir' que detiene el bucle
    }
}

void solicitarDatos(int &a, int &b, float &s, int &N, bool &salir){
    cout<<"Ingrese valor a del intrevalo (0 en ambos valores para salir): ";
    cin>>a;
    
    cout<<"Ingrese valor b del intrevalo: ";
    cin>>b;
    
    // Condicion que aparece al ingresar los datos
    if(a == 0 && b == 0)
        salir = true; // habilito el centinela 'salir' que detiene el bucle
    else{
        cout<<"Ingrese el e <error>: ";
        cin>>s;
        
        cout<<"Ingrese la cantidad de iteraciones deseadas: ";
        cin>>N;        
    }
}
