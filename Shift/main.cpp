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
	cout << "������� �� ������� ���� �������� �������� ������� � �������: "; cin >> n;

	for (int x : array)	cout << x << "  ";
	cout << "�������� ������"; 

#ifdef LEFT_SHIFT	// LEFT_SHIFT
	for (int i = 0; i < n; i++)	// ���-�� ������� ������ 
	{
		int perviy = array[0];

		for (int j = 0; j < f - 1; j++)	// ��������� ������� ������� �� ������ ���� 
		{									// ��� ������������ ����� ������� 
			array[j] = array[j + 1];
		}

		array[f - 1] = perviy;	// ������ ���������� �������� � ������ 

		cout << endl;

		for (int i = 0; i < f; i++)
		{
			cout << array[i] << "  ";
		}
	}
	cout << endl;
	cout << "��������� ������ � ����� �� " << n << endl;
#endif

#ifdef RIGHT_SHIFT	// RIGHT_SHIFT
	for (int i = 0; i < n; i++)	// ���-�� ������� ������ 
	{
		int posledniy = array[f - 1];	// ���������� ���������� ��������

		for (int j = f - 2; j >= 0; j--)	// ��������� ������� ������� �� ������ ���� 
		{									// ��� ������������ ����� ������� 
			array[j + 1] = array[j];
		}

		array[0] = posledniy;	// ������ ���������� �������� � ������ 

		cout << endl;

		for (int i = 0; i < f; i++)
		{
			cout << array[i] << "  ";
		}
	}
	cout << endl;
	cout << "��������� ������ � ����� �� " << n << endl;
#endif
}






