#include <iostream>
#include<cstdlib>

#include <ctime>
#include <iomanip>
#include <fstream>
using namespace std;
int coinToss(void) {
	int randomNumber;
	randomNumber = 1 + rand() % 2;

	return randomNumber;
}
int main() {
	int t;
	cout << "enter no of test cases";
	cin >> t;
	while (t--) {
		int howManyTimes = 0;
		int randomNumber = 0;
		int sum = 0;
		int head = 0, tail = 0;

		cout << "how man times would you like to toss the coin?: ";
		cin >> howManyTimes;

		srand((time(0)));

		for (int i = 1; i <= howManyTimes; i++) {
			
			randomNumber = coinToss();
			if (randomNumber == 1) {
				sum = sum + 1;
				head++;
					

			}

			else {
				sum = sum - 0.5;
				tail++;

			}


		}


		cout << sum << endl;
		cout << "no of times head occured" << head << endl;
		cout << "no of times tails occured" << tail << endl;


	}
}