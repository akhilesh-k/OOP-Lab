/*
Lab 01-B
1.	Define a class to represent a bank account. Include the following members:
Provide public member functions for each of the Input, Deposit, Withdrawal and Display

Author: Akhilesh
*/

#include<iostream>
using namespace std;

class Account{
    char name[20];
    long acNo;
    float balance;
    char acType[20];

    public:
    void init(Account holders[], int size){
        for(int i=0;i<size;i++){
            cout<<"Enter the Name of Account holder:";
            cout<<"\t";
            cin>>holders[i].name;
            cout<<"Enter the Account Number:";
            cout<<"\t";
            cin>>holders[i].acNo;
            cout<<"Enter the Account Type:";
            cout<<"\t";
            cin>>holders[i].acType;
            cout<<"Enter the Opening Balance:";
            cout<<"\t";
            cin>>holders[i].balance;
        }
    }
    void deposit(Account holders[], int size){
        float amount;
        long ac;
        cout<<"\n Enter the Account Number you want to deposit:";
        cin>>ac;
        for(int i=0;i<size;i++){
            if(holders[i].acNo==ac){
                cout<<"\n Enter the amount to deposit";
                cin>>amount;
                holders[i].balance+=amount;
                cout<<"\n New Balance: "<<holders[i].balance;
                return;
            }
        }
        cout<<"\n Account not found";
    }
    void withdraw(Account holders[], int size){
        float amount;
        long ac;
        cout<<"\n Enter the Account Number you want to withdraw:";
        cin>>ac;
        for(int i=0;i<size;i++){
            if(holders[i].acNo==ac){
                cout<<"\n Enter the amount to Withdraw";
                cin>>amount;
                holders[i].balance-=amount;
                cout<<"\n New Balance: "<<holders[i].balance;
                return;
            }
        }
        cout<<"\n Account not found";
    }
    void display(Account holders[], int size){
        long ac;
        cout<<"Enter the Account number you want to display";
        cin>>ac;
        for(int i=0;i<size;i++){
            if(holders[i].acNo==ac){
            cout<<"\n The Name of Account holder:"<<holders[i].name;
            cout<<"\n Account Number:"<<holders[i].acNo;
            cout<<"\n Account type:"<<holders[i].acType;
            cout<<"\n Balance remaining in the account:"<<holders[i].balance;
            return;

            }
        }
        cout<<"\n Account not found";
    }

};

int main(){

    int size, i;
    cout<<"Enter the Number of Account data you want to create:";
    cin>>size;
    Account holders[size];
    cout<<"\n";
    holders[0].init(holders, size);
    cout<<"\n";
    holders[0].deposit(holders, size);
    cout<<"\n";
    holders[0].withdraw(holders, size);
    cout<<"\n";
    holders[0].display(holders, size);
    cout<<"\n";
    return 0;
}
