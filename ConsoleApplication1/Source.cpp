#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	const int size = 255;
	char word[size];
	int i = 0;
	for (; i < size; i++)
	{
		word[i] = _getch();
		cout << word[i];
		if (word[i] == 13)
		{
			break;
		}
		else if (word[i] == 8)
		{
		dote:												   // GOTO гдеяэ // 
			system("cls");
			word[i] = NULL;
			i = i - 1;
			for (int j = 0; j < i; j++)
			{
				cout << word[j];
			}
			word[i] = _getch();
			if (word[i] == 8)
			{
				goto dote;
			}
			else if (word[i] == 13)
			{
				break;
			}
			else 
			{
				cout << word[i];
			}
		}
	}

	cout << endl;
	system("color E");
	for (int j = 0; j < i; j++)
	{
		cout << word[j];
	}
	cout << endl;
	_getch();
}