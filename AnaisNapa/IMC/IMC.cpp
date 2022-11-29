#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
	float ASNO_imc,ASNO_peso,ASNO_altura; // determinamos las variables que vamos a utilizar en este caso números con decimales.
	cout<<"Ingrese el peso (kg): ";cin>>ASNO_peso; // determinamos al usuario que inicialice la variable de peso.
	cout<<"Ingrese la altura (metros): ";cin>>ASNO_altura; // determinamos al usuario que inicialice la variable de altura.
	ASNO_imc=ASNO_peso/(ASNO_altura*ASNO_altura); // Realizamos el respectivo cálculo para obtener IMC.
	// a continuacion, depende del resultado que obtengamos en el IMC
	// repartimos diferentes resultados según las siguientes condiciones	
	if(ASNO_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(ASNO_imc>=18.5 && ASNO_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(ASNO_imc>=25 && ASNO_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(ASNO_imc>=27 && ASNO_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(ASNO_imc>=30 && ASNO_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(ASNO_imc>=35 && ASNO_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(ASNO_imc>=40 && ASNO_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(ASNO_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}