// ordeno3enteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream> 
#include <conio.h> 
int main()
{
	int a, b, c, temp;
	std::cout << "Ingrese un numero: "; std::cin >> a;
	std::cout << "Ingrese un segundo numero: "; std::cin >> b;
	std::cout << "Ingrese un tercer numero: "; std::cin >> c;
	if (a > b) { temp = a;    a = b;    b = temp; }
	if (a > c) { temp = a;    a = c;    c = temp; }
	if (b > c) { temp = b;    b = c;    c = temp; }
	std::cout << "Ordenando " << a << " , " << b << " y " << c << " de menor a mayor seria:";
	std::cout << "\n" << a << " , " << b << " , " << c << "";
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
