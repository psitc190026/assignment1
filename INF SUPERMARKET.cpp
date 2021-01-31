#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
enum Roster{printers=1,phones=2,tables=3};
int main()
{
  string name;
 long double ID,amount,quantity,cost,balance,priceOfPrinter=500,priceOfPhone=300,priceOfTable=200;

  const long double vat=0.12;

    cout << "WELCOME TO MAXWELL SUPERMARKET" << endl;
    cout<<"the things we sell here are:\n";
    cout<<"1.printers\n";
    cout<<"2.phones\n";
    cout<<"3.tables\n";
    cout << "please enter your name to begin purchase:" << endl;
    cin>> name;
   double
    choice;
     cout << "please enter your unique ID Number:" << endl;
    cin>>ID;
      cout << "Please select what you wish to buy:\n";
      cout<<"1.printers\n";
      cout<<"2.Phones\n";
      cout<<"3.Tables\n";
      cout<<"4.Quit the program\n";
      cout<<"what would you like to buy?";
      cout<<"enter 1,2,or 3, to choose."<<endl;
       cin>>choice;

     if(choice == printers)
     {


       cout<<"The Price of"<<"printer"<<"=$"<<priceOfPrinter<<endl;
       cout<<"VAT"<<"="<<vat<<endl;
       cout<<"How many would you like to buy?"<<endl;
      cin>>quantity;
       cost=(priceOfPrinter*quantity)+vat;
       cout<<"Enter the amount you are paying:"<<endl;
       cin>>amount;
       if(amount>cost)
       {
           balance=amount-cost;

       }
       else
       {
           cout<<"sorry you don't have enough money to buy THE ITEM"<<endl;
       }

    cout<<"----------official receipt--------------"<<endl;

    cout<<"Name of customer:"<<setw(8)<<name<<endl;
    cout<<"Your unique ID Number:"<<setw(8)<<ID<<endl;
    cout<<"Item bought:"<<setw(8)<<"printer"<<endl;
    cout<<"Quantity bought:"<<setw(8)<<quantity<<endl;
    cout<<"Vat Amount:"<<setw(8)<<setprecision(2)<<vat<<endl;
    cout<<"Total cost:$"<<setw(8)<<fixed<<showpoint<<setprecision(1)<<cost<<endl;
     cout<<"Total Amount paid:$"<<setw(8)<<setprecision(1)<<amount<<endl;
     cout<<"Balance/Change:$ "<<setw(8)<<setprecision(1)<<balance<<endl;
     cout<<"THANK YOU FOR TRANSACTING WITH US: SEE YOU SOON!"<<endl;


     }
   else  if(choice == phones)
     {


       cout<<"price of"<<"phone"<<"=$"<<priceOfPhone<<endl;
       cout<<"VAT"<<"="<<vat<<endl;
       cout<<"how many would you like to buy?"<<endl;
      cin>>quantity;
       cost=(priceOfPhone*quantity)+vat;
       cout<<"Enter the amount you are paying:"<<endl;
       cin>>amount;
      if(amount>cost)
       {
           balance=amount-cost;

       }
       else
       {
           cout<<"sorry you don't have enough money to buy the ITEM"<<endl;
       }

    cout<<"----------official receipt--------------"<<endl;

    cout<<"Name of customer:"<<setw(8)<<name<<endl;
    cout<<"Your unique ID Number:"<<setw(8)<<ID<<endl;
    cout<<"Item bought:"<<setw(8)<<"printer"<<endl;
    cout<<"Quantity bought:"<<setw(8)<<quantity<<endl;
    cout<<"Vat Amount:"<<setw(8)<<setprecision(2)<<vat<<endl;
   cout<<"Total cost:$"<<setw(8)<<fixed<<showpoint<<setprecision(1)<<cost<<endl;
     cout<<"Total Amount paid:$"<<setw(8)<<setprecision(1)<<amount<<endl;
     cout<<"Balance/Change:$ "<<setw(8)<<setprecision(1)<<balance<<endl;
   cout<<"THANK YOU FOR TRANSACTING WITH US: SEE YOU SOON!"<<endl;


     }
      else   if(choice == tables)
     {


       cout<<"price of"<<"table"<<"=$"<<priceOfTable<<endl;
       cout<<"VAT"<<"="<<vat<<endl;
       cout<<"How many would you like to buy?"<<endl;
      cin>>quantity;
       cost=(priceOfTable*quantity)+vat;
       cout<<"Enter the amount you are paying:"<<endl;
       cin>>amount;
       if(amount>cost)
       {
           balance=amount-cost;

       }
       else
       {
           cout<<"sorry you don't have enough money to buy the ITEM."<<endl;
       }

    cout<<"----------official receipt--------------"<<endl;

    cout<<"Name of customer:"<<setw(8)<<name<<endl;
    cout<<"Your unique ID Number:"<<setw(8)<<ID<<endl;
    cout<<"Item bought:"<<setw(8)<<"printer"<<endl;
    cout<<"Quantity bought:"<<setw(8)<<quantity<<endl;
    cout<<"Vat Amount:"<<setw(8)<<setprecision(2)<<vat<<endl;
   cout<<"Total cost:$"<<setw(8)<<fixed<<showpoint<<setprecision(1)<<cost<<endl;
     cout<<"Total Amount paid:$"<<setw(8)<<setprecision(1)<<amount<<endl;
     cout<<"Balance/Change:$ "<<setw(8)<<setprecision(1)<<balance<<endl;
     cout<<"THANK YOU FOR TRANSACTING WITH US: SEE YOU SOON!"<<endl;


     }


         else
     {
         cout<<"The program is quitting"<<endl;

     }



       return 0;
}























































































































































































































































































































