#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
    int ASNO_aa, ASNO_ma, ASNO_da, ASNO_an, ASNO_mn, ASNO_dn, ASNO_a, ASNO_m, ASNO_d; // declaramos las variables que vamos a utilizar.. en este caso números enteros
    cout << "Ingrese la fecha actual Año-Mes-Dia :"; // enviamos un texto de salida que indique al usuario un formato a enviarnos
    cin >> ASNO_aa >> ASNO_ma >> ASNO_da; // enviamos las variables de entrada de texto a través del teclado para recibir los datos que nos envíe el usuario
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : "; // enviamos texto de salida indicando al usuario formato a enviarnos.
    cin >> ASNO_an >> ASNO_mn >> ASNO_dn;// enviamos las variables de entrada de texto a través del teclado para recibir los datos que nos envíe el usuario

    if (ASNO_da > ASNO_dn) // Condiciónal, verificamos si el día de la fecha de nacimiento es iguala al día actual
    {

        ASNO_d = ASNO_da - ASNO_dn; // realizamos la respectiva operación para el cálculo
    }
    else // en caso de que no se cumpla la condición anterior nos saltamos y realizamos un cálculo alternativo.
    {
        // realizamos la respectiva operación para el cálculo
        ASNO_da = ASNO_da + 30;
        ASNO_ma = ASNO_ma - 1;
        ASNO_d = ASNO_da - ASNO_dn;
    }
    // Condicional. verificamos si el Mes actual es mayor que el mes de nacimiento.
    if (ASNO_ma > ASNO_mn)
    {

        ASNO_m = ASNO_ma - ASNO_mn; // realizamos la respectiva operación para el cálculo
    }
    else // en caso de que no se cumpla la condición anterior nos saltamos y realizamos un cálculo alternativo.
    {
         // realizamos la respectiva operación para el cálculo 
        ASNO_ma = ASNO_ma + 12;
        ASNO_aa = ASNO_aa - 1;
        ASNO_m = ASNO_ma - ASNO_mn;
    }
    // Finalizamos con el cálculo usando la operación entre el año actual y el de nacimiento
    ASNO_a = ASNO_aa - ASNO_an;
    // arrojamos el resultado de nuestra operación.
    cout << "Usted tiene " << ASNO_a << " años, " << ASNO_m << " meses," << ASNO_d << " dias" << endl;
    return 0;
}