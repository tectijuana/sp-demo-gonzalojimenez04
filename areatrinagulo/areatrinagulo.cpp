// areatrinagulo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <math.h>
int main()
{
float a,b,c; /*Se define el tipo de
dato_entrada*/
float p,at; /*Se define el tipo de
dato_salida*/
std::cout<<"Ingrese el valor del lado a: ";std::cin>>a;
std::cout <<"Ingrese el valor del lado b: "; std::cin >>b;
std::cout <<"Ingrese el valor del lado c: "; std::cin >>c;
p=(a+b+c)/2.0;
at=sqrt(p*(p-a)*(p-b)*(p-c));
std::cout <<at;

}
/* otra forma:
cout<<"El area del triangulo de "<<a<<", "<<b<<", "<<c<<" es:
"<<at;
getch();
*/


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
