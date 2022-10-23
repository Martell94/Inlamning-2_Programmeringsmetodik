# Inlamning-2_Programmeringsmetodik

1.c: 
Jag föredrar definitivt att använda pekare i denna. 
Det är supersmidigt att kunna deklarera en variabels värde som returvärdet från en funktion, men det är i mitt tycke ännu smidigare att slippa "flytta omkring"
variabeln, och inte behöva fippla med returtyper. 

2:
static void* person_print var ett av de första sakerna jag korrigerade. Sen så hade åldern av någon anledning fått typen size_t när den passades in,
vilket jag ändrade till int. Man hade också satt dereferensoperatorer på name och occupation när de skulle printas, vilka jag plockade bort. 
