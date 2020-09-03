#include <iostream>

using namespace std;

int main()
{
	/*
		2 bytes [(-32_768) - (32_767)]
		4 bytes[(-2_147_483_648) - (2_147_483_647)]
	*/
	int inteiro;
	
	cout << "Digite o seu numero da sorte: ";
	
	cin >> inteiro;
	
	cout << inteiro << " e o seu numero da sorte.";
	
	return 0;
}