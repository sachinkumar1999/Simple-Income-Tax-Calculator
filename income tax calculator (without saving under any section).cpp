#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;

     class iTax
   {
     public:
         char name[90],ads[90];
         float sal,tax;
         int ID;

     void getit(char )
       {
        cout<<"Enter your name: ";
        gets(name);
        cout<<"Enter your ID: ";
        cin>>ID;
        cout<<"Give your address in detail: ";
        gets(ads);
       }

    void showit()
       {

        cout<<"\nName    : "<<name;
        cout<<"\nID No.  : "<<ID;
        cout<<"\nAddress : "<<ads;
       }
       void get();
       void show();
     };


    void iTax::get()
       {
        cout<<"How much you earn in a year: ";
        cin>>sal;
        if(sal<500000)
          {
           tax=sal*(0);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
          }
        if((sal>500000)&&(sal<=750000))
          {
           tax=sal*(.10);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
           }
        if((sal>750000)&&(sal<=1000000))
          {
           tax=sal*(.15);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
          }
        if((sal>1000000)&&(sal<=1250000))
          {
           tax=sal*(.20);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
           }
       if((sal>1250000)&&(sal<=1500000))
          {
           tax=sal*(.25);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
          }
       if(sal>1500000)
          {
           tax=sal*(.30);
           cout<<"Your IncomeTax is= "<<tax<<"tk."<<endl;
          }
       }


     void iTax::show()
     {
         cout<<"\nSalary  : "<<sal<<" tk. in a year";
         cout<<"\nTax     : "<<tax<<" tk."<<"\n\n";

     }



   int main()
   {
       iTax r;
       r.get();
       r.show();
       return 0;
   }
