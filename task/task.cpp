#include <iostream>
#include <math.h>
#include <string.h>
#include <string>
using namespace std;
int row, col, i, j, Count50, sumNum;
string processarray(int row, int col, int Count50, int sumNum) {
	
	Count50 = 0;
	sumNum = 0;
	cout << "Enter the number of rows:";
	cin >> row;
	cout << "Enter the number of columns:";
	cin >> col;
	int* array = new int[row, col];
	cout << "Enter elements of the array:\n";
	for (i = 0; i < row; i++) {

		for (j = 0; j < col; j++) {

			cin >> array[i, j];

			if (array[i, j] < 50) {
				Count50++;
				sumNum = sumNum + array[i, j];
			}
		}
	}
	return("Numbers less than 50: " + to_string(Count50)+  "\nSum of numbers less than 50: "  +to_string(sumNum));
	
}
int main() {
	
	cout<<processarray(row, col, Count50, sumNum);

}