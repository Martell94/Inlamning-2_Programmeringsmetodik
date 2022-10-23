/*
	Detta stycke kod skriver resultatet av funktionen subtract, som med hjälp av pekare ändrar värdet på variabeln c.
*/

#include <stdio.h>


// Här tar vi emot variablerna som ingående argument.
double subtract(const double a, const double b){

	return (a - b);
}


//Programmets början.
int main(){

	double a = 3.4; //Deklarerar a och b, samt tillskriver dem sina värden. 
	double b = 6.8;

	double c = subtract(a, b); //Här deklarerar jag double c och anger dess värde som returvärdet på funktionen subtract. 

	printf("%lg - %lg = %lg\n", a, b, c); //Skriver ut värdena på samtliga variabler. 

	return 0;
}