#include <stdio.h>

//Printar namn, �lder och jobb. 
void person_print(const char* name, const int age, const char* occupation) //Passar in namn, �lder och jobb som argument. 
{
	printf("Name: %s\n", name); //Skriver ut samtliga variabler.
	printf("Age: %d\n", age); 
	printf("Occupation: %s\n", occupation);
	return;
}

//Programmets b�rjan.
int main(void)
{
	person_print("Donald Duck", 88, "Cartoon character"); //N�r vi kallar p� denna funktion passar vi information som ing�ende argument. 
	return 0;
}
