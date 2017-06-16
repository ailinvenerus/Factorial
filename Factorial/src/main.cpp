/*
 * main.cpp
 *
 *  Created on: 11 de jun. de 2017
 *      Author: AILIN
 */

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <iomanip>
#include <ctype.h>
using namespace std;

int factorial (int numero) {
	int elFactorial;
	if (numero == 0 || numero == 1) {
		elFactorial = 1;
	} else {
		elFactorial = numero * (factorial(numero-1));
	}
	return elFactorial;
}

int main(int argc, char **argv) {
	int numero;
	cout<<"Ingresar un numero para calcular su factorial: ";
	cin>> numero;
	cout<<factorial(numero);
}


