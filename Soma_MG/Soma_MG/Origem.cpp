#include <iostream>
using namespace std;

void Adiciona3(unsigned arg1, unsigned arg2)
{
	arg1 += 3;
	arg2 += 3;
}

int main()
{
	unsigned num_1;
	unsigned num_2;

	cout << "Insira dois numeros inteiros: " << endl;

	cin >> num_1 >> num_2;

	Adiciona3(num_1, num_2);

	cout << "Os novos numeros sao: " << num_1 << " e " << num_2;

	return 0;
}