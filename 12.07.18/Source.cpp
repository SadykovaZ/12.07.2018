#include<iostream>
#include<time.h>
#include<math.h>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int n = 0;
	cin >> n;

	if (n == 1)
	{
		cout << "32. Напишите программу, в которой объявляется три массива одинакового размера. Первые два массива заполняются случайными числами в диапазоне от -35 до 55, третий массив заполняется как поэлементное произведение элементов первых двух массивов. Содержимое всех трех массивов выводиться на консоль." << endl;
		int a[4][4];
		int b[4][4];
		int c[4][4];
		int sum = 0;

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				a[i][j] = -35 + rand() % 55;
				cout << left << setw(5) << a[i][j] << " ";
			}
			cout << endl;
		}

		cout << endl;

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				b[i][j] = -35 + rand() % 55;
				cout << left << setw(5) << b[i][j] << " ";
			}
			cout << endl;
		}

		cout << endl;

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				c[i][j] = a[i][j] * b[i][j];
				cout << left << setw(5) << c[i][j] << " ";
			}
			cout << endl;
		}



	}

	else if (n == 2)
	{
		cout << "31. Напишите программу, в которой объявляется три массива одинакового размера. Первые два массива заполняются случайными числами в диапазоне от 0 до 20, третий массив заполняется как поэлементная сумма элементов первых двух массивов. Содержимое всех трех массивов выводиться на консоль" << endl;
		int a[4][4];
		int b[4][4];
		int c[4][4];
		int sum = 0;

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				a[i][j] = 0 + rand() % 20;
				cout << left << setw(5) << a[i][j] << " ";
			}
			cout << endl;
		}

		cout << endl;

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				b[i][j] = 0 + rand() % 20;
				cout << left << setw(5) << b[i][j] << " ";
			}
			cout << endl;
		}

		cout << endl;

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				c[i][j] = a[i][j] + b[i][j];
				cout << left << setw(5) << c[i][j] << " ";
			}
			cout << endl;
		}
	}

	else if (n == 3)
	{
		cout << "Напишите программу, в которой объявляется массив размером 5х10 и массив размером 5х5. Первый массив заполняется случайными числами, в диапазоне от 0 до 50. Второй массив заполняется по следующему принципу: первый элемент второго массива равен сумме первого и второго элемента первого массива, второй элемент второго массива равен сумму третьего и четвертого элемента первого массива" << endl;
		int a[5][10];
		int b[5][5];

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				a[i][j] = 0 + rand() % 50;

				cout << left << setw(5) << a[i][j] << " ";
			}
			cout << endl;
		}

		cout << endl;

		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				b[i][j] = a[i][j * 2] + a[i][(j * 2) + 1];

				cout << left << setw(5) << b[i][j] << " ";
			}
			cout << endl;
		}
	}

	else if (n == 4)
	{
		cout << "Задание 30" << endl;

		cout << endl;
		int a[3][4] = { {1,2},{3,4,5},6,7 };
		int b[4];
		int sum = 0;
		int jsum = 0;

		/*for (int i = 0; i < 3; i++)
		{
			sum = 0;
			for (int j = 0; j < 4; j++)
			{
				a[i][j] = rand() % 20;
				sum += a[i][j];
				cout << left << setw(5) << a[i][j] << " ";
			}
			cout << "Sum = " << sum;
			cout << endl;
		}*/

		for (int i = 0; i < 3; i++)
		{
			sum = 0;
			for (int j = 0; j < 4; j++)
			{
				cout << setw(5) << a[i][j];
				sum += a[i][j];
			}
			cout << "|" << sum << endl;

		}

		for (int j = 0; j < 4; j++)
		{
			cout << setw(5) << "_";
		}
		cout << endl;

		for (int i = 0; i < 4; i++)
		{
			sum = 0;
			for (int j = 0; j < 3; j++)
			{
				//cout << a[j][i] << " ";
				sum += a[j][i];
			}
			jsum += sum;
			cout << setw(5) << sum;
		}
		cout << "|" << jsum;
		cout << endl;
	}

	else if (n == 5)
	{
		const int n = 8;
		int a[n] = { 1,2,3,4,5,6,7,8 };
		int move = 0;
		int choice = 0;
		int b[n];
		int k = 4;

		for (int i = 0; i < n; i++)
		{
			if (i + k < n)
				b[i + k] = a[i];
			else
				b[abs(n - i - k)] = a[i];

		}
		for (int i = 0; i < n; i++)
		{
			cout << b[i] << " ";
		}
	}

	else if (n==6)
	{

	}
	//int a[3][4];
	//int sum = 0;
	//int min_v = INT_MAX;
	//int max_v;
	//max_v = INT_MIN;

	//for (size_t i = 0; i < 3; i++)
	//{
	//	
	//	sum = 0;
	//	for (int j = 0; j < 4; j++)
	//	{
	//		
	//		a[i][j] = rand() % 21;
	//		sum += a[i][j];
	//		//if (a[i][j] > max_v)
	//		/*{
	//			max_v = a[i][j];
	//		}
	//		*/
	//		cout << left << setw(5) << a[i][j] << " "; //размер поля

	//	}
	//	if (sum>max_v)
	//	{
	//		max_v = sum;
	//	}
	//	cout << "sum=" << sum << endl;
	//	cout << endl;
	//}
	//cout << "max = " << max_v << endl;
	//


	/*srand(time(NULL));

	int n = 0;
start:
	cout << "Введите номер задания (№1 или №2):" << endl;
	cin >> n;

	if (n == 1)
	{
		cout << "1.Необходимо отсортировать первые две трети массива в порядке возрастания если среднее арифметическое всех элементов больше нуля; иначе - лишь первую треть. остальную часть массива не сортировать а расположить в обратном порядке." << endl;

		const int n = 50;
		int a[n];
		double average = 0;
		int sum = 0;
		int size = 0;

		cout << "Введите размер массива (масимум 50 элементов): ";
		cin >> size;

		int part = (size * 2) / 3;
		int part1 = (size / 3);

		for (int i = 0; i < size; i++)
		{
			a[i] = -20 + rand() % 50;
			cout << a[i] << " ";
		}
		cout << endl;

		for (int i = 0; i < size; i++)
		{
			sum += a[i];
			average = (double)sum / size;
		}
		cout << "Среднее арифметическое всех элементов = " << average;
		cout << endl;

		if (average > 0)
		{
			for (int pass = 0; pass < part - 1; pass++)
			{
				for (int i = 0; i < part - 1; i++)
				{
					if (a[i] > a[i + 1])
					{
						swap(a[i], a[i + 1]);
					}
				}
			}
			for (int i = 0; i < size; i++)
			{
				cout << a[i] << " ";
			}
			cout << endl;
		}

		else if (average < 0)
		{
			for (int pass = 0; pass < part1 - 1; pass++)
			{
				for (int i = 0; i < part1 - 1; i++)
				{
					if (a[i] > a[i + 1])
					{
						swap(a[i], a[i + 1]);
					}
				}
			}
			for (int i = part1; i < size*2/3; i++)
			{

				swap(a[i], a[size+part1-i-1]);

			}

			for (int i = 0; i < size; i++)
			{
				cout << a[i] << " ";
			}
			cout << endl;
		}
	}


	else if (n == 2)
	{
		cout << "Реализовать Сортировку выбором." << endl;

		const int n = 8;
		int a[n] = { 5,8,9,10,4,25,6,26 };
		int k = 0;
		int x = 0;

		for (int i = 0; i < n; i++)
		{
			k = i;
			x = a[i];
			for (int j = i + 1; j < n; j++)
			{
				if (a[j] < x)
				{
					k = j;
					x = a[j];
				}
			}
			a[k] = a[i];
			a[i] = x;
		}
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;

	}
	goto start;
*/
}