#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
	float ASNO_x,ASNO_s=0,ASNO_s1=0,ASNO_s5=0; // declaramos las variables que vamos a utilizar con decimales
	int ASNO_i=0,ASNO_l,ASNO_i1=0,ASNO_i5=0; // declaramos las variables que vamos a utilizar únicamente enteras.
	cout<<"Ingrese l: ";cin>>ASNO_l; // declaramos la variable que en este caso será determinada por el usuario
	do{ // ingresamos a un ciclo do

	cout<<"Ingrese x: ";cin>>ASNO_x; // determinamos al usuario que ingrese la variable de x
	ASNO_i=ASNO_i+1; // hacemos los respectivos cálculos
	ASNO_s=ASNO_s+ASNO_x;
	if(ASNO_x==1){ // Condicional dependiente del cálculo anterior
		ASNO_i1=ASNO_i1+1;
		ASNO_s1=ASNO_s1+ASNO_x;
	}else{ // si la condición anterior no se cumple a partir del cálculo anterior, se hará un cálculo alternativo.

		ASNO_i5=ASNO_i5+1;
		ASNO_s5=ASNO_s5+ASNO_x;
	}

	}while(ASNO_i<ASNO_l); // Ciclo Do, se repetirá siempre y cuando i sea mayor a l
	// a continuación arrojamos al usuario los resultados de nuestras operaciones.
	cout<<"La cantidad de monedas es: "<<ASNO_i<<endl;
	cout<<"El valor es: "<<ASNO_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<ASNO_i1<<endl;
	cout<<"El valor es: "<<ASNO_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<ASNO_i5<<endl;
	cout<<"La cantidad de moneda es: "<<ASNO_s5<<endl;
	return 0;
}