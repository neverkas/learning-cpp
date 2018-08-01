// Example program
#include <iostream>
#include <string>
#include <cstdio>
#include <sstream>

using namespace std;

/*
*
* TRATAR DE PASAR TODO A OOP
*
*/
// PENDIENTE
// class Gates{}

void gates(string type, int connections, int value[2], int lines){    
    //int result = 0;
    int result = value[0];
    bool salida;
    
    // entradas
    cout << "->";
    for(int i=1; i < connections; i++){
        cout << "[" << value[i] << "]";

        if(type == "AND"){            
            result*=value[i];
        }
        else if(type == "OR"){
            result+=value[i];
        }
        
    }

    cout << "->";
    
    // salida (Q)
    if(type == "AND"){
        if(result == 1)
            salida = true;
        else
            salida = false;
        
    }
    else if(type == "OR"){
        if(result >= 1)
            salida = true;
        else
            salida = false;
    }
    
    
    cout << "(" << type << ")";    
    cout << "-->";    
    cout << "[" << salida << "]";    
    
        
    //cout << "[" << value << "]";
    
    for(int i=0; i < lines; i++){
        //cout << "- ";
    }
    
    cout << endl;
}

void lines(int size){    
}

int main(){
    int entradas[2] = {1,0 };
    
    gates("AND", 2, entradas, 5);    
    gates("OR", 2, entradas, 5);
    return 0;
}
