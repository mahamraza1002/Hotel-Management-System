#include<iostream>
using namespace std;
void list(int room[5],int people[5])
{
	cout << "Occupied Rooms: " << endl;
	for (int i = 0; i < 5; i++) {
		if (people[i] != 0) {
			cout << room[i] <<"----"<<people[i]<< endl;
			

		}
	}
	cout << "Free Rooms: " << endl;
	for (int i = 0; i < 5; i++) {
		
		 if (people[i] == 0) {
			 cout << room[i] <<"----"<<people[i]<< endl;
		}
	}

}
void checkin(int room[5], int people[5]) {
	int residents = 0;
	cout << "Enter number of residents: ";
	cin >> residents;
	for (int i = 0; i < 5; i++) {
		
		if (people[i] == 0)
		{
			cout << "Room available is: " << room[i] << endl;
			people[i] = residents;
			break;
		}
	  }
}
void checkout(int room[5], int people[5]) {
	int room1 = 0;
	cout << "Enter room number: ";
	cin >> room1 ;
	cout << "Sucessfully Checked out!" << endl;
	for (int i = 0; i < 5; i++) {
		if (room[i] == room1) {
			people[i] = 0;
		}
	}

}

int main()
{
	int room[5] = { 100,101,102,103,104 };
	int people[5] = { 1,0,2,0,4 };
	while (true)
	{
		char option{};
		
		cout << "Enter 'A' for check-in" << endl;
		cout << "Enter 'B' for check-out" << endl;
		cout << "Enter 'V' for viewing all rooms" << endl;
		
		cin >> option;
		cout << endl;

		
		switch (option)
		{
		case 'A':
			checkin(room, people);
			break;
		case 'B':
			checkout(room,people);
			break;
		case 'V':
			list(room , people);
			break;
		}
		
		cout << "\n--------------------\n" << endl;
	}



}
