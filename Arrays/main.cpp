//Arrays
#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL,  "");
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
	cout << "����� ������� �� ������� �� 0-�� �� ����������: ";
	for (int i = 0; i < n; i++)	cout << arr[i] << " ";

	cout << endl;
	cout << "����� ������� �� ������� �� ���������� ��  0-��: ";
	for (int i = n; i > 0; i--)	cout << arr[i-1] << " ";
	
	cout << endl;
	cout << "����� ����� ���� ����� �������: ";
	for (int i = 0; i < n; i++)
	{
		s = arr[i];
		sum += s;

	}
	cout << sum;

	cout << endl;
	double sum_double = sum;
	cout << "������� �������������� �������� �������: " << sum_double / 2;

	cout << endl;
	int y = 0;
	for (int i = 0; i < n; i++)
	{

	}

}
/* ������������ arr
for(int x: arr)
	{
		cout << x << " ";
	}
*/
//arr[1] = 1024;	//��������� � �������� ������� �� ������
//arr[3] = 3072;	//��������� � �������� ������� �� ������
//cout << arr[1] << endl;	// ��������� � �������� �������