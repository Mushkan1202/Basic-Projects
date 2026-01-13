// ATM machine code by c++
#include<iostream>
#include<string.h>
using namespace std;
class Bank{
    char name[20];
    long accnumber;
    char acctype[10];
    long amount =0;
    long total =0;

    public:
    void setvalue(){
        cout<<"Enter name\n";
        cin>>name;
        cout<<"Enter Account number\n";
        cin>>accnumber;
        cout<<"Enter Account type\n";
        cin>>acctype;
        cout<<"Enter Balance\n";
        cin>>total;
    }
    // Function to display the required data
    void showdata(){
        cout<<"Name:"<<name<<endl;
        cout<<"Account No:"<<accnumber<<endl;
        cout<<"Account type:"<<acctype<<endl;
        cout<<"Balance:"<<total<<endl;
    }
    // Function to deposit the amount in ATM
    void deposit(){
        cout<<"\nEnter amount to be Deposited\n";
        cin>>amount;
    }
    // Function to show the balance amount 
    void showbal(){
        total =total +amount;
        cout<<"\ntotal balance is :"<<total;
    }
    // Function to withdraw the amount in ATM
    void withdrawl(){
        int a, avai_balance;
        cout<<"Enter amount to withdraw\n";
        cin>>a;
        avai_balance = total-a;
        cout<<"Available balance is"<<avai_balance;
    }
};
int main(){
    Bank b;
    int choice;
    while(1){
        cout<<"\n~~~~~~~~~~~~~~~~~~~";
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout<<"~~~~WELCOME~~~~~~~~~~~~~~";
        cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout<<"~~~~~~~~~~~~~\n\n";
        cout<<"Enter Your Choice\n";

        cout<<"\t 1. Enter name,Account"<<"number, Account type\n";
        cout<<"\t 2.Balnce Enquiry\n";
        cout<<"\t 3.Deposit Money\n";
        cout<<"\t 4. show Total balance\n";
        cout<<"\t 5.withdraw Money\n";
        cout<<"\t 6.cancel\n";
        cin>>choice;
        switch(choice){
            case 1:
            b.setvalue();
            break;
            case 2:
            b.showdata();
            break;
            case 3:
            b.deposit();
            break;
            case 4:
            b.showbal();
            break;
            case 5:
            b.withdrawl();
            break;
            case 6:
            exit(1);
            default:
            cout<<"\nInvalid \n";
        }
    }
} 