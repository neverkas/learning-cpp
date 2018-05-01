#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  // Fix precision
  cout << setprecision(2);
  cout << fixed << showpoint;

  /*
   * Declaración de variables
  */
  
  int numeroCliente;
  short cantidadCanalesHD;
  short cantidadConexiones;
  short cantidadConexionesAdicionales;
  short cantidadConexionesAdicionalesMinimo;
 
  char tipoCliente;

  float importeTotal;
  float importeEnvioFactura;
  float importeServicioBasico;
  float importePorCadaCanalHD;
  float importeCanalesHD;

  /*
   * Ingreso de información
   */
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
    // valores predefinidos para Cliente Residencial
    importeEnvioFactura = 4.50;
    importeServicioBasico = 20.5;
    importePorCadaCanalHD = 5;
    break;
  case 'c': case 'C':
    // valores predefinidos para Cliente Comercial
    importeEnvioFactura = 15;
    importeServicioBasico = 75;
    importePorCadaCanalHD = 5;
    
    // Si supera esta cantidad, se cobra un adicional por c/conexion
    cantidadConexionesAdicionalesMinimo = 10; 

    cout << "Cantidad de conexiones: ";
    cin >> cantidadConexiones;

    // Si la cantidad de conexiones supera la cantidadConexionesAdicionalesMinimo
    if(cantidadConexiones > cantidadConexionesAdicionalesMinimo){
      // Se resta la cantidad conexiones totales
      // para establecer la cantidad cuantas conexiones se adicionan
      // si se supera la cantidad de conexiones adicionales
      cantidadConexionesAdicionales = (cantidadConexiones - cantidadConexionesAdicionalesMinimo);

      // Mostrar la cantidad conexiones adicionales
      cout << "Cantidad de Conexiones adicionales " << cantidadConexionesAdicionales << endl;
      
      // Se cobra un adicional por cada canal
      // si supera la cantidad de conexiones adicionales
      importeServicioBasico += (cantidadConexionesAdicionales * importePorCadaCanalHD);
    }
    
    break;
    
  }

  /*
   * Mostrar información generada
   */
  
  // Se multiplica la cantidad de canales contratados por el importe predefinidos de por cada canal
  importeCanalesHD = (importePorCadaCanalHD * cantidadCanalesHD);
  // Sumatoria total de todos los importes
  importeTotal = (importeEnvioFactura + importeServicioBasico + importeCanalesHD);

  cout << '\n'; // salto de linea
  cout << "*Importe por Envio de Factura: $" << importeEnvioFactura << endl;
  cout << "*Importe por Servicio Basico: $" << importeServicioBasico << endl;
  cout << "*Importe por cada Canal HD: $" << importePorCadaCanalHD << endl;
  cout << '\n'; // Salto de linea

  cout << "Importe total: $" << importeTotal << endl;

  return 0;
}
