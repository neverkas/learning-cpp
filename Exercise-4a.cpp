/*
 * Exercise 4a
 * Se desea contar con un sistema que evalue el estado de cuenta
 * mensual de un cliente de banco durante el ultimo año y determine
 * su nivel de confianza. Al cierre de cada mes (dia 30), se evalua
 * si el saldo fue positivo o negativo en funcion de ese resultado,
 * se determina la situacion de cada cliente de acuerdo al siguiente
 * criterio:
 * -Sin saldos negativos, se lo considera de ALTA confianza.
 * -Hasta 2 saldos negativos, se lo considera confianza MEDIA.
 * -Si supera los 2 saldos negativos, es BAJA confianza.
 *
 * Se pide: EL programa debe permitir ingresar por consola el saldo
 * al cierre de los ultimos 12 meses y, al finalizar el ingreso de 
 * datos, debera mostrar por pantalla el nivel de confianza para
 * ese cliente.
*/

#include <iostream>
#include <string>

using namespace std;
// Se incluye <string> a std
// para evitar referenciar mediante std::string
using std::string;

int main(){

  // Defino las variables
  float saldo;
  int cantidadSaldosNegativos;
  string nivelDeConfianza;

  // Asigno valores a las variables
  cantidadSaldosNegativos = 0;

  // Texto informativo
  cout << "Luego de ingresar los saldos de cada mes," << endl;
  cout << "se mostrara el nivel de confianza del cliente." << endl;
  
  // Se genera un loop por la cantidad de meses del año
  for(int numeroDeMes=1; numeroDeMes<=12; numeroDeMes++){
    // Se despliega informacion del mes
    cout << "Ingrese el saldo del mes " << numeroDeMes << ": ";
    
    // Se ingresa el valor a la variable 'saldo'
    cin >> saldo;

    // Si el valor del saldo es negativo (menor a 0)
    if(saldo < 0){
      // Incremento el valor de la variable 'cantidadSaldosNegativos'
      // segun las entradas con valor negativo
      // y se acumula en la variable
      cantidadSaldosNegativos+=1;
    }
  }

  // Si el valor de 'cantidadSaldosNegativos' es mayor a 0
  if(cantidadSaldosNegativos > 0){
    // El valor de la variable sera 'Baja' 
    nivelDeConfianza = "Baja";

    // Si el valor de 'cantidadSaldosNegativos' es mayor a 0 y menor a 2
    if(cantidadSaldosNegativos < 2){
    // El valor de la variable sera 'Media' 
      nivelDeConfianza = "Media";
    }
  }
  // Si el valor de 'cantidadSaldosNegativos' 
  // no es mayor a 0
  else{
    // El valor de la variable sera 'Alta'     
    nivelDeConfianza = "Alta";

  }

  // Salida de informacion
  cout << "El nivel de confianza es '" << nivelDeConfianza << "'" << endl;

  return 0;
}

