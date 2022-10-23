#include <stdio.h>

// Denna funktion har som uppgift att best�mma v�rdena p� u, i och r. 
// Vi anv�nder "*" som �ndelse p� datatypen f�r att signalera att ing�ende argument ska behandlas som pekare. 
void electrical_set(double* u, double* i, double* r) { 

	*u = 3.4;
	*i = 6.8;
	*r = (*u / *i); //H�r s�tter vi v�rdet p� r som u/i, i enighet med ohms lag.
	return; //Inget returneras.
}


//Denna funktion har som uppgift att printa relevanta siffror till terminalen. 
//Vi undviker pekare och dylikt h�r, d� vi bara beh�ver l�sa v�rdet, inte �ndra det.
void electrical_print(const double u, const double i, const double r) {

	printf("--------------------------------\n");//lite prydligare med dessa. 
	printf("Voltage: %lg V\nCurrent: %lg mA\nResistance: %lg kOhm\n", u, i, r); //Skriver ut samtliga variabler enl. uppgift. 
	printf("--------------------------------\n");
	return;
}


//Programmets b�rjan.
int main() {

	double u, i, r; //Deklarerar n�dv�ndiga variabler.

	electrical_set(&u, &i, &r); //Skickar adresserna till u, i och r, f�r bruk i electrical_set.
	electrical_print(u, i, r); //Skickar v�rdena p� u, i och r f�r utskrift i electrical_print

	return 0;
}