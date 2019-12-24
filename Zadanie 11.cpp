#include <iostream> 
using namespace std;

void faktorial(int numb)
{
	int rezult = 1;
	for (int i = 1; i <= numb; i++) 
		rezult *= i;
	cout <<"Факториал= " << numb << "! = " << rezult << endl;
}

int main(int argc, char* argv[])
{
	setlocale (LC_ALL, "RUS");
	int chislo; 
	cout << "Введите число: ";
	cin>> chislo;
	faktorial(chislo); 
	system("pause");
	return 0;
}