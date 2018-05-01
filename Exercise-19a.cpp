#include <iostream>

using namespace std;

int main(){
  // Declaro variables
  int codigoEquipo;
  char codigoResultado;
  string resultado;
  int cantidadEquipos;
  
  int puntosPorGanar = 3;
  int puntosPorEmpatar = 1;

  int puntosTotalPorGanar = 0;
  int puntosTotalPorEmpatar = 0;
  int puntosTotal = 0;
  
  int partidosGanados;
  int partidosEmpatados;

  cout << "Ingreso de datos"<<endl;
  cout << "Cantidad de equipos: ";
  cin >> cantidadEquipos;

  // Itero tantas veces por equipo haya
  for(int i=0; i < cantidadEquipos; i++){
    // Asignacion de valores a las variables
    int numeroEquipo = (i+1);
    
    cout << "Informacion del equipo numero (" << numeroEquipo << ")" << endl;
    
    cout << "Codigo de equipo: ";
    cin >> codigoEquipo;

    cout << "Codigo de resultado: ";
    cin >> codigoResultado;
    
    cout << "Cantidad de partidos ganados: ";
    cin >> partidosGanados;
    // Sumar x puntos por cantidad de partidos ganados
    if(partidosGanados > 0){
      puntosTotalPorGanar = (partidosGanados * puntosPorGanar);
    }
      
    cout << "Cantidad de partidos empatados: ";
    cin >> partidosEmpatados;
    // Sumar x puntos por cantidad de partidos empatados
    if(partidosEmpatados > 0){
      puntosTotalPorEmpatar = (partidosEmpatados * puntosPorEmpatar);
    }

    // Sumo los puntos por ganar y empatar
    puntosTotal = (puntosPorGanar + puntosTotalPorEmpatar);
    
    // Depende del codigo de resultado
    // mostrare un mensaje diferente
    
    switch(codigoResultado){
    case 'p': case 'P':
      resultado = "Perdido";
      break;
    case 'e': case 'E':
      resultado = "Empatado";
      break;
    case 'g': case 'G':
      resultado = "Ganado";
      break;
    }

    // Imprimo la informacion
    cout << "Informacion ingresada" << endl;
    cout << "Codigo de equipo: "<< codigoEquipo << endl;
    cout << "Total de puntos: " << puntosTotal << endl;
    cout << "Resultado: " << resultado << endl;
    cout << "**********************************" << endl;
  }
  
  return 0;
}
