#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
void mainMenu();

class Management{
    public:
     Management()
     {
        mainMenu();
     }
};

class Details
{
    public:
      static string name,gender;
      int phoneno;
      int age;
      string add;
      static int cid;
      char arr[100];

      void information()
      {
        cout<<"\nenter the custoemr id";
        cin>>cid;
        cout<<"\n enter the name";
        cin>>name;
        cout<<"\nenter the age";
        cin>>age;
        cout<<"\nenter address";
        cin>>add;
        cout<<"\n gender";
        cin>>gender;
        cout<<"yout details are saved with us"<<endl;

      }
};
int Details::cid;
string Details::name;
string Details::gender;

class registration
{
    public:
       static int choice;
       int choice1;
       int back;
       static float charges;

       void flights()
       {
        string flight[]={"Dubai","Canada","UK","USA","Australia","Europe"};

        for( int a=0;a<6;a++)
        {

            cout<<(a+1)<<". flight to"<<flight[a]<<endl;
        }
        cout<<"\nWelcome to the airlines!!"<<endl;
        cout<<"press the number of the country of which you want to boook the flight:";
        cin>>choice;
        switch (choice)
        {
        case 1: {
             cout<<"---------------Welcome to Dubai emerates----------------\n"<<endl;
             cout<<"Your comfort is or priority. Enjoy the journey!"<<endl;
             cout<<"Following are the flights\n"<<endl;
             cout<<"1. Dubai-498"<<endl;
             cout<<"\t08-01-2025 8:00AM 10Hours Rs.14000"<<endl;
             cout<<"2. Dubai-658"<<endl;
             cout<<"\t09-01-2025 4:00AM 12Hours Rs.10000"<<endl;
             cout<<"3. Dubai-508"<<endl;
             cout<<"\t01-01-2025 8:00AM 9Hours Rs.16000"<<endl;

             cout<<"To select the flight you want to book:";
             cin>>choice1;
             if(choice1==1)
             {
                charges=14000;
                cout<<"\n Dubai-498 Flight booked successfully!"<<endl;
                cout<<"you can go back to Menu and take the ticket"<<endl;}
            else if(choice1==2){
                charges=10000;
                cout<<"\n Dubai-658 Flight booked successfully!"<<endl;
                cout<<"you can go back to Menu and take the ticket"<<endl;

            }
            else if(choice1==3){
                charges=16000;
                cout<<"\n Dubai-508 Flight booked successfully!"<<endl;
                cout<<"you can go back to Menu and take the ticket"<<endl;}
            else{
                cout<<"invalid input,shifting to previous menu"<<endl;
                flights();
            }
            cout<<"Press any key to go back to the main menu"<<endl;
            cin>>back;
            if(back==1){
                mainMenu();
            }
            else{
                mainMenu();
            }


        }
        case 2:{
            cout<<"---------------Welcome to Canadian Airlines----------------\n"<<endl;
             cout<<"Your comfort is or priority. Enjoy the journey!"<<endl;
             cout<<"Following are the flights\n"<<endl;
             cout<<"1. CA-498"<<endl;
             cout<<"\t08-01-2025 8:00AM 10Hours Rs.14000"<<endl;
             cout<<"2. CA-658"<<endl;
             cout<<"\t09-01-2025 4:00AM 12Hours Rs.10000"<<endl;
             cout<<"3. CA-508"<<endl;
             cout<<"\t01-01-2025 8:00AM 9Hours Rs.16000"<<endl;

             cout<<"To select the flight you want to book:";
             cin>>choice1;
             if(choice1==1)
             {
                charges=14000;
                cout<<"\n CA-498 Flight booked successfully!"<<endl;
                cout<<"you can go back to Menu and take the ticket"<<endl;}
            else if(choice1==2){
                charges=10000;
                cout<<"\n CA-658 Flight booked successfully!"<<endl;
                cout<<"you can go back to Menu and take the ticket"<<endl;

            }
            else if(choice1==3){
                charges=16000;
                cout<<"\n CA-508 Flight booked successfully!"<<endl;
                cout<<"you can go back to Menu and take the ticket"<<endl;}
            else{
                cout<<"invalid input,shifting to previous menu"<<endl;
                flights();
            }
            cout<<"Press any key to go back to the main menu"<<endl;
            cin>>back;
            if(back==1){
                mainMenu();
            }
            else{
                mainMenu();
            }


        }
        case 3:{
            cout<<"---------------Welcome to UK Airways----------------\n"<<endl;
             cout<<"Your comfort is or priority. Enjoy the journey!"<<endl;
             cout<<"Following are the flights\n"<<endl;
             cout<<"1. UK-498"<<endl;
             cout<<"\t18-01-2025 8:00AM 10Hours Rs.22000"<<endl;
            

             cout<<"To select the flight you want to book:";
             cin>>choice1;
             if(choice1==1)
             {
                charges=22000;
                cout<<"\n Dubai-498 Flight booked successfully!"<<endl;
                cout<<"you can go back to Menu and take the ticket"<<endl;}
           
            else{
                cout<<"invalid input,shifting to previous menu"<<endl;
                flights();
            }
            cout<<"Press any key to go back to the main menu"<<endl;
            cin>>back;
            if(back==1){
                mainMenu();
            }
            else{
                mainMenu();
            }
        }
        case 4:
        {
            cout<<"---------------Welcome to US Airways----------------\n"<<endl;
             cout<<"Your comfort is or priority. Enjoy the journey!"<<endl;
             cout<<"Following are the flights\n"<<endl;
             cout<<"1. Us-498"<<endl;
             cout<<"\t08-01-2025 8:00AM 10Hours Rs.14000"<<endl;
             cout<<"2. US-658"<<endl;
             cout<<"\t09-01-2025 4:00AM 12Hours Rs.10000"<<endl;
             cout<<"3. US-508"<<endl;
             cout<<"\t01-01-2025 8:00AM 9Hours Rs.16000"<<endl;

             cout<<"To select the flight you want to book:";
             cin>>choice1;
             if(choice1==1)
             {
                charges=14000;
                cout<<"\n US-498 Flight booked successfully!"<<endl;
                cout<<"you can go back to Menu and take the ticket"<<endl;}
            else if(choice1==2){
                charges=10000;
                cout<<"\n US-658 Flight booked successfully!"<<endl;
                cout<<"you can go back to Menu and take the ticket"<<endl;

            }
            else if(choice1==3){
                charges=16000;
                cout<<"\n US-508 Flight booked successfully!"<<endl;
                cout<<"you can go back to Menu and take the ticket"<<endl;}
            else{
                cout<<"invalid input,shifting to previous menu"<<endl;
                flights();
            }
            cout<<"Press any key to go back to the main menu"<<endl;
            cin>>back;
            if(back==1){
                mainMenu();
            }
            else{
                mainMenu();
            }

        }
        case 5:
        {
            cout<<"---------------Welcome to Australian Airlines----------------\n"<<endl;
             cout<<"Your comfort is or priority. Enjoy the journey!"<<endl;
             cout<<"Following are the flights\n"<<endl;
             cout<<"1. aus-498"<<endl;
             cout<<"\t08-01-2025 8:00AM 10Hours Rs.14000"<<endl;
             cout<<"2. aus-658"<<endl;
             cout<<"\t09-01-2025 4:00AM 12Hours Rs.10000"<<endl;
             cout<<"3. aus-508"<<endl;
             cout<<"\t01-01-2025 8:00AM 9Hours Rs.16000"<<endl;

             cout<<"To select the flight you want to book:";
             cin>>choice1;
             if(choice1==1)
             {
                charges=14000;
                cout<<"\n aus-498 Flight booked successfully!"<<endl;
                cout<<"you can go back to Menu and take the ticket"<<endl;}
            else if(choice1==2){
                charges=10000;
                cout<<"\n aus-658 Flight booked successfully!"<<endl;
                cout<<"you can go back to Menu and take the ticket"<<endl;

            }
            else if(choice1==3){
                charges=16000;
                cout<<"\n aus-508 Flight booked successfully!"<<endl;
                cout<<"you can go back to Menu and take the ticket"<<endl;}
            else{
                cout<<"invalid input,shifting to previous menu"<<endl;
                flights();
            }
            cout<<"Press any key to go back to the main menu"<<endl;
            cin>>back;
            if(back==1){
                mainMenu();
            }
            else{
                mainMenu();
            }
        }
        case 6:
        {
            cout<<"---------------Welcome to Europian Airlines----------------\n"<<endl;
             cout<<"Your comfort is or priority. Enjoy the journey!"<<endl;
             cout<<"Following are the flights\n"<<endl;
             cout<<"1. eu-498"<<endl;
             cout<<"\t08-01-2025 8:00AM 10Hours Rs.14000"<<endl;
             cout<<"2. eu-658"<<endl;
             cout<<"\t09-01-2025 4:00AM 12Hours Rs.10000"<<endl;
             cout<<"3. eu-508"<<endl;
             cout<<"\t01-01-2025 8:00AM 9Hours Rs.16000"<<endl;

             cout<<"To select the flight you want to book:";
             cin>>choice1;
             if(choice1==1)
             {
                charges=14000;
                cout<<"\n eu-498 Flight booked successfully!"<<endl;
                cout<<"you can go back to Menu and take the ticket"<<endl;}
            else if(choice1==2){
                charges=10000;
                cout<<"\n eu-658 Flight booked successfully!"<<endl;
                cout<<"you can go back to Menu and take the ticket"<<endl;

            }
            else if(choice1==3){
                charges=16000;
                cout<<"\n eu-508 Flight booked successfully!"<<endl;
                cout<<"you can go back to Menu and take the ticket"<<endl;}
            else{
                cout<<"invalid input,shifting to previous menu"<<endl;
                flights();
            }
            cout<<"Press any key to go back to the main menu"<<endl;
            cin>>back;
            if(back==1){
                mainMenu();
            }
            else{
                mainMenu();
            }
        }
        default:{
            cout<<"invalid input, shifting to main menu"<<endl;
            mainMenu();
            break;
        }



        }


        

       }
};

float registration::charges;
int registration::choice;

class ticket : public registration,Details
{
   public:
     void Bill()
     {
        string destination="";
        ofstream outf("record.txt");
        {
            outf<<"----------------XYZ Airlines--------------"<<endl;
            outf<<"---------------ticket---------------------"<<endl;

            outf<<"customer ID:"<<Details::cid<<endl;
            outf<<"customer name:"<<Details::name<<endl;
            outf<<"customer Gender:"<<Details::gender<<endl;
            outf<<"\tdescription"<<endl<<endl;

            if( registration::choice==1){
                destination="Dubai";

            }
            else if( registration::choice==2){
                destination="Canada";

            }
            else if( registration::choice==3){
                destination="UK";
                
            }
            else if( registration::choice==4){
                destination="USA";
                
            }
            else if( registration::choice==5){
                destination="Australia";
                
            }
            else if( registration::choice==6){
                destination="Europe";
                
            }
            outf<<"Destination\t\t"<<destination<<endl;
            outf<<"Flight cost: \t\t"<<registration::charges<<endl;
        }
        outf.close();

     }
     void dispBill(){
        ifstream ifs("record.txt");
        {
        
            if(!ifs){
                cout<<"File error!"<<endl;
            }
            while (!ifs.eof())
            {
                ifs.getline(arr,100);//to rean content
                cout<<arr<<endl;

            }
            ifs.close();
        }
        
     }
};


void mainMenu()
{
    int lchoice,schoice,back;

    cout<<"\t                   XYZ Airlines\n"<<endl;
    cout<<"\t______________________Main MEnu_________________"<<endl;

    cout<<"\t_________________________________________________"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t"<<endl;

    cout<<"\t|\t Press 1 to add the customer details \t|"<<endl;
    cout<<"\t|\t Press 2 for flight registration    \t|"<<endl;
    cout<<"\t|\t Press 3 for Ticket and Charges    \t|"<<endl;
    cout<<"\t|\t Press 4 for Exit    \t|"<<endl;
    cout<<"\t|\t\t\t\t\t\t|"<<endl;
    cout<<"\t_________________________________________________"<<endl;


    cout<<"enter your choice:";
    cin>>lchoice;

    Details d;
    registration r;
    ticket t;

    switch(lchoice)
    {
        case 1:
        {
            cout<<"____________customers__________\n"<<endl;
            d.information();

            cout<<"press any key to go back to main menu\n"<<endl;
        
            cin>>back;
            cin>>back;

            if(back==1)
            {
                mainMenu();

            }
            else
             {
                mainMenu();
             }
            break;


        }
        case 2:
        {
            cout<<"__________Book a flight using this system___________\n"<<endl;
            r.flights();
            break;
        }
        case 3:
        {
            cout<<"____________get your ticket____________\n"<<endl;
            t.Bill();

            cout<<"your ticket is printed , you can collect it\n"<<endl;
            cout<<"press 1 to display your ticket";

            cin>>back;

            if (back==1){
                t.dispBill();
                cout<<"press any key to back to main menu";
                cin>>back;

                if(back==1){
                    mainMenu();
                }
                else{
                    mainMenu();
                }
            }
            else{
                mainMenu();
            }
            break;
        }
        case 4:
        {
            cout<<"\n\n\t______________Thank You_____________"<<endl;
            break;
        }
        default:
        {
            cout<<"invalid input please try again\n"<<endl;
            mainMenu();
            break;
        }

    }


   

}

int main()
{
    Management Mobj;
    return 0;
}