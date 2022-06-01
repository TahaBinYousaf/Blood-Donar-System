#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
struct Donor {
	string name;
	string roll;
	string dep;
	string blood_group;
	string phone;
	string date;
	string mail;
	string age;
};

void delRecord(Donor d[1000], string name)
{
	ifstream output("bds_donor_data.txt");
		for (int i = 0; i < 1000; i++)
	{
		getline(output, d[i].name);
		getline(output, d[i].roll);
		getline(output, d[i].age);
		getline(output, d[i].dep);
		getline(output, d[i].blood_group);
		getline(output, d[i].date);
		getline(output, d[i].phone);
		getline(output, d[i].mail);
	}
	ofstream input("bds_donor_data.txt",ios::trunc);
	for (int i = 0; i < 1000; i++)
	{
		if (name != d[i].name)
		{
			input << d[i].name << endl;
			input << d[i].roll << endl;
			input << d[i].age << endl;
			input << d[i].dep << endl;
			input << d[i].blood_group << endl;
			input << d[i].date << endl;
			input << d[i].phone << endl;
			input << d[i].mail << endl;
		}
	}
}

void addrecord(Donor d[1000])
{
            int count = 0;
            int i = 0;
	        cin.ignore();
			ofstream input("bds_donor_data.txt", ios::app);
			cout << endl << endl << "\tEnter the Name of Donor: ";
			getline(cin, d[i].name);
			input<<d[i].name<<endl;
			cout << "\tEnter Roll ID: ";
			getline(cin, d[i].roll);
			input<<d[i].roll<<endl;
			cout << "\tEnter Age: ";
			getline(cin, d[i].age);
			input<<d[i].age<<endl;
			cout << "\tEnter Department: ";
			getline(cin, d[i].dep);
			input<<d[i].dep<<endl;
			cout << "\tEnter Blood Group (In Uppercase): ";
			getline(cin, d[i].blood_group);
			input<<d[i].blood_group<<endl;
			cout << "\tLast Date of Blood Donation: ";
			getline(cin, d[i].date);
			input<<d[i].date<<endl;
			cout << "\tEnter Phone No. : ";
			getline(cin, d[i].phone);
			input<<d[i].phone<<endl;
			cout << "\tEnter E-mail: ";
			getline(cin, d[i].mail);
			input<<d[i].mail<<endl;
			i++;
			count++;
}
void donorRecord(Donor d[1000], string name) {
	ifstream output("bds_donor_data.txt");
	for (int i = 0; i < 1000; i++)
	{
			getline(output,d[i].name);
			getline(output,d[i].roll);
			getline(output,d[i].age);
			getline(output,d[i].dep);
			getline(output,d[i].blood_group);
			getline(output,d[i].date);
			getline(output,d[i].phone);
			getline(output,d[i].mail);
	}
		for (int i = 0; i < 1000; i++)
	{
		if (name == d[i].name) {
			cout<<endl<<"\t\tName of the Donor is "<<d[i].name<<endl;
			cout<<"\t\tRoll ID is "<<d[i].roll<<endl;
			cout<<"\t\tAge is "<<d[i].age<<endl;
			cout<<"\t\tDepartment is "<<d[i].dep<<endl;
			cout<<"\t\tBlood Group is "<<d[i].blood_group<<endl;
			cout<<"\t\tLast date of blood donation is "<<d[i].date<<endl;
			cout<<"\t\tPhone No. is "<<d[i].phone<<endl;
			cout<<"\t\tE-Mail is "<<d[i].mail<<endl;
		}
	}
}
void donorList(Donor d[1000], string group) {
	ifstream output("bds_donor_data.txt");
	for(int i = 0; i < 1000; i++)
	{
			getline(output,d[i].name);
			getline(output,d[i].roll);
			getline(output,d[i].age);
			getline(output,d[i].dep);
			getline(output,d[i].blood_group);
			getline(output,d[i].date);
			getline(output,d[i].phone);
			getline(output,d[i].mail);
	}
	for(int i = 0; i < 1000; i++)
	{
		if (group == d[i].blood_group)
		{
			cout << endl << "\t\tName of the Donor is " << d[i].name << endl;
			cout << "\t\tRoll ID is " << d[i].roll << endl;
			cout << "\t\tAge is " << d[i].age << endl;
			cout << "\t\tDepartment is " << d[i].dep << endl;
			cout << "\t\tBlood Group is " << d[i].blood_group << endl;
			cout << "\t\tLast date of blood donation is " << d[i].date << endl;
			cout << "\t\tPhone No. is " << d[i].phone << endl;
			cout << "\t\tE-Mail is " << d[i].mail << endl;
			cout << endl << endl;
		}
	}
}
void updateRecord(Donor d[1000],Donor d1[1000] ,string name) {
      int ch;
      int count=0;
      cin.ignore();
      ifstream output("bds_donor_data.txt");
      for(int i=0;i<1000;i++)
      {
      	output.eof();
      	getline(output,d[i].name);
      	getline(output,d[i].roll);
      	getline(output,d[i].age);
      	getline(output,d[i].dep);
      	getline(output,d[i].blood_group);
      	getline(output,d[i].date);
      	getline(output,d[i].phone);
      	getline(output,d[i].mail);
	  }
	  for(int i=0;i<1000;i++)
	  {
	  	if(name==d[i].name)
	  	{
	  	   	do
	{
		cout <<endl<< "\t\tPress 1 to update name in the record." << endl;
		cout << "\t\tPress 2 to update roll id." << endl;
		cout << "\t\tPress 3 to update age." << endl;
		cout << "\t\tPress 4 to update department." << endl;
		cout << "\t\tPress 5 to update blood group." << endl;
		cout << "\t\tPress 6 to update last date of donation." << endl;
		cout << "\t\tPress 7 to update phone number." << endl;
		cout << "\t\tPress 8 to update e-mail." << endl;
		cout << "\t\tPress 9 to exit updation." << endl << endl;
		cout << "\tEnter your choice: ";
		cin >> ch;
		while (ch != 1 && ch != 2 && ch != 3 && ch != 4 && ch != 5 && ch != 6 && ch != 7 && ch != 8 && ch != 9) {
			cout << endl << "\t\tError! You entered invalid choice." << endl;
			cout << endl << "\t\tRe-enter your choice: ";
			cin >> ch;
		}
		for (int i = 0; i < 1000; i++)
		{
			if (name == d[i].name)
			{
				if (ch == 1)
				{
					cin.ignore();
					cout << endl << "\tUpdate name: ";
					getline(cin,d[i].name);
				}
				if (ch == 2)
				{
					cin.ignore();
					cout << endl << "\tUpdate roll id: ";
					getline(cin,d[i].roll);
				}
				if (ch == 3)
				{
					cin.ignore();
					cout << endl << "\tUpdate age: ";
					getline(cin,d[i].age);
				}
				if (ch == 4)
				{
					cin.ignore();
					cout << endl << "\tUpdate department: ";
					getline(cin,d[i].dep);
				}
				if (ch == 5)
				{
					cin.ignore();
					cout << endl << "\tUpdate blood group (In Uppercase): ";
					getline(cin,d[i].blood_group);
				}
				if (ch == 6)
				{
					cin.ignore();
					cout << endl << "\tUpdate last date of donation: ";
					getline(cin,d[i].date);
				}
				if (ch == 7)
				{
					cin.ignore();
					cout << endl << "\tUpdate phone number: ";
					getline(cin,d[i].phone);
				}
				if (ch == 8)
				{
					cin.ignore();
					cout << endl << "\tUpdate e-mail: ";
					getline(cin,d[i].mail);
				}
			}
		}
		count++;
	} while (ch != 9);
		}
	  }
	  for(int i=0;i<1000;i++)
	  {
	  	d1[i].name=d[i].name;
	  	d1[i].roll=d[i].roll;
	  	d1[i].age=d[i].age;
	  	d1[i].dep=d[i].dep;
	  	d1[i].blood_group=d[i].blood_group;
	  	d1[i].date=d[i].date;
	  	d1[i].age=d[i].age;
	  	d1[i].mail=d[i].mail;
	  }
	ofstream input ("bds_donor_data.txt");
	for(int i=0;i<1000;i++)
	{
		input<<d1[i].name<<endl;
		input<<d1[i].roll<<endl;
		input<<d1[i].age<<endl;
		input<<d1[i].dep<<endl;
		input<<d1[i].blood_group<<endl;
		input<<d1[i].date<<endl;
		input<<d1[i].age<<endl;
		input<<d1[i].mail<<endl;
	}
	if(count==0)
	cout<<endl<<"\t\tNo match found"<<endl;
}
int main()
{
	Donor d[1000];
	Donor d1[1000];
    int choice;
	cout << endl << setw(75) << "====================================" << endl;
	cout << setw(75) << "|   Blood Bank Management System   |" << endl;
	cout << setw(75) << "====================================" << endl;
	do
	{
		cout << endl << endl << setw(33) << "To Add New Data" << setw(40) << "(1)" << endl;
		cout << setw(57) << "To View Record of Donor (Based on Name)" << setw(16) << "(2)" << endl;
		cout << setw(62) << "To Search Donors list (Based on Blood Group)" << setw(11) << "(3)" << endl;
		cout << setw(46) << "To Update the Donor's Record" << setw(27) << "(4)" << endl;
		cout << setw(42) << "To Remove Donor's Record" << setw(31) << "(5)" << endl;
		cout << setw(25) << "To Exit" << setw(48) << "(6)" << endl;
		cout << endl << endl << setw(50) << "Please Enter Your Choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
		    addrecord(d);
			break;
		}
		case 2:
		{
			string name;
			cout << endl << "\t\tEnter the Name of Donor whose list you want to see: ";
			cin >> name;
			donorRecord(d, name);
			break;
		}
		case 3:
		{
			string group;
			cout << endl << "\t\tEnter Blood Group (In Uppercase) to View List of Donors: ";
			cin >> group;
			donorList(d, group);
			break;
		}
		case 4:
		{
			string name;
			cout << endl << "\t\tEnter the Name of Donor whose record you want to update: ";
			cin >> name;
			updateRecord(d,d1, name);
			break;
		}
		case 5:
		{
			cout <<endl<< "\t\tEnter the name of Donor whose record you want to delete: ";
			string name;
			cin >> name;
			delRecord(d, name);
			break;
		}
		case 6:
		{
			cout << endl << endl << "\t\t\t\t\t*** You have exited the program ***" << endl << endl;
			break;
		}
		default:
			{
				cout << endl << "\t\tError! You entered invalid choice." << endl;
			    cout << endl << "\t\tRe-enter your choice: ";
			    cin >> choice;
			}
		}
	} while (choice != 6);
	return 0;
}
