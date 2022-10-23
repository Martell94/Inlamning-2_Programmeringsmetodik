#include <stdio.h>

//Printar namn, ålder och jobb. 
void person_print(const char* name, const int age, const char* occupation) //Passar in namn, ålder och jobb som argument. 
{
	printf("Name: %s\n", name); //Skriver ut samtliga variabler.
	printf("Age: %d\n", age); 
	printf("Occupation: %s\n", occupation);
	return;
}

//Programmets början.
int main(void)
{
	person_print("Donald Duck", 88, "Cartoon character"); //När vi kallar på denna funktion passar vi information som ingående argument. 
	return 0;
}
