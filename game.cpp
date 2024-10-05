#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y);
void printHeader();
void printMaze();
void printPlayer();
void erasePlayer();
void movePlayerRight();
void movePlayerLeft();
void movePlayerDown();
void movePlayerUp();
void printEnemy();
void eraseEnemy();
void moveEnemy();

int Px=2,Py=26;
int Ex=135,Ey=31;

main()
{
	system("cls");
	printHeader();
	printMaze();
	printEnemy();
	printPlayer();
	while(true)
	{
		if(GetAsyncKeyState(VK_RIGHT))
		{
			movePlayerRight();
		}

		if(GetAsyncKeyState(VK_UP))
		{
			movePlayerUp();
		}
		if(GetAsyncKeyState(VK_LEFT))
		{
			movePlayerLeft();
		}
		if(GetAsyncKeyState(VK_DOWN))
		{
			movePlayerDown();
		}
		moveEnemy();
		Sleep(200);
	}		
}

void printHeader()
{
	cout<<"               *****     **   **     *****     ******     *****             ***     ***      **      *****     ******     ****    "<<endl;
	cout<<"              **         **   **     **   *    **         **   *            ****   ****    **  **    **   *      **      **  **   "<<endl;
	cout<<"              ******     **   **     *****     ****       *****             ***  *  ***    ******    *****       **      **  **   "<<endl;
	cout<<"                  **     **   **     **        **         **   *            ***     ***    **  **    **   *      **      **  **   "<<endl;
	cout<<"              *****      *******     **        ******     **   *            ***     ***    **  **    **   *    ******     ****    "<<endl;
	cout<<endl<<endl;

}

void printMaze()
{
	cout<<"######################################################################################################################################################"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"#                                                                                                                                                    #"<<endl;
	cout<<"######################################################################################################################################################"<<endl;
}


void printPlayer()
{
	gotoxy(Px,Py);
	cout<<"        ___          "<<endl;
	gotoxy(Px,Py+1);
	cout<<"      _|   |__       "<<endl;
	gotoxy(Px,Py+2);
	cout<<"     |________|      "<<endl;
	gotoxy(Px,Py+3);
	cout<<"     |_    ._|       "<<endl;
	gotoxy(Px,Py+4);
	cout<<"     |     |_        "<<endl;
	gotoxy(Px,Py+5);
	cout<<"     (_______|       "<<endl;
	gotoxy(Px,Py+6);
	cout<<"    /         \\     "<<endl;
	gotoxy(Px,Py+7);
	cout<<"   / |       | \\    "<<endl;
	gotoxy(Px,Py+8);
	cout<<"    ||_______||      "<<endl;
	gotoxy(Px,Py+9);
	cout<<"    |)       |)      "<<endl;	
}



void erasePlayer()
{
	gotoxy(Px,Py);
	cout<<"                     "<<endl;
	gotoxy(Px,Py+1);
	cout<<"                     "<<endl;
	gotoxy(Px,Py+2);
	cout<<"                     "<<endl;
	gotoxy(Px,Py+3);
	cout<<"                     "<<endl;
	gotoxy(Px,Py+4);
	cout<<"                     "<<endl;
	gotoxy(Px,Py+5);
	cout<<"                     "<<endl;
	gotoxy(Px,Py+6);
	cout<<"                     "<<endl;
	gotoxy(Px,Py+7);
	cout<<"                     "<<endl;
	gotoxy(Px,Py+8);
	cout<<"                     "<<endl;
	gotoxy(Px,Py+9);
	cout<<"                     "<<endl;
}


void movePlayerRight()
{
	erasePlayer();
	Px=Px+1;
	printPlayer();

}


void movePlayerUp()
{
	erasePlayer();
	Py=Py-1;
	printPlayer();
}

void movePlayerDown()
{
	erasePlayer();
	Py=Py+1;
	printPlayer();
}

void movePlayerLeft()
{
	erasePlayer();
	Px=Px-1;
	printPlayer();

}

void printEnemy()
{
	gotoxy(Ex,Ey);
	cout<<"    ___    "<<endl;
	gotoxy(Ex,Ey+1);
	cout<<"   (. .)   "<<endl;
	gotoxy(Ex,Ey+2);
	cout<<"  (_____)  "<<endl;
	gotoxy(Ex,Ey+3);
	cout<<"    (_)    "<<endl;
	gotoxy(Ex,Ey+4);
	cout<<"    | |    "<<endl; 
}

void eraseEnemy()
{
	gotoxy(Ex,Ey);
	cout<<"           "<<endl;
	gotoxy(Ex,Ey+1);
	cout<<"           "<<endl;
	gotoxy(Ex,Ey+2);
	cout<<"           "<<endl;
	gotoxy(Ex,Ey+3);
	cout<<"           "<<endl;
	gotoxy(Ex,Ey+4);
	cout<<"           "<<endl;
}

void moveEnemy()
{
	eraseEnemy();
	Ex=Ex-1;
	if(Ex==2)
	{
		Ex=135;
	}
	printEnemy();
}

void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}



