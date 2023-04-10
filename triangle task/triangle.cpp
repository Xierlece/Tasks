// triangle.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>

using namespace std;

int main()
{
	const int side = 20;
	char triangle[side][2 * side - 1];

	for (int i = 0; i < side; i++) {
		for (int j = 0; j < 2 * side - 1; j++) {
			triangle[i][j] = ' ';
		}
	}

	int mid = (2 * side - 1) / 2;
	int start = mid;
	int end = mid;

	for (int i = 0; i < side; i++) {
		for (int j = start; j <= end; j++) {
			triangle[i][j] = '*';
		}
		start--;
		end++;
	}

	for (int i = 0; i < side; i++) {
		for (int j = 0; j < 2 * side - 1; j++) {
			cout << triangle[i][j];
		}
		cout << endl;
	}
}

