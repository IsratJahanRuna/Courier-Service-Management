#include<bits/stdc++.h>
#include<fstream>
using namespace std;
class curier
{
private:
    char name[50];
    int id,phonenum;
    char address[50];
    char bookingtime[50],bookedby[50];
    int mejarment,cost,rpn;
    char deliveryplace[50],deliverytime[50],customername[50],customeraddress[50];
    int customerphonenum;
public:
    void staff();
    void staffoutput();
    void booking();
    void bookingoutput();
    void delivery();
    void deliveryoutput();
    void customer();
    void customeroutput();
    void modify();
    int retidno();
    void show_staff();
};
void curier::staff()
{   cout<<"\n\nCreate New Staff Record";
    cin.ignore();
    cout<<"\n\nEnter Name: ";
    cin.getline(name,50);
    cout<<"\n\nEnter ID: ";
    cin>>id;
    cout<<"\n\nEnter Phone Number: ";
    cin>>phonenum;
    cout<<"\n\nEnter Address: ";
    cin.ignore();
    cin.getline(address,50);
    cout<<"\n\nNew Account has been created";
    cout<<"\n\nPress Enter To Return Main Menu.";
}
void curier::staffoutput()
{
    cout<<"\n\nName: "<<name<<endl;
    cout<<"\n\nID: "<<id<<endl;
    cout<<"\n\nPhone Number: "<<phonenum<<endl;
    cout<<"\n\nAddress: "<<address<<endl;

}
void curier::booking()

{   cout<<"\n\nEnter Booking Number: ";
    cin>>id;
    cout<<"\n\nEnter Booking Time: ";
    cin.ignore();
    cin.getline(bookingtime,50);
    cout<<"\n\nIssued By: ";
    cin.getline(bookedby,50);
    cout<<"\n\nEnter Customer Name: ";
    cin.getline(customername,50);
    cout<<"\n\nEnter Customer Address: ";
    cin.getline(customeraddress,50);
    cout<<"\n\nEnter Customer Phone Number: ";
    cin>>customerphonenum;
    cout<<"\n\nEnter Destination Point: ";
    cin.ignore();
    cin.getline(deliveryplace,50);
    cout<<"\n\nEnter Delivery Time: ";
    cin.getline(deliverytime,50);
    cout<<"\n\nEnter Receiver Phone Number: ";
    cin>>rpn;
    cout<<"\n\nEnter The Weight of Product : ";
    cin>>mejarment;
    cout<<"\n\nEnter The Cost: ";
    cin>>cost;
}
void curier::bookingoutput()
{
    cout<<"\n\nBooking Time: "<<bookingtime;
    cout<<"\n\nIssued By: "<<bookedby;
    cout<<"\n\nCustomer Name: "<<customername;
    cout<<"\n\nCustomer Address: "<<customeraddress;
    cout<<"\n\nCustomer Phone Number:0"<<customerphonenum;
    cout<<"\n\nDestination Point: "<<deliveryplace;
    cout<<"\n\nDelivery Time: "<<deliverytime;
    cout<<"\n\nThe Weight of Product : "<<mejarment;
    cout<<"\n\nThe Cost: "<<cost;
    cout<<"\n\nReceiver Phone Number:0"<<rpn;

}
int curier::retidno()
{
    return id;
}
void curier:: modify()
{   cout<<"\nStaff ID: "<<id;
    cin.ignore();
    cout<<"\nEnter New Name: ";
    cin.getline(name,50);
    cout<<"\nEnter New Phone Number: ";
    cin>>phonenum;
    cout<<"\nEnter New Address: ";
    cin.ignore();
    cin.getline(address,50);
}
void curier::show_staff()
{
	cout<<" "<<name<<setw(10)<<" "<<id<<setw(10)<<"0"<<phonenum<<setw(10)<<" "<<address<<endl;
}
void getstaff_details();
void edit_staffdetails(int);
void display_all_staff();
void delete_staff_account(int);
void write_booking();
void show_booking(int);
int main()
{ int num;
        char ch;
        do
    {
        system("cls");

        cout<<"\n\n\t...::::\xB2\xB2 WELCOME TO CURIER SERVICE MANAGEMENT SYSTEM \xB2\xB2:::::....\n\n";
		cout<<"\n\t\t\t          MAIN MENU\n\n";
		cout<<"\n\t\tPress recommended key for specific service:\n\n";
		cout<<"\n\n\t\t[1] STAFF MENU";
		cout<<"\n\n\t\t[2] BOOKING REPORT ";
		cout<<"\n\n\t\t[3] DELIVERY REPORT ";
		cout<<"\n\n\t\t[0] EXIT";
        cout<<"\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2";
        cout<<"\n\n\t\tEnter Your Choice:";
		cin>>ch;
		system("cls");
		switch(ch)
		{

        case '1':
 do
    {
        system("cls");
            cout<<"\n\n\t[1] Add Staff";
            cout<<"\n\n\t[2] Edit Staff";
            cout<<"\n\n\t[3] Display All Staff";
            cout<<"\n\n\t[4] Delete Staff Data";
            cout<<"\n\n\t[5] MAIN MENU";

            cout<<"\n\n\tEnter Your Choice: ";

            cin>>ch;
            system("cls");



            switch(ch)
            {
                case '1':getstaff_details();
                break;
                case '2':cout<<"\n\nEnter ID of the staff: ";
                cin>>num;
                edit_staffdetails(num);
                break;
                case '3': display_all_staff();
                break;
                case '4': cout<<"\n\nEnter ID of the staff: ";
                cin>>num;

                    delete_staff_account(num);
                    break;
                case'5':
                    main();
                    break;

                default:cout<<"\n\nInvalid Press";


            }
            cin.ignore();
            cin.get();
		}


            while(ch<='5');
            break;
                case '2':
                    write_booking();
                    break;
                case '3':
                    cout<<"\n\nEnter The Booking Number: ";cin>>num;
                    show_booking(num);
                    break;
                default:
                    cout<<"\n\nInvalid Press.";
		}
    cin.ignore();
    cin.get();
    }while(ch<='3');
		return 0;
}
void show_booking(int n)
{   bool found=false;
    curier ac;
    ifstream inFile;
    inFile.open("curier.txt",ios::binary);
    if(!inFile)
    {
        cout<<"File could not be open !! Press any Key...";
        return;
    }
    while(!inFile.eof() && found==false)
    {
    inFile.read(reinterpret_cast<char *> (&ac), sizeof(curier));

    if(ac.retidno()==n)
    {
       ac.bookingoutput();
       found=true;
       cout<<"\n\nPress Enter To Return Main Menu.";
    }
    }
    inFile.close();
   if(found==false)
    cout<<"\n\nBooking Number Not Found.";

}

void write_booking()
{
    curier ac;
    ofstream outFile;
    outFile.open("curier.txt",ios::binary|ios::app);
    ac.booking();
    outFile.write(reinterpret_cast<char *> (&ac), sizeof(curier));
    outFile.close();
    cout<<"\n\nBooking record has Been Created.";
    cout<<"\n\nPress Enter To Return Main Menu.";

}
void getstaff_details()
{
    curier ac;
	ofstream outFile;
	outFile.open("curier.txt",ios::binary|ios::app);
	ac.staff();
	outFile.write(reinterpret_cast<char *> (&ac), sizeof(curier));
	outFile.close();
}
void edit_staffdetails(int n)
{
    bool found=false;
	curier ac;
	fstream File;
	File.open("curier.txt",ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"\n\nFile could not be open !! Press any Key...";
		return;
	}
	while(!File.eof() && found==false)
	{
		File.read(reinterpret_cast<char *> (&ac), sizeof(curier));
		if(ac.retidno()==n)
		{
			cout<<"\n\nEnter The New Details of account"<<endl;
			ac.modify();
			int pos=(-1)*static_cast<int>(sizeof(curier));
			File.seekp(pos,ios::cur);
			File.write(reinterpret_cast<char *> (&ac), sizeof(curier));
			cout<<"\n\nRecord Updated";
			cout<<"\n\nPress Enter To Return Main Menu.";
			found=true;
		  }
	}
	File.close();
	if(found==false)
		cout<<"\n\nRecord Not Found ";
}
void display_all_staff()
{
    curier ac;
	ifstream inFile;
	inFile.open("curier.txt",ios::binary);
	if(!inFile)
	{
		cout<<"\n\nFile could not be open !! Press any Key...";
		return;
	}
	cout<<"\n\n\t\t\t\tALL Staff HOLDER LIST\n\n\n\n";

	cout<<"   NAME                    ID no.          PhoneNumber          Address\n\n";

	while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(curier)))
	{
		ac.show_staff();

	}

	inFile.close();
	cout<<"\n\nPress Enter To Return Main Menu";
}
void delete_staff_account(int n)
{
    curier ac;
	ifstream inFile;
	ofstream outFile;
	inFile.open("curier.txt",ios::binary);
	if(!inFile)
	{
		cout<<"\n\nFile could not be open !! Press any Key...";
		return;
	}
	outFile.open("Temp.dat",ios::binary);
	inFile.seekg(0,ios::beg);
	while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(curier)))
	{
		if(ac.retidno()!=n)
		{
			outFile.write(reinterpret_cast<char *> (&ac), sizeof(curier));
		}
	}
	inFile.close();
	outFile.close();
	remove("curier.txt");
	rename("Temp.txt","curier.txt");
	cout<<"\n\nRecord Deleted ...";
    cout<<"\n\nPress Enter To Return Main Menu.";
}
