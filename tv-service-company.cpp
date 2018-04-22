#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  // Fix precision
  cout << setprecision(2);
  cout << fixed << showpoint;

  // Declaración de variables
  int numeroCliente;
  short cantidadCanalesHD;
  short cantidadConexiones;
  short cantidadConexionesAdicionales;
  char tipoCliente;

  float importeTotal;
  float importeEnvioFactura;
  float importeServicioBasico;
  float importePorCadaCanalHD;
  float importeCanalesHD;

  // Ingreso de información
  cout << "Numero de cliente: ";
  cin >> numeroCliente;

  cout << "Indique que Tipo de Cliente es"<<endl;
  cout << "*Escriba 'R' si es Residencial"<<endl;
  cout << "*Escriba 'C' si es Comercial"<<endl;
  cout << "Tipo de cliente: ";
  cin >> tipoCliente;


  cout << "Cantidad de canales: ";
  cin >> cantidadCanalesHD;

  switch(tipoCliente){
  case 'r': case 'R':
    importeEnvioFactura = 4.50;
    importeServicioBasico = 20.5;
    importePorCadaCanalHD = 5;
    break;
  case 'c': case 'C':
    importeEnvioFactura = 15;
    importeServicioBasico = 75;
    importePorCadaCanalHD = 5;

    cout << "Cantidad de conexiones: ";
    cin >> cantidadConexiones;

    if(cantidadConexiones > 10){
      // Operación conexiones totales y restantes
      cantidadConexionesAdicionales = (cantidadConexiones - 10);

      // Mostrar cantidad conexiones adicionales
      cout << "Cantidad de Conexiones adicionales " << cantidadConexionesAdicionales << endl;
      
      importeServicioBasico += (cantidadConexionesAdicionales * importePorCadaCanalHD);
    }
    
    break;
    
  }

  // Desplegar información

  importeCanalesHD = (importePorCadaCanalHD * cantidadCanalesHD);
  importeTotal = (importeEnvioFactura + importeServicioBasico + importeCanalesHD);

  cout << '\n'; // salto de linea
  cout << "*Importe por Envio de Factura: $" << importeEnvioFactura << endl;
  cout << "*Importe por Servicio Basico: $" << importeServicioBasico << endl;
  cout << "*Importe por cada Canal HD: $" << importePorCadaCanalHD << endl;
  cout << '\n'; // Salto de linea

  cout << "Importe total: $" << importeTotal << endl;

  return 0;
}
