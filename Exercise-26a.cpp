#include <iostream>
#include <iomanip>

using namespace std;

// Prototipos
float cliente_residencial_importe(int);
float cliente_comercial_importe(int, int);

// Variables Globales
float CLIENTE_COMERCIAL_ENVIO_FACTURA = 15;
float CLIENTE_COMERCIAL_SERVICIO_BASICO = 75;
float CLIENTE_COMERCIAL_POR_CANAL_HD = 5;
int CLIENTE_COMERCIAL_CONEXIONES_ADICIONALES_MIN = 10;

float CLIENTE_RESIDENCIAL_ENVIO_FACTURA = 4.50;
float CLIENTE_RESIDENCIAL_SERVICIO_BASICO = 20.5;
float CLIENTE_RESIDENCIAL_POR_CANAL_HD = 5;

int main(){
  // Fix precision
  cout << setprecision(2);
  cout << fixed << showpoint;

  // Variables locales
  int numeroCliente;
  float importe;
  short cantidadCanalesHD;
  short cantidadConexiones;
 
  char tipoCliente;

  // Entrada de datos
  cout << "Numero de cliente: ";
  cin >> numeroCliente;

  cout << "Indique el Tipo de Cliente"<<endl;
  cout << "Escriba 'R' si es Residencial, y  'C' si es Comercial"<<endl;
  cout << "Tipo de cliente: ";
  cin >> tipoCliente;

  cout << "Cantidad de canales: ";
  cin >> cantidadCanalesHD;

  switch(tipoCliente){
  case 'r': case 'R':
    importe = cliente_residencial_importe(cantidadCanalesHD);
    break;
  case 'c': case 'C':    
    // Si supera esta cantidad, se cobra un adicional por c/conexion
    cout << "Cantidad de conexiones: ";
    cin >> cantidadConexiones;

    importe = cliente_comercial_importe(cantidadCanalesHD, cantidadConexiones);
    break;
  }

  cout << "Numero de Cliente: " << numeroCliente << endl;
  cout << "Importe: " << importe <<endl;						    
  return 0;
}

// Definición de las Funciones
float cliente_residencial_importe(int cantidadCanalesHD){  
  // Multiplico cantidad de canales contratados por el importe por cada canal
  float importeCanales = (CLIENTE_RESIDENCIAL_POR_CANAL_HD * cantidadCanalesHD);
  
  // Sumatoria total de todos los importes
return ( CLIENTE_RESIDENCIAL_ENVIO_FACTURA + CLIENTE_RESIDENCIAL_SERVICIO_BASICO + importeCanales);
}

float cliente_comercial_importe(int cantidadCanalesHD, int cantidadConexiones){
  float importeCanales;
  int cantidadConexionesAdicionales;
  
    if(cantidadConexiones > CLIENTE_COMERCIAL_CONEXIONES_ADICIONALES_MIN){
      cantidadConexionesAdicionales = (cantidadConexiones - CLIENTE_COMERCIAL_CONEXIONES_ADICIONALES_MIN);
      CLIENTE_COMERCIAL_SERVICIO_BASICO += (cantidadConexionesAdicionales * CLIENTE_COMERCIAL_POR_CANAL_HD);
    }
    
  // Multiplico cantidad de canales contratados por el importe por cada canal
    importeCanales = (CLIENTE_COMERCIAL_POR_CANAL_HD * cantidadCanalesHD);  

    // Sumatoria total de todos los importes
    return (CLIENTE_COMERCIAL_ENVIO_FACTURA + CLIENTE_COMERCIAL_SERVICIO_BASICO + importeCanales);    
}
