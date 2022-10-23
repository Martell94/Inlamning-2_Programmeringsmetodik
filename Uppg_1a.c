/*
	Detta stycke kod skriver resultatet av funktionen subtract, som med hj�lp av pekare �ndrar v�rdet p� variabeln c.
*/

#include <stdio.h>


// H�r tar vi emot variablerna som ing�ende argument.
double subtract(const double a, const double b){

	return (a - b);
}


//Programmets b�rjan.
int main(){

	double a = 3.4; //Deklarerar a och b, samt tillskriver dem sina v�rden. 
	double b = 6.8;

	double c = subtract(a, b); //H�r deklarerar jag double c och anger dess v�rde som returv�rdet p� funktionen subtract. 

	printf("%lg - %lg = %lg\n", a, b, c); //Skriver ut v�rdena p� samtliga variabler. 

	return 0;
}