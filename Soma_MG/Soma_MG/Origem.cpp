#include <iostream>
using namespace std;

void Adiciona3(unsigned arg1, unsigned arg2)
{
	cout << arg1 << " + 3 =  "<< arg1 + 3 << endl;
	cout << arg2 << " + 3 =  " << arg2 + 3 << endl;
	cout << arg1 << " + " << arg2 << " = " << arg1 + arg2 << endl;
}

int main()
{
	unsigned num_1;
	unsigned num_2;

	cout << "Insira dois numeros inteiros: " << endl;

	cin >> num_1 >> num_2;

	Adiciona3(num_1, num_2);


}
