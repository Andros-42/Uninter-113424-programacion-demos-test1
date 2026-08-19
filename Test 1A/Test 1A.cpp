/*
* Nombre del programa: Test 1A.cpp
* Descripción: Programa que realiza la suma de dos números ingresados por el usuario
* nombre del programador: Andres Reyes Romero
* FECHA: 19-08-26
* FECHA DE MODIFICACIÓN: 19-08-26
*/

#include <iostream>

int main()
{
	int a = 0;
	int b = 0;
	int suma = 0;

	printf("Digite un numero: ");
	scanf_s("%d", &a);

	printf("Digite otro numero: ");
	scanf_s("%d", &b);

	suma = a + b;

	std::cout << "La suma de " << a << " y " << b << " es: " << suma << std::endl;

}