#include<iostream>
using namespace std;

int main() {
	char continueProgram = 'y';
	

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



	return 0;
}
