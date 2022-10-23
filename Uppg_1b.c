/*
	Detta stycke kod skriver resultatet av funktionen subtract, som med hj�lp av pekare �ndrar v�rdet p� variabeln c.
*/

#include <stdio.h>


//H�r tar vi emot variablerna som ing�ende argument.
void subtract(double a, double b, double* c){ 

	*c = a - b; //�ndrar med hj�lp av en dereferensoperator v�rdet p� c.
	return;
}


//Programmets b�rjan.
int main(){

	double a = 3.4; //Deklarerar a och b, samt tillskriver dem sina v�rden. 
	double b = 6.8;
	double c; //initierar variabeln c. 

	subtract(a, b, &c); //Skickar samtliga variabler till subtract-funktionen, inklusive adressen till variabeln c. 

	printf("%lg - %lg = %lg\n", a, b, c); //Skriver ut v�rdena p� samtliga variabler. 

	return 0;
}
