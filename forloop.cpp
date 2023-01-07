#include <iostream>
#include <string>
using namespace std;

int main()
{
	string tajne_slovo = "halda";	//tajné slovo
	string hadej;					//pokus uživatele 
	

	for (int i = 3; i >= 0; i = i+0)	//smyčka...proměnná i = 3, pokud se i bude rovnat 0 nebo bude menší než 0, ukončí se smyčka 
	{
		cout << "uhadni tajne slovo: ";
		cin >> hadej;

		if (hadej == tajne_slovo)		//jesti-že uživatel uhádne tajné slovo smyčka se automaticky ukončí (-1000) 	
		{
			cout << "SPRAVNE!";				
			i = i - 1000;
		}
		else if (hadej != tajne_slovo)	//jestli-že uživatel neuhádne slovo, ztratí 1 pokus (-1)
		{
			cout << "SPATNE!" << " (pocet pokusu: " << i << ")" << endl;
			i = i-1;
		}
	}
}


