#include<iostream>
using namespace std;

void add(double num1, double num2){
	cout << num1 << " + " << num2 << " " << "= "<< num1 + num2 << endl;
}
void subtract(double num1,  double num2){
	cout << num1 << " - " << num2 << " " << "= " << num1 - num2 << endl;
}
void multiply(double num1, double num2){
	cout << num1 << " + " << num2 << " " << "= " << num1 + num2 << endl;
}
void divide(double num1, double num2){
	if (num2 != 0) {
		cout << num1 << " / " << num2 << " " << "= " << num1 / num2 << endl; 
	}else cout << "Floppa can't divide by zer\n";
}

int main () {
	int number;
	int num1, num2;
	cout << "\nMenu\n";
	cout << "1) Add 2 numbers\n";
	cout << "2) Subtract 2 numbers\n";
	cout << "3) Multiply 2 numbers\n";
	cout <<	"4) Divide 2 numbers\n";
	cout << "5) End the program\n";
	cout << "\nEnter your menu choice [1 - 5]: ";
	cin >> number;
	cout << endl;
	if (!(number == 1) && !(number == 2) && !(number == 3) && !(number == 4) && !(number == 5)) {
	  cout << "Floppa you\n" ;
		 return 0;
	 }
	if (number == 5)return 0;
	cout << "Enter the first number\n";
	cin >> num1;
	cout << "Enter the second number\n";
	cin >> num2;
	cout << endl;
	cout << "Total operations: \n";
	if (number == 1)add(num1, num2);
	if (number == 2)subtract(num1, num2);
	if (number == 3)multiply(num1, num2);
	if (number == 4)divide(num1, num2);
	cout << endl;
	return 0;
}
