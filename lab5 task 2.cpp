#include <iostream>
using namespace std;

class Inoffdata {
private:
	int offid;
	string offname;
	string offrank;
	static int i;
public:
	void Input() {
		cout << "Enter id of officer\n";
		cin >> offid;
		cout << "Enter name of officer\n";
		cin >> offname;
		cout << "Enter rank of officer\n";
		cin >> offrank;
	}
	void CheckPalindrome() {
		int rev = 0;
		int digit;
		int n = offid;
		while (offid > 0) {
			digit = offid % 10;
			rev = (rev * 10) + digit;
			offid = offid / 10;
		}
		if (n==rev) {
			cout << "Officer is not allowed to enter the area\n";
		}
		else {
			cout << "Officers is allowed to enter the area\n";
			i++;
		}
	}
	void gettotal() {
		cout << "Total number of officers are: " << i << endl;
	}
};
int Inoffdata::i = 0;

int main() {
	int choice,i1;
	Inoffdata I1;
	do {
		cout << "----------------------MENU---------------------\n";
		cout << "Press 1 to Enter id of officers\n";
		cout << "Press 2 to get total number of officers\n";
		cout << "Press 3 to Exit\n";
		cout << "Enter your choice\n";
		cin >> choice;
		if (choice != 1 && choice != 2 && choice != 3) {
			cout << "Please enter coorect choice\n";
			cin >> choice;
		}
		switch (choice)
		{
		case 1:
			I1.Input();
			I1.CheckPalindrome();
			break;
		case 2:
			I1.gettotal();
			break;
		default:
			break;
		}
	} while (choice != 3);
}