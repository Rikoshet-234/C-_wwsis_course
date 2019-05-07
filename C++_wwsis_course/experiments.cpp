/*
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 0;
	cout << "Enter a number 1 \n";
	cin >> a;
	cout << "Enter a number 2 \n";
	cin >> b;
	cout << "Enter a number 3 \n";
	cin >> c;
		int abc ;
		abc = a + b + c * a * b * c;
		cout << "Number 1 = "<< a << "\n";
		cout << "Number 2 = "<< b << "\n";
		cout << "Number 3 = "<< c << "\n";
		cout << "multiply+add  " << a << "+" << b << "+" << c << "*" << a << "*" << b << "*" << c << " = "<< abc << "\n";
		system("pause");
	return 0;
}
*/
/*
//Polskie znaki w programie
#include <cstdio>
#include <conio.h>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
char *zmiana(char *str_pl)
{
	static char tab1[255];
	char znaki_pl[] = "\245\206\251\210\344\242\230\276\253\244\217\250\235\343\340\227\275\215ąćęłńóśżźĄĘŁŃÓŚŻŹ";
	if (strlen(str_pl) >= sizeof(tab1)) return str_pl;
	char *bf = tab1;
	while (*str_pl)
	{
		char *pos = strchr(znaki_pl + 18, *str_pl);
		*(bf++) = pos ? *(pos - 18) : *str_pl;
		++str_pl;
	}
	*bf = 0;
	return tab1;
}
int main()
{ // ć ł ś ó ą ę ż ź ń
	string napis = " 1 - \206\210\230\242\245\251\253\276\344";
	cout << napis;
	cout << "\n\n";
	cout << zmiana(" 2 - proszę podać treść hasła"); // będą polskie znaki
	cout << "\n\n";
	cout << (" 3 -prosz\251 poda\206 tre\230\206 has\210a");//są //polskie znaki
	cout << zmiana("\n\n podaj słowo z polskimi znakami ");
	cin >> napis;
	cout << napis;
	getch();
	return 0;
}
*/
/*
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = ++a; // na początku zostanie zwiększona wartość
	// zmiennej a o 1, a potem zostanie użyta wartość 11
	cout << "a = " << a << "; " << "b = "<< b; // a = 11; b = 11
	return 0;
}
*/
/*
#include <iostream>
#include <conio.h>
using namespace std;
void TekstNaEkranie(); //prototyp funkcji
void main() //funkcja główna
{
	TekstNaEkranie(); //wywołanie funkcji w programie głównym
	_getch();
} //koniec programu głównego
void TekstNaEkranie()
{
	cout << "Pierwszy program z wywolaniem funkcji typu void";
	cout << endl;
}
*/
#include <cstdint>
#include <iostream>
#include <cstdlib>
using namespace std;

float Q_rsqrt(float number)
{
	long i;
	float x2, y;
	const float threehalfs = 1.5F;

	x2 = number * 0.5F;
	y = number;
	i = *(long *)&y;                       // evil floating point bit level hacking
	i = 0x5f3759df - (i >> 1);               // what the fuck? 
	y = *(float *)&i;
	y = y * (threehalfs - (x2 * y * y));   // 1st iteration
	y  = y * ( threehalfs - ( x2 * y * y ) );   // 2nd iteration, this can be removed

	return y;
}

double invsqrtQuake_x64(double number)
{
	double y = number;
	double x2 = y * 0.5;
	int64_t i = *(int64_t *) &y;
	// The magic number is for doubles is from https://cs.uwaterloo.ca/~m32rober/rsqrt.pdf
	i = 0x5fe6eb50c7b537a9 - (i >> 1);
	y = *(double *)&i;
	y = y * (1.5 - (x2 * y * y)); // 1st iteration //
	y = y * (1.5 - (x2 * y * y));// 2nd iteration, this can be removed return y;
	return y;
}

int dodawanie(int a, int b)
{
	cout << "\n" << a << " + " << b << " = ";
	return a + b;
}
int main()
{
	float d, a = 32, b = 64;
	cin >> a >> b;
	d = dodawanie(a, b);
	cout << d << "\n";
	d = dodawanie(b, a);
	cout << d << "\n";
	cout << invsqrtQuake_x64(a) << " = Quake style x64 root of D \n";
	cout << Q_rsqrt(a) << " = Quake style x32 root of " a << endl;
	system("PAUSE");
	return EXIT_SUCCESS;
}
