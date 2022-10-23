/*
	Detta stycke kod skriver resultatet av funktionen subtract, som med hjälp av pekare ändrar värdet på variabeln c.
*/

#include <stdio.h>


//Här tar vi emot variablerna som ingående argument.
void subtract(double a, double b, double* c){ 

	*c = a - b; //Ändrar med hjälp av en dereferensoperator värdet på c.
	return;
}


//Programmets början.
int main(){

	double a = 3.4; //Deklarerar a och b, samt tillskriver dem sina värden. 
	double b = 6.8;
	double c; //initierar variabeln c. 

	subtract(a, b, &c); //Skickar samtliga variabler till subtract-funktionen, inklusive adressen till variabeln c. 

	printf("%lg - %lg = %lg\n", a, b, c); //Skriver ut värdena på samtliga variabler. 

	return 0;
}
