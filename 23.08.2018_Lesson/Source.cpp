#include <iostream>
#include <iomanip>
#include<math.h>
#include<ctime>
#include<cstdlib>
#include<stdio.h>

using namespace std;

void fill_arr(int arr[][10], int n, int m) { // при передаче двумерного массива
	// второй размер всегда надо указывать
	// неудобно, т.к. не подходит для массивов других размеров
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			arr[i][j] = rand() % 120;

}
void print_arr(int arr[][10], int n, int m) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}


int main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	int tn = 0;

	while (true)
	{
		cout << "Задача № ";
		cin >> tn;

		switch (tn)
		{
		case 1:
		{
			int a[10][10];
			fill_arr(a, 10, 10);
			print_arr(a, 10, 10);
		}
		break;
		case 2:
		{
			int *p;
			int a, b;
			int arr[10]; //название массива и есть указатель, хранящий адрес самого первого элемента массива 
			a = 100;
			b = 45;
			p = &a;
			p = arr;
			//cout << p << " " << &a << endl; // при выводе это одно и то же стало

			p = &b; // перезапись указателя, теперь он указывает на b

			cout << *p << endl; // * 1) оператор разминовывания (dereferencing): для объявления переменной
			//и 2) для извлечения значения той переменной, на которую указывает

			cout << arr << " " << &arr[0] << endl; // нагладно название массива = адрес первой ячейки массива
			cout << arr + 1 << " " << &arr[1] << endl;
		}
		break;
		case 3:
		{
			int a, b;
			int arr[10];
			int *p = arr + 5;
			cout << p - arr << endl;
		}
		break;
		case 4:
		{
			int a, b, *p, *p1;

			int arr[10];
			p = arr;

			/*for (int i = 0; i < 10; i++)
				cin >> arr[i];*/

			for (int i = 0; i < 10; i++)
				cin >> *(arr + i);

			for (; p < arr + 10; p++) // инициализация пропущена, т.к. есть ранее
				cout << *p << " ";
			cout << endl;
		}
		break;
		case 5:
		{
			int ab[10];
			int *p;

			int sum = 0;

			for (p = ab; p < ab + 10; p++)
			{
				*p = -25 + rand() % 35;
				cout << *p << " ";
				sum += *p;
			}
			cout << endl << endl;

			cout << sum << endl;
		}
		break;
		case 6:
		{
			int ac[10];
			int *p;

			unsigned long long int pr = 1;

			for (p = ac; p < ac + 10; p++)
			{
				*p = -44 + rand() % 76;
				cout << *p << " ";
				pr *= *p;
			}
			cout << endl << endl;

			cout << pr << endl;
		}
		break;
		case 7:
		{
			int ab[10];
			int *p;

			int sum = 0;

			for (p = ab; p < ab + 10; p++)
			{
				*p = -15 + rand() % 105;
				cout << *p << " ";
				sum += *p;
			}
			cout << endl << endl;

			cout << sum/10 << endl;
		}
		break;
		case 8:
		{

		}
		break;
		case 9:
		{

		}
		break;
		case 10:
		{

		}
		break;
		case 11:
		{

		}
		break;
		case 12:
		{

		}
		break;
		case 13:
		{

		}
		break;
		case 14:
		{

		}
		break;
		case 15:
		{

		}
		break;
		case 16:
		{

		}
		break;
		default:
			cout << "нет такой задачи" << endl << endl;
		}
	}
	system("pause");
	return 0;
}