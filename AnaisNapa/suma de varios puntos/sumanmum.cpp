#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa 
{
    float ASNO_x,ASNO_s=0.0; // determinamos las variables que vamos a utilizar en este caso números con decimales.
    int ASNO_i=0, ASNO_l;  // determinamos las variables que vamos  a utilizar en este caso números enteros 
    cout<<"Ingrese el valor de ASNO_l: ";  // determinamos al usuario que inicialice la variable 
    cin>>ASNO_l;
    do{ // incio del bucle Do.
        cout<<"Ingrese el valor de ASNO_x: ";  // determinamos al usuario que inicialice la variable 
        cin>>ASNO_x;
        ASNO_i=ASNO_i+1; // Realizamos las respectivas operaciones para obtener nuestro resultado
        ASNO_s=ASNO_s+ASNO_x;
    }while(ASNO_i<ASNO_l); // Condicional que hará que el bucle Do se repita la cantidad de veces que sean necesarias.
    // Imprimimos por consola el resultado de nuestras operaciones 
    cout <<"La suma de los numeros fue: "<<ASNO_s<<endl;
    return 0;

}