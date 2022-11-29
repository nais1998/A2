#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
	float ASNO_x,ASNO_s=0; // determinamos las variables que vamos a utilizar en este caso números con decimales.
	int ASNO_i=0,ASNO_l; // determinamos las variables que vamos  a utilizar en este caso números enteros 
	cout<<"Ingrese cantidad de egresos  ";cin>>ASNO_l; // determinamos al usuario que inicialice la variable 
	cout<<"Ingrese saldo inicial : ";cin>>ASNO_s; // determinamos al usuario que inicialice la variable 
	
	do{ // inicio del ciclo Do.
	cout<<"Ingrese egreso(x): ";cin>>ASNO_x; // determinamos al usuario que inicialice la variable 
	ASNO_i=ASNO_i+1; //  Realizamos las respectivas operaciones..
	ASNO_s=ASNO_s-ASNO_x;

	}while(ASNO_i<ASNO_l); // Condicional que hará que el do se repita en bucle la cantidad de veces que sea necesaria.
	// Imprimimos en consola al usuario el resultado de las operaciones respectivas.
	cout<<"El saldo final es: "<<ASNO_s<<endl;
	return 0;
}