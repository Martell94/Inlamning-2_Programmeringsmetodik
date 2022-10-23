#include <stdio.h>

// Denna funktion har som uppgift att bestämma värdena på u, i och r. 
// Vi använder "*" som ändelse på datatypen för att signalera att ingående argument ska behandlas som pekare. 
void electrical_set(double* u, double* i, double* r) { 

	*u = 3.4;
	*i = 6.8;
	*r = (*u / *i); //Här sätter vi värdet på r som u/i, i enighet med ohms lag.
	return; //Inget returneras.
}


//Denna funktion har som uppgift att printa relevanta siffror till terminalen. 
//Vi undviker pekare och dylikt här, då vi bara behöver läsa värdet, inte ändra det.
void electrical_print(const double u, const double i, const double r) {

	printf("--------------------------------\n");//lite prydligare med dessa. 
	printf("Voltage: %lg V\nCurrent: %lg mA\nResistance: %lg kOhm\n", u, i, r); //Skriver ut samtliga variabler enl. uppgift. 
	printf("--------------------------------\n");
	return;
}


//Programmets början.
int main() {

	double u, i, r; //Deklarerar nödvändiga variabler.

	electrical_set(&u, &i, &r); //Skickar adresserna till u, i och r, för bruk i electrical_set.
	electrical_print(u, i, r); //Skickar värdena på u, i och r för utskrift i electrical_print

	return 0;
}