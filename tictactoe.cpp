#include<iostream>
#include<stdlib.h>
using namespace std;

class multi
{
	char arr[9] = {'1','2','3','4','5','6','7','8','9'};
	int move1;
	int move2;

public:
	int win()
	{
		if (arr[0] == arr [1]  && arr[1] == arr[2] )
		{	if ( arr [0] == 'X' )
			return 1;
			else
			return 2; 
		}
		else if (arr[3] == arr [4]  && arr[4] == arr[5] )
		{	if ( arr [0] == 'X' )
			return 1;
			else
			return 2; 
		}
		else if (arr[6] == arr [7]  && arr[7] == arr[8] )
		{	if ( arr [0] == 'X' )
			return 1;
			else
			return 2; 
		}
		else if (arr[0] == arr [3]  && arr[3] == arr[6] )
		{	if ( arr [0] == 'X' )
			return 1;
			else
			return 2; 
		}
		else if (arr[1] == arr [4]  && arr[4] == arr[7] )
		{	if ( arr [0] == 'X' )
			return 1;
			else
			return 2; 
		}
		else if (arr[2] == arr [5]  && arr[5] == arr[8] )
		{	if ( arr [0] == 'X' )
			return 1;
			else
			return 2; 
		}
		else if (arr[0] == arr [4]  && arr[4] == arr[8] )
		{	if ( arr [0] == 'X' )
			return 1;
			else
			return 2; 
		}
		else if (arr[2] == arr [4]  && arr[4] == arr[6] )
		{	if ( arr [0] == 'X' )
			return 1;
			else
			return 2; 
		}
		else if (arr[0] == arr [1]  && arr[1] == arr[2] )
		{	if ( arr [0] == 'X' )
			return 1;
			else
			return 2; 
		}
	}

	void getdata1()
	{
		char a = 'X';

		cout << "\n    Player 1 : ";
		cin >> move1;

		if (arr[move1-1] != 'O')
		{
			arr[move1-1] = a;	
		}
		else
		{
			cout << "error" << endl;
			getdata1();
		}
	}

	void getdata2()
	{
		char b = 'O';
		 
		cout << "\n    Player 2 : ";
		cin >> move2;

		if (arr[move2-1] != 'X')
		{
			arr[move2-1] = b;		
		}
		else
		{
			cout << "error" << endl;
			getdata2();
		}
	}

	void display()
	{
		cout << "         |     |     " << endl;
		cout << "      "<< arr[0] <<"  |  "<< arr[1] <<"  |  "<< arr[2] <<"  " << endl;
		cout << "         |     |     " << endl;
		cout << "    -----|-----|-----" << endl;
		cout << "         |     |     " << endl;
		cout << "      "<< arr[3] <<"  |  "<< arr[4] <<"  |  "<< arr[5] <<"  " << endl;
		cout << "         |     |     " << endl;
		cout << "    -----|-----|-----" << endl;
		cout << "         |     |     " << endl;
		cout << "      "<< arr[6] <<"  |  "<< arr[7] <<"  |  "<< arr[8] <<"  " << endl;
		cout << "         |     |     " << endl;
	}
};

class single
{
	char arr[9] = {'1','2','3','4','5','6','7','8','9'};
	int move1;

public:
	int win()
	{
		if (arr[0] == arr [1]  && arr[1] == arr[2] )
		{	if ( arr [0] == 'X' )
			return 1;
			else
			return 2; 
		}
		else if (arr[3] == arr [4]  && arr[4] == arr[5] )
		{	if ( arr [0] == 'X' )
			return 1;
			else
			return 2; 
		}
		else if (arr[6] == arr [7]  && arr[7] == arr[8] )
		{	if ( arr [0] == 'X' )
			return 1;
			else
			return 2; 
		}
		else if (arr[0] == arr [3]  && arr[3] == arr[6] )
		{	if ( arr [0] == 'X' )
			return 1;
			else
			return 2; 
		}
		else if (arr[1] == arr [4]  && arr[4] == arr[7] )
		{	if ( arr [0] == 'X' )
			return 1;
			else
			return 2; 
		}
		else if (arr[2] == arr [5]  && arr[5] == arr[8] )
		{	if ( arr [0] == 'X' )
			return 1;
			else
			return 2; 
		}
		else if (arr[0] == arr [4]  && arr[4] == arr[8] )
		{	if ( arr [0] == 'X' )
			return 1;
			else
			return 2; 
		}
		else if (arr[2] == arr [4]  && arr[4] == arr[6] )
		{	if ( arr [0] == 'X' )
			return 1;
			else
			return 2; 
		}
		else if (arr[0] == arr [1]  && arr[1] == arr[2] )
		{	if ( arr [0] == 'X' )
			return 1;
			else
			return 2; 
		}
	}

	void getdata1()
	{
		char a = 'X';

		cout << "\n    Player 1 : ";
		cin >> move1;

		if (arr[move1-1] != 'O')
		{
			arr[move1-1] = a;	
		}
		else
		{
			cout << "error" << endl;
			getdata1();
		}
	}

	void display()
	{
		cout << "         |     |     " << endl;
		cout << "      "<< arr[0] <<"  |  "<< arr[1] <<"  |  "<< arr[2] <<"  " << endl;
		cout << "         |     |     " << endl;
		cout << "    -----|-----|-----" << endl;
		cout << "         |     |     " << endl;
		cout << "      "<< arr[3] <<"  |  "<< arr[4] <<"  |  "<< arr[5] <<"  " << endl;
		cout << "         |     |     " << endl;
		cout << "    -----|-----|-----" << endl;
		cout << "         |     |     " << endl;
		cout << "      "<< arr[6] <<"  |  "<< arr[7] <<"  |  "<< arr[8] <<"  " << endl;
		cout << "         |     |     " << endl;
	}

	void solo()
	{
		
	}
};

int main()
{
	system("clear");

	int choice;
	int result = 0, flag = 0, w1 = 0, w2 = 0, w3 = 0;
	string player1, player2;

	cout << "\nEnter the name of player 1[X] : ";
	cin >> player1;
	cout << "\nEnter the name of player 2[O] : ";
	cin >> player2;

	do
	{
	    multi d;
		for (int i = 1; i < 5; ++i)
		{
			system("clear");
			d.display();
			d.getdata1();
			result = d.win();
			if (result == 1)
			{
				system("clear");
				cout << "        WINNER : " << player1 << "\n\n" << endl;
				flag = 1;
				w1++;
				d.display();
				break;
			}
			else if (result == 2)
			{
				system("clear");
				cout << "        WINNER : " << player2 << "\n\n" << endl;
				flag = 1;
				w2++;
				d.display();
				break;
			}
			system("clear");
			d.display();
			d.getdata2();
			result = d.win();
			if (result == 2)
			{
				system("clear");
				cout << "        WINNER : " << player2 << "\n\n" << endl;
				flag = 1;
				w2++;
				d.display();
				break;
			}
			else if (result == 1)
			{
				system("clear");
				cout << "        WINNER : " << player1 << "\n\n" << endl;
				flag = 1;
				w1++;
				d.display();
				break;
			}
		}

		if (flag == 0)
		{
			system("clear");
			cout << "The match ended in a draw !" << endl;
			w3++;
		}\

		cout << "\n        SCOREBOARD:\n   " << player1 << " : " << w1 << "  " << player2 << " : " << w2 << "  " << "Draw" << " : " << w3 << "\n" <<endl;
		cout << "\nEnter choice : \n1)Play Game\n2)Exit" << endl;
		cin >> choice;
		
	} while (choice != 2);

	return 0;
}