#include <iostream>
using namespace std;

double BMI(double weight, double height) {
	height /= 100;
	return weight / (height * height);
}
void printBMI(double BMI)
{
	if (BMI < 18.5) cout << "Underweight" << endl;
	else if (18.5 <= BMI && BMI < 25.0) cout << "Normal weight" << endl;
	else if (25.0 <= BMI && BMI < 30.0) cout << "Overweight" << endl;
	else if (30.0 <= BMI) cout << "Obesity" << endl;
}
int main() {
	setlocale(LC_ALL, "RUS");
	double weight, height; 
	cout << "Введите Ваш вес и рост: " << endl;
	cin >> weight >> height;
	double bmi = BMI(weight, height);
	printBMI(bmi);
	cout << bmi;
	return 0;
}