// GEOMETRIA

#include <iostream>
using namespace std;
//#define SQUARE
//#define TRIANGLE_ONE
//#define TRIANGLE_TWO
//#define TRIANGLE_THREE
int main()
{
	setlocale(LC_ALL,"rus");
	int n;
	cout << "Введите количество звездочек: "; cin >> n;
#ifdef SQUARE
	for (int i = 0; i < n; i++) //повторяет вывод строки на экран
	{
		for (int i = 0; i < n; i++)//выводит строку из *
		{
			cout << "* ";
		}
		cout << endl; //после вывода строки переходим на новую
	}
#endif
#ifdef TRIANGLE_ONE
	for (int i = 0; i <= n; i++) //повторяет вывод строки на экран
	{
		for (int j = 0; j < i; j++)//выводит строку из *
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif
#ifdef TRIANGLE_TWO
	for (int i = 0; i < n; n--)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif
#ifdef TRIANGLE_THREE
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "  ";
		}
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//((i+j) % 2 == 0) ? cout << "+ ": cout << "- ";
			//(i + j) % 2 == 0 ? cout << "+ " : cout << "- ";
		   //cout << ((i + j) % 2 == 0 ? "+ ":"- ");
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}



}

