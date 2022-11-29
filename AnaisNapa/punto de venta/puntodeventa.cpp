#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
    float ASNO_x, ASNO_s = 0, ASNO_vb, ASNO_piva = 12, ASNO_viva, ASNO_pdesc = 10, ASNO_vdesc, ASNO_vn;  // determinamos las variables que vamos a utilizar en este caso números con decimales.
    int ASNO_i = 0, ASNO_l; // determinamos las variables que vamos a utilizar en este caso números enteros 
    cout << "Ingrese l: "; // determinamos al usuario que inicialice la variable 
    cin >> ASNO_l; // Le regresamos la variable ingresada al usuario la cual es la que ingresó en este caso.
    do // inicio del ciclo do.
    {
        cout << "Ingrese x: "; // determinamos al usuario que inicialice la variable 
        cin >> ASNO_x;  // Le regresamos la variable ingresada al usuario la cual es la que ingresó en este caso.
        ASNO_i = ASNO_i + 1;  // Inicio de los cálculos dependiendo de la condicional del do.
        ASNO_s = ASNO_s + ASNO_x;
    } while (ASNO_i < ASNO_l); // Condición que hará que este bucle se repita la cantidad de veces que se haya establecido.
    ASNO_vb = ASNO_s; // Realizamos las  operaciones adicionales para obtener un resultado.
    ASNO_viva = ASNO_vb * ASNO_piva / 100;
    ASNO_vdesc = ASNO_vb * ASNO_pdesc / 100;
    ASNO_vn = ASNO_vb + ASNO_viva - ASNO_vdesc;
    // Imprimimos al usuario el resultado de las operaciones correspondientes.
    cout << "El valor a pagar es de: " << ASNO_vn << endl;
    return 0;
}