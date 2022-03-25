#include<iostream>
#include<cstring>
using namespace std;
class person {
private:
	string U;
	string C;
	string name;
	friend class coordinator;
public:

};
class coordinator {
	person p1, p2;
	static int count;
private:
	string person1;
	string person2;
public:
	void print() {
		cout << "enter person 1 details" << endl;
		cout << "Enter name of person 1\n";
		cin >> person1;
		cout << "Enter Person 1 University name\n";
		cin >> p1.U;
		cout << "Enter Person 1 Competition name\n";
		cin >> p1.C;
		cout << "enter person 2 details\n";
		cout << "Enter name of person 2\n";
		cin >> person2;
		cout << "Enter Person 2 University name\n";
		cin >> p2.U;
		cout << "Enter Person 2 Competition name\n";
		cin >> p2.C;
		cout << "\n\n";
		cout << "the person1 details are;\n ";
		cout << "Name: " << person1 << endl;
		cout << "University: " << p1.U << endl;
		cout << "Competition: " << p1.C << endl;
		cout << "the person1 details are;\n ";
		cout << "Name: " << person2 << endl;
		cout << "University: " << p2.U << endl;
		cout << "Competition: " << p2.C << endl;
	}

	void check() {
		int l1 = p2.U.length();
		int l2 = p2.U.length();
		int maxlen = l1;
		if (l2 > l1) {
			int maxlen = l2;
		}
		int c1 = p1.C.length();
		int c2 = p2.C.length();
		int Maxlen = c1;
		if (c2 > c1) {
			int Maxlen = c2;
		}
		for (int i = 0; i < maxlen; i++) {
			if (p1.U[i] == p2.U[i]) {
				cout << "person1 and person 2 are roommate" << endl;
				cout << "their room number is " << Maxlen << endl;
				break;
			}
			else {
				cout << "person1 and person2 are not roommate" << endl;
				break;
			}
		}
	}
};


int main() {
	coordinator c;
	person p;
	c.print();
	c.check();

	return 0;
}