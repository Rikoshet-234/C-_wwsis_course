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
/*
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
*/

/*
#include <iostream>
//#include <cstdlib>
using namespace std;

int main()
{
	int test_[3] = { 3, 6, 19090 };
	cout << test_[2] << endl;
	system("pause");
	return 0;
}
*/
/*
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int tab[5] = { 1, 2, 5 };
	for (int i = 0; i < 5; i++) 
	{
		if (tab[i] % 2 == 0) 
		{
			cout << tab[i] << endl;
		}
	}
	for (int i = 0; i < 5; i++) 
	{
		if (tab[i] % 2) 
		{
			cout << tab[i] << endl;
		}
	}
	cout << " " << endl;
//	cout << test_[2] << endl;
	system("pause");
	return 0;
}
*/
/*
//#include "stdafx.h";
#include <iostream>
using namespace std;

int main() 
{
	int const lichba_ocen = 6;
	double oceny[lichba_ocen];
	float qwert4567 = 734938.687677867868;
	cout << qwert4567 << endl;
	oceny[0] = 4.5;
	oceny[1] = 6;
	oceny[2] = 2;
	oceny[3] = 3;
	oceny[4] = 4;
	oceny[5] = 5;

	double srednia = 0;
	for (int i(0); i < lichba_ocen; ++i) 
	{
		srednia += oceny[i];
	}
	srednia /= lichba_ocen;
	cout << "twoja srednia wynosi " << srednia << endl;
	system("pause");
	return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main() 
{
	int t1[3] = { 1, 2, 12 };
	int t2[3] = { 3, 5, 3 };
	int suma[3];
	for (int i = 0; i < 3; i++)
	{
		suma[i] = t1[i] + t2[i];
	}
	for (int o = 0; o < 3; o++ ) 
	{
		cout << suma[o] << " " << endl;
	}
	cout << endl;
	system("pause");
}
*/
/*
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
*/
/*
#include <cstdlib>
#include <iostream>
#include <ctime>

int main()
{
	// Используем текущее время как начальное значение для генератора случайных чисел
	std::srand(unsigned(std::time(0)));
	int random_variable = std::rand();
	std::cout << "Случайное значение на отрезке [0 " << RAND_MAX << "]: "
		<< random_variable << '\n';
}
*/
/*
#include <algorithm>
#include <cstdlib>
#include <conio.h>
#include <functional>
#include <array>
#include <iostream>
using namespace std;

int main()
{
	array<int, 10> s = { 5, 7, 4, 2, 8, 6, 1, 9, 0, 3 };

	// sort using the default operator<
	sort(s.begin(), s.end());
	for (auto a : s) {
		cout << a << " ";
	}
	cout << '\n';

	// sort using a standard library compare function object
	sort(s.begin(), s.end(), greater<int>());
	for (auto a : s) {
		cout << a << " ";
	}
	cout << '\n';

	// sort using a custom function object
	struct {
		bool operator()(int a, int b) const
		{
			return a < b;
		}
	} customLess;
	sort(s.begin(), s.end(), customLess);
	for (auto a : s) {
		cout << a << " ";
	}
	cout << '\n';

	// sort using a lambda expression 
	sort(s.begin(), s.end(), [](int a, int b) {
		return a > b;
	});
	for (auto a : s) {
		cout << a << " ";
	}
	cout << '\n';
	system("pause");
}
*/

/*
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int tab[15][20];
int start, finish, type_of_sorting;

int check_range()
{
	cout << "Give the start number of random range: " << endl;
	cin >> start;
	cout << "Give the end number of random range: " << endl;
	cin >> finish;

	if (start > finish)
	{
		int buf = start;
		start = finish;
		finish = buf;
	}
}

int fillTabWith300RandNum(int a, int b)
{
	for (int i = 0; i < 300; i++)
	{
		tab[i] = rand() % (finish - start + 1) + start;
	}
	cout << "" << endl;
}

int ascend_sorting()
{
	for (int i = 0; i < 300; i++)
	{
		for (int j = i; j < 300; j++)
		{
			int tmp = tab[i];
			if (tab[j] < tmp)
			{
				tab[i] = tab[j];
				tab[j] = tmp;
			}
		}
	}
}

int descend_sorting()
{
	for (int i = 0; i < 300; i++)
	{
		for (int j = i; j < 300; j++)
		{
			int tmp = tab[i];
			if (tab[j] > tmp)
			{
				tab[i] = tab[j];
				tab[j] = tmp;
			}
		}
	}
}

void display_table()
{
	for (int i = 0; i < 300; i++)
	{
		cout << tab[i] << endl;
	}
}


int main()
{
	srand(time(NULL));
	cout << "Give the range of numbers to generate random 300 numbers" << endl;
	cout << "------------" << endl;

	check_range();

	fillTabWith300RandNum(start, finish);


	while (true)
	{
		cout << "What kind of sorting use: ascend or descend?" << endl;
		cout << "1. Ascend" << endl;
		cout << "2. Descend" << endl;
		cout << "3. exit" << endl;
		cout << "Make your choice:  ";
		cin >> type_of_sorting;

		switch (type_of_sorting)
		{
		case 1:
			//Ascend sorting
			ascend_sorting();
			display_table();
			break;

		case 2:
			//Descend sorting
			descend_sorting();
			display_table();

			break;

		case 3:
			exit(0);

		default:
			cout << "Make your choice from 1,2 or 3." << endl;
			break;
		}
	}
	return 0;
}
*/

/*
#include <cstdlib>
#include <iostream>
using namespace std;

int zm_globalna = 8; // zmienna globalna

void funkcja_a() 
{
	int zm_globalna = 25; // nadpisanie zmiennej-
	// globalnej i stworzenie lokalnej o takiej samej nazwie
	cout << "wartosc zmiennej lokalnej = " << zm_globalna << endl;
	// zmienna lokalna z zasiegim tylko na terenie funkcji funkcja_a()
}

int main() 
{
	funkcja_a();
	cout << "wartosc zmiennej globalnej =" << zm_globalna; // zmienna
	// globalna
	cout << endl;
	system("pause");
	return 0;
}
*/
/*
#include <algorithm>
#include <cstdlib>
#include <conio.h>
#include <functional>
#include <array>
#include <iostream>
using namespace std;
*/
/*
#include <iostream>
#include <time.h>
#include <algorithm>

using namespace std;

int main() {
	int array[10][10][10];
	bool unique[10000];
	for (int i = 0; i < 10000; i++)
		unique[i] = 0;
	srand(time(NULL));

	int n = 5, m = 5, q = 5, num;


	// cout << "Enter matrix size n, m, q\n";
	// cin >> n >> m >> q;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			for (int k = 0; k < q; k++) {
				do {
					num = rand() % 999;
				} while (unique[num] != 0);
				array[i][j][k] = num;
				unique[num] = 1;
			}

	cout << "Random unsorted matrix 5*5*5\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < q; k++) {
				cout << array[i][j][k] << " ";
			}
			cout << "\n";
		}
		cout << "\n";
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			sort(array[i][j], array[i][j] + q);
		}
	}

	cout << "\nRandom sorted matrix 5*5*5\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < q; k++) {
				cout << array[i][j][k] << " ";
			}
			cout << "\n";
		}
		cout << "\n";
	}
	system("pause");
}
*/
#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int tab[10][10];

void Rand_10x10_fill(int start, int finish)
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			tab[i][j] = rand() % (finish - start + 1) + start;
		}
	}
}
/*
void sort()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			int tmp = tab[i];
			if (tab[j] > tmp)
			{
				tab[i] = tab[j];
				tab[j] = tmp;
			}
		}
	}
}
*/
/*
void display_table()
{
	for (int j = 0; j < 10; j++)
	{
		for (int i = 0; i < 10; i++)
		{
			cout << tab[i][j] << endl;
		}
	}
}
*/

void disp() {
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << " " << tab[i][j];
		}
		cout << endl;
	}
}

const int size = 7;

/*
for (int i=0; i<size; i++) {
	for (int j=0; j<size; j++)
		cout << " " << MAS[i][j];
	cout << endl; }
*/

int main()
{
	srand(time(NULL));
	Rand_10x10_fill(1, 900);
	cout << endl;
	cout << "macierz randomowa" << endl;
	cout << endl;
	disp();
	cout << endl;
	cout << "macierz odsortowana" << endl;
/*
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << tab[i][j] << " ";
		}
		cout << "\n";
	}
*/
	cout << endl;
	//sort();

	disp();
	cout << endl;
	system("pause");
}





