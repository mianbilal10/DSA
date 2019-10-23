//By: Mian Bilal -> mianbilal10
/* This is a Patient waiting room management system*/
//In this program we are using Queue Data Structure.
//We have used Bubble sort algorithm for sorting puposes.
//C++ OOP concepts are used to solve problem.

#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
using namespace std;
#define size 5 // size of array

class PatientRecord{
private:
	int id[size];//array for storing patient ids assigned by program itself
	int front = -1, rear = -1,count=0;
	string names[size];//Inputs and stores names of registered patients

public:
	bool isEmpty()//check for queue
	{
		if (front == -1 && rear == -1)
			return true;
		else
			return false;
	}

	bool isFull()//check for queue
	{
		if (rear == size - 1)
			return true;
		else
			return false;
	}

// method for registering patients
	void registerPatient()
	{
		if (isFull()){
			cout << "Registration is closed!" << endl;
			return;
		}


		else
		{
			if (isEmpty())
			{
				rear = front = 0;
			}
			//Assigning ID to the patient
			id[rear] = rear + 1;
			cout << "Please enter the patient name(Space not allowed):  ";
			cin >> names[rear];
			cout << "\nPatient Has been registered.\nPatient Name: " << names[rear] << " \nPatient ID:" << rear + 1 << "\n\n" << endl;
			system("pause>nul");//Holds screen
			system("cls");//Clear screen
			rear++;
			count++;
		}
	}
//method for serving patients
	void ServePatient()
	{
		if (isEmpty())
			cout << "No more patients\n";
		else{
			cout << "PNO:"<<id[front]<<"  "<<names[front] << " is Served!" << endl;
			front++;
			if (front == rear)
				front = rear = -1;
		}

		system("pause>nul");//Holds screen
		system("cls");//Clear screen
	}

	void CancelAll()
	{
		if (isEmpty()){
			cout << "No more patients left" << endl;
			return;
		}
		else front = rear = -1;
		cout << "Waiting Line Is Cleared" << endl;
		system("pause>nul");//Holds screen
		system("cls");//Clear screen
	}

	void CanDoctorGoHome()
	{
		if (count==size){
			cout << "All patients served. Doctor can go home" << endl;
			return;
		}
		else
			cout << "Doctor cannot go home." << endl;
		system("pause>nul");//Holds screen
		system("cls");//Clear screen
		return;

	}

	void ShowAllPatient()
	{
		if (isEmpty()){
			cout << "No more patients left" << endl;

		}

		else{
			cout << endl << "  Waiting patients(Sorted by names)\n";
			string copy[size];//copy of names string array
			int copy1[size];//copy of id array
			for (int i = 0; i < size; i++){
				copy[i] = names[i];
				copy1[i] = id[i];

			}

			sorter(copy,copy1);//Invoking sorter method

		}
		system("pause>nul");//Holds screen
		system("cls");//Clear screen
	}

	//Sorting names string and ids
	void sorter(string input[],int ID[])
	{
		string temp1 ;
		int temp2;
		for (int i = front; i < rear; i++)
		{
			for (int j = front; j < rear - 1; j++)
			{
				if (input[j] > input[j+1])
				{
					temp1 = input[j];
					input[j] = input[j+1];
					input[j+1]=temp1;

					temp2 = ID[j];
					ID[j] = ID[j + 1];
					ID[j + 1] = temp2;
				}
			}
		}
		cout << "ID\tName\n";
		for (int j = front; j <= rear-1; j++)
		{
			cout << ID[j] << "\t" << input[j] << endl;
		}
		cout  << "___________________\n";
		system("pause>nul");//Holds screen
		system("cls");//Clear screen
		return ;
	}

};
//Main Starts here.
void main()
{
	int s;
	PatientRecord object;//object of the class

	do
	{
		cout << "Waiting Room Management System" << endl;
		cout << "______________________________" << endl;
		cout << "1- Register" << endl;
		cout << "2- Serve" << endl;
		cout << "3- Cancel All" << endl;
		cout << "4- Can Doctor Go Home" << endl;
		cout << "5- Show All Patient" << endl;
		cout << "6- Exit" << endl;
		cin >> s;
		cout << "________________________" << endl;
		switch (s)
		{
		case 1:
			object.registerPatient();
			break;
		case 2:
			object.ServePatient();
			break;
		case 3:
			object.CancelAll();
			break;
		case 4:
			object.CanDoctorGoHome();
			break;
		case 5:
			object.ShowAllPatient();
			break;
		case 6:
			exit(1);
			break;

		}

	} while (1);

}//main ends
