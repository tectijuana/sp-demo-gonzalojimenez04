// factorial.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream> 
#include <iomanip> 
#include <conio.h> 
#include <ctype.h> 
#define pi 3.1416 
int factorial(int n); 

int main() { int n; float p; 

std::cout<<"\nEste programa calcula el factorial de un numero y lo divide entre pi"; 
std::cout<<"\nIngrese un valor para (n!), n= "; std::cin>>n;
std::cout<<"\nEl valor del factorial es: "<<factorial(n);
p=factorial(n)/pi; 
std::cout<<"\nEl factorial entre pi=3.1416 es: "<<p; std::cout<<std::setiosflags(std::ios::fixed|std::ios::showpoint);
std::cout<<"\nY aproximando a dos decimales: "; std::cout<<std::setprecision(2)<<p; 
} 
int factorial(int n) 
{ 
	if (n==0) return(1); 
	
	else return(n*factorial(n-1)); 
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
