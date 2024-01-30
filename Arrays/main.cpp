//Arrays
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL,  "");

	int a = 5, b = 4;
	cout << a << "   " << b;
	a ^= b ^= a ^= b;
	cout << a << " | " << b;



	int n;
	int f, s, sum = 0;
	cin >> n;
	int *arr = new int[n];
	//int arr[n];

	
	for (int i = 0; i < n; i++)
	{
		cout << "arr " << i << " = ";
		cin >> arr[i];
		
	}

	cout << endl;
	cout << "вывод массива по порядку от 0-го до последнего: ";
	for (int i = 0; i < n; i++)	cout << arr[i] << " ";

	cout << endl;
	cout << "вывод массива по порядку от последнего до  0-го: ";
	for (int i = n; i > 0; i--)	cout << arr[i-1] << " ";
	
	cout << endl;
	cout << "Вывод суммы всех чисел массива: ";
	for (int i = 0; i < n; i++)
	{
		s = arr[i];
		sum += s;

	}
	cout << sum;
	cout << endl;
	double sum_double = sum;
	cout << "среднее арифметическое значение массива: " << sum_double / 2;

	cout << endl;
	int max = arr[0];
	int min = arr[0];
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
		
	}
	cout << "Максимальный элемент массива: " << max << endl;
	cout <<"Минимальный элемент массива: " << min;
	cout << endl;
}
/* статического arr
for(int x: arr)
	{
		cout << x << " ";
	}
*/
//arr[1] = 1024;	//обращение к элементу массива на запись
//arr[3] = 3072;	//обращение к элементу массива на запись
//cout << arr[1] << endl;	// обращение к элементу массива