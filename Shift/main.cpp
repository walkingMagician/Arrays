#include<iostream>
using namespace std;


#define LEFT_SHIFT
//#define RIGHT_SHIFT

void main()
{
	setlocale(LC_ALL, "");

	const int f = 10;
	int array[f] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};

	int n;
	cout << "Введите на сколько надо сдвинуть элементы массива в сторону: "; cin >> n;

	for (int x : array)	cout << x << "  ";
	cout << "Исходный массив"; 

#ifdef LEFT_SHIFT	// LEFT_SHIFT
	for (int i = 0; i < n; i++)	// кол-во сдвигов вправо 
	{
		int perviy = array[0];

		for (int j = 0; j < f - 1; j++)	// дублирует элемент массива по своему ходу 
		{									// для выравнивания всего массива 
			array[j] = array[j + 1];
		}

		array[f - 1] = perviy;	// запись последнего элемента в первый 

		cout << endl;

		for (int i = 0; i < f; i++)
		{
			cout << array[i] << "  ";
		}
	}
	cout << endl;
	cout << "Результат сдвига в влево на " << n << endl;
#endif

#ifdef RIGHT_SHIFT	// RIGHT_SHIFT
	for (int i = 0; i < n; i++)	// кол-во сдвигов вправо 
	{
		int posledniy = array[f - 1];	// сохранение последнего элемента

		for (int j = f - 2; j >= 0; j--)	// дублирует элемент массива по своему ходу 
		{									// для выравнивания всего массива 
			array[j + 1] = array[j];
		}

		array[0] = posledniy;	// запись последнего элемента в первый 

		cout << endl;

		for (int i = 0; i < f; i++)
		{
			cout << array[i] << "  ";
		}
	}
	cout << endl;
	cout << "Результат сдвига в право на " << n << endl;
#endif
}






