#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include "Header.h"

using namespace std;

int main()
{
	int menu = 0;

	do
	{
		cout << "Press 1 to Execute Coffee Hacker.\n";
		cout << "Press 2 to Execute Skynet HK Aerial.\n";
		cout << "Press 3 to Execute Keywords Crypto.\n";
		cout << "Press 4 to Exit the program.\n";
		cin >> menu;
		cout << "================================================================================\n\n";

		if (menu == 1)
		{
			references();
		}
		else if (menu == 2)
		{
			skynet();
		}
		else if (menu == 3)
		{
			keywords();
		}
		else if (menu == 4)
		{
			cout << "Come back soon!";
			exit(0);
		}
		else
		{
			cout << "Please provide a valid input.\n";
		}
	} while (menu != 4);

    return 0;
}

