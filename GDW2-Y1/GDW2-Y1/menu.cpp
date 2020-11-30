#include "resources.h"

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); //just a variable for "console"

void help();
void credits();

void menu()
{
	char input = '0';
	int y = 0; //y is set at 0 aka hovering over level select
	bool running = true;
	system("CLS");

	while (running)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cords(61, 10);
		std::cout << "Main Menu";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		cords(56, 11);
		std::cout << "___________________";

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cords(59, 14);
		std::cout << "1) Level Select";
		cords(59, 16);
		std::cout << "2) How to Play";
		cords(59, 18);
		std::cout << "3) Credits";
		cords(59, 20);
		std::cout << "4) Exit Game";

		while (input != char(13)) //if enter hasn't been inputted
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
			cords(56, 14 + y);
			std::cout << "->"; //cursor
			cords(0, 0); //puts the underscore at top left
			input = _getch();
			cords(56, 14 + y);
			std::cout << "  ";

			if (input == 's')
			{
				if (y < 6)
				{
					y += 2;
				}
			}

			if (input == 'w')
			{
				if (y > 0)
				{
					y -= 2;
				}
			}
		}

		if (y == 0) //ends menu -> level select
		{
			running = false;
			system("CLS");
			input = ' ';
		}

		if (y == 2) //how to play
		{
			help();
			y = 2;
		}

		if (y == 4) //credits
		{
			credits();
			y = 4;
		}

		if (y == 6) //exit
		{
			exit(0);
		}

		system("CLS");
		input = ' ';  //input entered
	}
}

void levelSelect()
{
	levels select;
	char input = '0';
	int x = 0;
	bool selecting = true;

	while (selecting)
	{
		//Name change later accordingly..

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
		cords(10, 6);
		std::cout << "Escape the Prison";
		cords(0, 9);
		std::cout << " _|_||___||___||___||___||___||___||_|_ \n";
		std::cout << " -.-..---..---..---..---..---..---..-.- \n";
		std::cout << "  | ||   ||   ||   ||   ||   ||   || |  \n";
		std::cout << "  | ||   ||   ||   ||   ||   ||   || |  \n";
		std::cout << " _|_||___||___||___||___||___||___||_|_ \n";
		std::cout << " -.-..---..---..---..---..---..---..-.- \n";
		std::cout << "  | ||   ||   ||   ||   ||   ||   || |  \n";
		std::cout << "  | ||   ||   ||   ||   ||   ||   || |  \n";
		std::cout << " _|_||___||___||___||___||___||___||_|_ \n";
		std::cout << " -.-..---..---..---..---..---..---..-.- \n";
		std::cout << "  | ||   ||   ||   ||   ||   ||   || |  \n";
		std::cout << "  | ||   ||   ||   ||   ||   ||   || |  \n";
		std::cout << " _|_||___||___||___||___||___||___||_|_ \n";
		std::cout << " -.-..---..---..---..---..---..---..-.- \n";
		std::cout << " -'-||---||---||---||---||---||---||-'- \n";

		//Level Select
		cords(15, 28);
		std::cout << "Level 1";
		cords(60, 28);
		std::cout << "Level 2";
		cords(105, 28);
		std::cout << "Level 3";

		while (input != char(13)) //if enter hasn't been inputted
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
			cords(11 + x, 28); //moving left -> right / right -> left
			std::cout << "->"; //cursor leftside
			cords(24 + x, 28);
			std::cout << "<-"; //cursor rightside
			cords(0, 0);
			input = _getch();
			cords(11 + x, 28);
			std::cout << "  "; //refresh every button press
			cords(24 + x, 28);
			std::cout << "  ";

			if (input == 'a')
			{
				if (x > 10)
				{
					x -= 45;
				}
			}

			if (input == 'd')
			{
				if (x < 65)
				{
					x += 45;
				}
			}
		}

		if (x == 0)
		{
			selecting = false;
			select.level1();
		}

		if (x == 45)
		{
			//WIP
			selecting = false;
			select.level2();
		}

		if (x == 90)
		{
			//WIP
			//if ()
			selecting = false;
			select.level3();
		}

		system("CLS");
		input = ' '; //input entered
	}
}

void help()
{
	char input = '0';
	int y = 0;
	system("CLS");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	cords(80, 28);
	std::cout << "BACK";
	cords(56, 9);
	std::cout << "HOW TO PLAY";
	cords(51, 10);
	std::cout << "---------------------";
	cords(27, 12);
	std::cout << "1. Use WASD and ENTER to select your choices!";
	cords(27, 14);
	std::cout << "2. Progress through the story and depending on your choices will you succeed!";
	cords(27, 16);
	std::cout << "3. Unlock further levels by reaching one of the ends in the previous entries!";
	cords(27, 18);
	std::cout << "4. Have Fun!!!";
	while (input != char(13))
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
		cords(75, 28 + y);
		std::cout << "->";
		cords(0, 0);
		input = _getch();
		cords(75, 28 + y);
		std::cout << "  ";
	}
}

void credits()
{
	char input = '0';
	int y = 0;
	system("CLS");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	cords(58, 9);
	std::cout << "CREDITS";
	cords(51, 10);
	std::cout << "---------------------";
	cords(50, 12);
	std::cout << "Ryan Dinh - 100804962";
	cords(50, 14);
	std::cout << "lol";
	cords(50, 16);
	std::cout << "lol";
	cords(50, 18);
	std::cout << "lol";
	cords(50, 20);
	std::cout << "lol";
	cords(80, 28);
	std::cout << "BACK";
	while (input != char(13))
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
		cords(75, 28 + y);
		std::cout << "->";
		cords(0, 0);
		input = _getch();
		cords(75, 28 + y);
		std::cout << "  ";
	}
}

void cords(int x, int y) //plot cords
{
	COORD position;
	position.X = x;
	position.Y = y;
	SetConsoleCursorPosition(console, position);
}