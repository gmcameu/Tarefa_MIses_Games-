#include <iostream>
using namespace std;

int main()
{
	int num_1;
	int num_2;
	int soma_1;
	int soma_2;

	cout << "Insira dois numeros inteiros: " << endl;

	cin >> num_1 >> num_2;

	soma_1 = num_1 + 3;
	soma_2 = num_2 + 3;

	cout << "Os novos numeros sao: " << soma_1 << " e " << soma_2;
}