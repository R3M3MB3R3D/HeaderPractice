#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int references()
{
	int menu = 0;
	srand(static_cast<unsigned int>(0));
	int fakeTerrorists = 100;
	int fakeCoffeeShop = 10;
	int fakeBankDeposit = rand() % 1000 + 1;

	do
	{
		cout << "Press 1 to view current account balances.\n";
		cout << "Press 2 to initiate account transfer.\n";
		cout << "Press 3 to update Terrorist balance.\n";
		cout << "Press 4 to exit program (for now).\n";
		cin >> menu;
		cout << "================================================================================\n\n";

		if (menu == 1)
		{
			cout << "The Terrorists currently have: $" << fakeTerrorists << " in their account.\n";
			cout << "The Coffee Shop currently has: $" << fakeCoffeeShop << " in it's account.\n";
			cout << "================================================================================\n\n";
		}
		else if (menu == 2)
		{
			int temp = fakeTerrorists;
			fakeTerrorists = fakeCoffeeShop;
			fakeCoffeeShop = temp;

			cout << "Account successfully hacked!\n";
			cout << "The Terrorists now have $" << fakeTerrorists << " in their account.\n";
			cout << "The Coffee Shop now has: $" << fakeCoffeeShop << " in it's account.\n";
			cout << "================================================================================\n\n";
		}
		else if (menu == 3)
		{
			int temp1 = fakeTerrorists + fakeBankDeposit;
			fakeTerrorists = temp1;

			cout << "The Terrorists have added $" << fakeBankDeposit << "To their bank account!\n";
			cout << "The total amount in the Terrorist account is $" << fakeTerrorists << ".\n";
			cout << "================================================================================\n\n";
		}
		else if (menu == 4)
		{
			cout << "Your country thanks you!\n";
			cout << "Come back soon!";

			return 0;
		}
		else
		{
			cout << "Please provide a valid input.\n";
		}

	} while (menu != 4);
}

int skynet()
{
	srand(time(0));

	int number = rand() % 64 + 1;
	int high = 64;
	int low = 1;
	int location = number;
	int search;
	int count = 0;
	bool found = false;

	cout << "Welcome to Skynet HK Aerial.\n";
	cout << "Prepare Search for Target.\n\n";
	cout << "==============================================================\n";

	while (found == false)
	{
		int search = ((high - low) / 2) + low;
		count = count + 1;
		if (search > location)
		{
			high = search - 1;
			cout << "==============================================================\n";
			cout << "Target not found at " << search << ", initiating sonar ping\n";
			cout << "Moving to new location\n\n";
		}
		else if (search < location)
		{
			low = search + 1;
			cout << "==============================================================\n";
			cout << "Target not found at " << search << ", initiating sonar ping\n";
			cout << "Moving to new location\n\n";
		}
		else if (search == location)
		{
			cout << "==============================================================\n";
			cout << "Target Located at " << location << ".  " << count << " units were searched.\n\n";
			found = true;
		}
		else
		{
			cout << "Critical error!\n";
			cout << "Recover drone for diagnostics.\n\n";
			cout << "==============================================================\n";
			found = true;
		}
	}
	system("pause");
	return 0;
}

int keywords()
{
	enum fields { WORD, HINT, NUM_FIELDS };
	const int NUM_WORDS = 10;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{ "superfluous", "Redundant, extra, more than necessary, way too much." },
	{ "enigmatic", "guarded, secretive, mysterious." },
	{ "reconciliation", "to make amends, to become friendly again, to bring together." },
	{ "determination", "persistent, motivated, not gonna give up." },
	{ "discombobulated", "to be confused, to not understand, not knowing whats going on." },
	{ "aerodynamic", " mostly regarding airplanes, interacting with wind" },
	{ "cyberphobia", "to fear computers, ahmish people are this, among other things." },
	{ "antidisestablishmentarianism", "good luck" },
	{ "incomprehensible", "not being able to be understood, illogical, possibly ironic" },
	{ "unimaginatively", "without imagination, not inspired, practical" }
	};

	srand(static_cast<unsigned int>(time(0)));
	char playAgain;

	cout << "Welcome to Keywords!\n";
	cout << "Unscramble the letters to make a word.\n";
	cout << "Enter -hint- for a hint.\n";
	cout << "Enter -quit to exit the program!\n";
	cout << "=========================================\n\n";

	do
	{
		int totalAttempts = 0;

		for (int answers = 0; answers < 3; answers++)
		{
			int choice = (rand() % NUM_WORDS);
			string theWord = WORDS[choice][WORD];
			string theHint = WORDS[choice][HINT];
			string jumble = theWord;
			int length = jumble.size();

			for (int i = 0; i < length; ++i)
			{
				int index1 = (rand() % length);
				int index2 = (rand() % length);
				char temp = jumble[index1];
				jumble[index1] = jumble[index2];
				jumble[index2] = temp;
			}

			cout << "The jumble is: " << jumble; string guess;
			cout << "\nYour Guess: ";
			cin >> guess;
			int attempts = 1;
			totalAttempts++;

			while ((guess != theWord) && (guess != "quit"))
			{
				if (guess == "hint")
				{
					cout << theHint << "\n";
				}
				else
				{
					cout << "I'm not sorry, but that's not it.\n";
					attempts++;
					totalAttempts++;
				}
				cout << "Your Guess: ";
				cin >> guess;
			}

			if (guess == theWord)
			{
				cout << "That's it!\n";
				cout << "You got it in: " << attempts << " attempts.\n\n";
			}
		}

		cout << "You completed this iteration with " << totalAttempts << " total guesses.  Congratulations.\n";

		cout << "Would you like to go another round?\n";
		cout << "Please input y or n to answer: ";
		cin >> playAgain;
		while ((playAgain != 'y') && (playAgain != 'Y') && (playAgain != 'n') && (playAgain != 'N'))
		{
			cout << "That is not an acceptable response, please input y or n.\n";
			cin >> playAgain;
		}
	} while ((playAgain == 'y') || (playAgain == 'Y'));

	cout << "Thanks for training!\n";
	system("pause");

	return 0;
}