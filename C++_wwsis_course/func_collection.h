//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ generated include file.
// Used by C++_wwsis_course.rc
//
#define start 
#define finish

// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        102
#define _APS_NEXT_COMMAND_VALUE         40002
#define _APS_NEXT_CONTROL_VALUE         1001
#define _APS_NEXT_SYMED_VALUE           101
#endif
#endif
/////////////////////////////////////////////////
#include <cstdio>
#include <string>
#include <cstring>
#include <cstdint>
#include <conio.h>
#include <iostream>
#include <cstdlib>
using namespace std;

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
	y = y * (threehalfs - (x2 * y * y));   // 2nd iteration, this can be removed

	return y;
}

double invsqrtQuake_x64(double number)
{
	double y = number;
	double x2 = y * 0.5;
	int64_t i = *(int64_t *)&y;
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

void TekstNaEkranie()
{
	cout << "Pierwszy program z wywolaniem funkcji typu void";
	cout << endl;
}


