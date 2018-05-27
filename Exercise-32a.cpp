/*
 * Exercise 32a:
 *
 * Un buque de carga traslada 100 contenedores a 3 diferentes puertos del
 * pais, identificados con los numeros 1, 2 y 3.
 * Por cada uno de los contenedores trasladados por el buque se registran
 * los siguientes datos:
 * 1. Identificación del contenedor: idCont
 * 2. Peso del contenedor en kilos: peso
 * 3. Puerto de arribo (un valor de 1 a 3): idPuerto
 *
 * Se pide calcular e informar:
 * 1. El peso total que el buque debe trasladar
 * 2. El contenedor de mayor peso
 * 3. La cantidad de contenedores que se trasladarán a cada puerto
 *
Solución (pseudocódigo)

VARIABLES
	contenedor['idCont'], contenedor['peso'], contenedor['idPuerto']
	buque_peso_total = 0
	contenedor_mayor_peso = 0
	puerto_cant_contenedores[3]	// Son 3 el cero cuenta también (0,1,2)

	// El incremental del bucle, desde donde partirá
	contador = 0
	// Determino el numero de iteraciones que ejecutará el bucle
	cant_contenedores = 100

	contenedor_peso_aleatorio	puerto[1][]

INICIO
	// Genero los 100 contenedores
	MIENTRAS (contador < cant_contenedores)
		// Incremento en +1 por cada iteración
		contador++

		// Genero y guardo valores aleatorios para cada contenedor
		puerto_id_aleatorio // Entre 1 y 3
		contenedor_peso_aleatorio // 

		contenedor[contador]
		contenedor[puerto_id_aleatorio]
		contenedor[contenedor_peso_aleatorio]

		// Acumulo el peso de cada contenedor
		// para determinar el peso total
		buque_peso_total+=contenedor_peso_aleatorio

		// Si el peso del contenedor es mayor que el guardado
		SI(contenedor_peso_aleatorio > contenedor_mayor_peso)
			// Lo guardo para utilizar fuera del bucle
			contenedor_mayor_peso = contenedor_peso_aleatorio
		SI_FIN

		// Acumulo la cantidad de contenedores por puerto
		puerto_cant_contenedores[contador]+=1

	MIENTRAS_FIN
	
	// Muestro los datos procesados
	ESCRIBIR("Peso total del buque: " + buque_peso_total)
	ESCRIBIR("El contenedor de mayor peso es el" + contenedo_mayor_peso)

	MIENTRAS(contador < cantidad_puertos)
		ESCRIBIR("Cantidad de Contenedores del puerto" + contador)
		ESCRIBIR("es " + puerto_cant_contenedores[contador])
	MIENTRAS_FIN

FIN

*/
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <iomanip>

using namespace std;

int main(){
	srand(time(NULL));
	cout << setprecision(0)<<fixed;
	
	int contenedores_cantidad = 10;
	int puertos_cantidad = 3; //
	
	puertos_cantidad-=1; // Se resta 1, porque el indice cero cuenta también
		
	int buque_peso = 0;
	int contenedor_mayor_peso = 0;
	int contenedor_mayor_peso_id = 0;
	int contenedores_por_puerto[puertos_cantidad];

	int contenedor_id = 0; // idCont
	int contenedor_peso = 0;
	
	int puerto_id = 0; // idPuerto

	int	contador = 0;

	// inicializo cada elemento en cero
	for(int puerto_id=0; puerto_id <= puertos_cantidad; puerto_id++)
		contenedores_por_puerto[puerto_id] = 0;
	
	while(contador < contenedores_cantidad){
		contador++;
		
		contenedor_id = contador; //idCont
		contenedor_peso = (rand() % 200 + 1); // peso
		puerto_id = (rand() % 3 + 0);// 

		// peso total del buque
		buque_peso+=contenedor_peso;
		// cantidad contenedores que se trasladaran a cada puerto
		if(puerto_id >= 0 && puerto_id < 3)
			contenedores_por_puerto[puerto_id]+=1;
		
		if(contenedor_peso > contenedor_mayor_peso){
			contenedor_mayor_peso = contenedor_peso;
			contenedor_mayor_peso_id = contenedor_id;
		}

		printf("Contenedor %i, Peso %i kg, Puerto %i \n", contenedor_id, contenedor_peso, puerto_id+1);
		
	} // end while

	cout << '\n'; // new line
	cout << "Peso total del buque: ";
  cout << buque_peso << " kg" << endl;

	cout << "El contenedor de mayor peso es el " << contenedor_mayor_peso_id;
	cout << " con " << contenedor_mayor_peso << "kg"  << endl;

	for(int puerto_id=0; puerto_id <= puertos_cantidad; puerto_id++)
		printf("Puerto %i con %i contenedores \n", puerto_id+1, contenedores_por_puerto[puerto_id]);
	
	
	return 0;
}
