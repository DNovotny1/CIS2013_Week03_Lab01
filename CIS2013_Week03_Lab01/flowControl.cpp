#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main() {


	srand(time(NULL));
	char cont;

	int num1 = rand() % 10 + 1;
	cout << "your random number is " << num1;
	cin >> cont;






	/*char continueProgram = 'x';
	
	for (int i = 0; i <= 99; i = i++) {
		cout << i << "bottles of beer on the wall" << endl;
	}

	do{

		cout << "Do you want to continue (y/n)." << endl;
		cin >> continueProgram;

		switch (continueProgram) {
		case 'y':
			cout << "going to continue" << endl;
			break;
		case 'n':
			cout << "going to exit" << endl;
			break;
		default:
			continueProgram = 'y';
		}
	} while (continueProgram == 'y');

*/

	return 0;
}
