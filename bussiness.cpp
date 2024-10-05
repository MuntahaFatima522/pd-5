#include<iostream>
#include<windows.h>
using namespace std;

void printHeader();
int Menu();
int adminLogin();
int adminMenu();
int studentLogin();
int studentMenu();
int Registeration();

int main()
{
	int option;
	printHeader();
	option=Menu();
	system("cls");
	if(option==1)
	{
		cout<<"You have entered option 1 i.e. Admin."<<endl;
		adminLogin();

	}
	if(option==2)
	{
		cout<<"You have entered option 2 i.e. Student."<<endl;
		studentLogin();

	}
	if(option==3)
	{
		cout<<"You have entered option 3 i.e. Not Registered."<<endl;
		Registeration();
	}
	if(option==4)
	{
		return 0;
	}

}
void printHeader()
{
	system("cls");
	cout<<"**********************************************************************************************************************"<<endl;
	cout<<"*                                                                                                                    *"<<endl;
	cout<<"*    #     ###  ####   ###    #   ###   #   #        #   #   #   ##  #   #   ###  ####  #   #  ####  ##  #  ###      *"<<endl;
	cout<<"*    #      #   #   #  #  #  # #  #  #   # #         # # #  # #  ##  #  # # #     #     # # #  #     ##  #   #       *"<<endl;
	cout<<"*    #      #   ####   ###   ###  ###     #          #   #  ###  # # #  ### #  #  ####  #   #  ####  # # #   #       *"<<endl;
	cout<<"*    #      #   #   #  # #   # #  # #     #          #   #  # #  #  ##  # # #  #  #     #   #  #     #  ##   #       *"<<endl;
	cout<<"*    ##### ###  ####   #  #  # #  #  #    #          #   #  # #  #   #  # #  ###  ####  #   #  ####  #   #   #       *"<<endl;
	cout<<"*                                                                                                                    *"<<endl;
	cout<<"*                                                                                                                    *"<<endl;
	cout<<"*                                    ###    #   #    ###   ###   ####   #   #                                        *"<<endl;
	cout<<"*                                   #        # #    #       #    #      # # #                                        *"<<endl;
	cout<<"*                                    ###      #      ###    #    ####   #   #                                        *"<<endl;
	cout<<"*                                       #     #         #   #    #      #   #                                        *"<<endl;
	cout<<"*                                    ###      #      ###    #    ####   #   #                                        *"<<endl;
	cout<<"*                                                                                                                    *"<<endl;
	cout<<"**********************************************************************************************************************"<<endl;
	cout<<endl<<endl;
}


int Menu()
{
	int option;
	cout<<"Select one of the following options number: "<<endl;
	cout<<"1.\t Admin"<<endl;
	cout<<"2.\t Student"<<endl;
	cout<<"3.\t Not Registered"<<endl;
	cout<<"4.\t Exit."<<endl;
	cout<<"Your option: ";
	cin>>option;
	return option;
}


int adminLogin()
{
	string password;
	cout<<"Enter admin password: ";
	cin>>password;
	if(password=="admin_pass123")
	{
		system("cls");
		cout<<"Admin login successful."<<endl;
		int option;
		option=adminMenu();
		system("cls");
		if(option==1)
		{
			cout<<"You have entered option 1 (to add a book)"<<endl;
		}
		if(option==2)
		{
			cout<<"You have entered option 2 (to search for a book)"<<endl;
		}
		if(option==3)
		{
			cout<<"You have entered option 3 (to delete a book)"<<endl;
		}
		if(option==4)
		{
			cout<<"You have entered option 4 (to display all books)"<<endl;
		}
		if(option==5)
		{
			cout<<"You have entered option 5 (to issue a book)"<<endl;
		}
	    if(option==6)
		{
			return 0;
		}
	}
	else
	{
		cout<<"Wrong password."<<endl;
	}
}


int adminMenu()
{
	int option;
	cout<<"Select one of the following options: "<<endl;
	cout<<"1. Add a book."<<endl;
        cout<<"2. Search for a book."<<endl;
        cout<<"3. Delete a book."<<endl;
        cout<<"4. Display all books."<<endl;
	cout<<"5. Issue a book."<<endl;
        cout<<"6. Exit."<<endl;
	cout<<"Your option: "<<endl;
	cin>>option;
	return option;
}


int studentLogin()
{
	string ID;
	cout<<"Enter Student ID: ";
	cin>>ID;
	string password;
	cout<<"Enter password: ";
	cin>>password;
	
	
	if(ID=="MuntahaFatima")
	{
		if (password=="muntaha123")
		{
			system("cls");
			cout<<"Student login suuceessful."<<endl;
			int option;
			option=studentMenu();
			system("cls");
			if(option==1)
			{
				cout<<"You have entered option 1 (to search for a book)"<<endl;
			}
			if(option==2)
			{
				cout<<"You have entered option 2 (to borrow a book)"<<endl;
			}
			if(option==3)
			{
				cout<<"You have entered option 3 (to display all books)"<<endl;
			}
			if(option==4)
			{
				cout<<"You have entered option 4 (to return a book)"<<endl;
			}
	    	if(option==5)
			{
				return 0;
			}
		}
		else
		{
			cout<<"Wrong password"<<endl;
		}
	
	}
	else
	{
		int option;
		cout<<"You are not registered.Kindly register yourself."<<endl;
		cout<<"Select one of the following options: "<<endl;
		cout<<"1. Register."<<endl;
		cout<<"2. Exit."<<endl;
		cin>>option;
		if(option==1)
		{
			Registeration();
		}
		if(option==2)
		{
			return 0;
		}

	}
}


int studentMenu()
{
	int option;
	cout<<"Select one of the following options: "<<endl;
	cout<<"1. Search for a book."<<endl;
        cout<<"2. Borrow a book."<<endl;
        cout<<"3. Display all books."<<endl;
	cout<<"4. Return a book."<<endl;
        cout<<"5. Exit."<<endl;
	cout<<"Your option: "<<endl;
	cin>>option;
	return option;
}


int Registeration()
{
	system("cls");
	string ID,password;
	cout<<"Choose your ID: ";
	cin>>ID;
	cout<<"Choose your password: ";
	cin>>password;
	system("cls");
	cout<<"Successfully registered."<<endl;
	int option;
	cout<<"Select one of the following options: "<<endl;
	cout<<"1.  Log in."<<endl;
	cout<<"2.  Exit."<<endl;
	cin>>option;
	if(option==1)
	{
		system("cls");
		studentLogin();
	}
	if(option==2)
	{
		return 0;
	}


}