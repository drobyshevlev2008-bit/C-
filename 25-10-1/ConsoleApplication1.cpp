//1

﻿#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	const int row = 3;
	const int col = 3;

	int sum = 0;
	int array[row][col];
	int max = array[0][0];
	int min = array[0][0];



	for (int i = 0; i < row; i++) {

		for (int j = 0; j < col; j++) {
			array[i][j] = rand() % 100;
			cout << array[i][j] << " ";
			sum += array[i][j];
			if (array[i][j] > max) {
				max = array[i][j];
			}
			if (array[i][j] < min) {
				min = array[i][j];
			}
		}
		cout << "\n";
		cout << endl;

	}


	cout << "Sum: " << sum;
	cout << endl;
	cout << "Average: " << sum / (row * col);
	cout << endl;
	cout << "";
	cout << endl;
	cout << "Max: " << max;
	cout << endl;
	cout << "Min: " << min;
	return 0;
}

//2
﻿#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	const int row = 3;
	const int col = 4;
	int array[row][col];

	for (int i = 0; i < row; i++) {
		int sum_row = 0;
		for (int j = 0; j < col; j++) {
			array[i][j] = rand() % 10;    //Строка
			cout << array[i][j] << "  ";
			sum_row += array[i][j];
		}
		cout << "| " << sum_row;
		cout << "\n";
	}

	for (int j = 0; j < col; j++) {
		int sum_col = 0;
		for (int i = 0; i < row; i++) {   //Столбцы
			sum_col += array[i][j];
		}
		cout << sum_col << " ";
	}

	int sum = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			sum += array[i][j];
		}
	}
	cout << "| " << sum;


	return 0;
}

//3
﻿#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	const int row1 = 5;
	const int col1 = 10;
	int array1[row1][col1];

	cout << "Массив 5 на 10" << "\n";
	for (int i = 0; i < row1; i++) {
		for (int j = 0; j < col1; j++) {
			array1[i][j] = rand() % 50;
			cout << array1[i][j] << "  ";
		}
		cout << "\n";
	}
	cout << "\n";
	cout << "\n";


	const int row2 = 5;
	const int col2 = 5;
	int array2[row2][col2];

	cout << "Массив 5 на 5" << "\n";
	for (int i = 0; i < row2; i++) {
		for (int j = 0; j < col2; j++) {
			array2[i][j] = array1[i][j] + array1[i][j + 1];
			cout << array2[i][j] << "  ";
		}
		cout << "\n";
	}
	return 0;
}
