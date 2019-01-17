/* Tutorial 1: Employee Problem
g++ -std=c++11 -02 -Wall file.cpp -o file
*/
#include<iostream>
#include<string.h>
using namespace std;
struct Emp{                     //intializing structure
    char empid[10];
    char name[20];
    int age;
    float salary;
    char address[50];
};                              // end of structure

void Enter(Emp[],int);          // function prototype for Entering data
void Display(Emp[],int);       // function prototype for displaying data
void Search(Emp[],int);         // function prototype for searching data


int main(){
    int size;
    cout<<"\n Enter the number of Employees:";
    cin>>size;
    Emp *e=new Emp[size];       // Space allocation
    Enter(e, size);
    Display(e, size);
    Search(e, size);
    return 1;
    
}

void Enter (Emp a[], int s){
    for (int i=0; i<s; i++){
        cout<<"\n Enter the Id:";
        cin>> a[i].empid;
        cout<<"\n Enter the Name:";
        cin>> a[i].name;
        cout<<"\n Enter the Age:";
        cin>>a[i].age;
        cout<<"\n Enter the Salary:";
        cin>>a[i].salary;
        cin.get();
        cout<<"\n Enter the Address:";
        cin.get(a[i].address, 50);      // Method to get inputs with tab or space
        cin.get();
    }
}

void Display (Emp a[], int s){
    for (int i=0; i<s; i++){
        cout<<"\n Employee Id:"<<a[i].empid;
        cout<<"\n Enter the Name:"<<a[i].name;
        cout<<"\n Enter the Age:"<<a[i].age;
        cout<<"\n Enter the Salary"<<a[i].salary;
        cout<<"\n Enter the Address"<<a[i].address;
    }
}
void Search (Emp a[], int s){
    char id[10];
    cout<<"/n Enter the Id to be searched";
    cin>>id;
    for (int i=0; i<s; i++){
        if (strcmp(a[i].empid, id)==0){
            cout<<"\n Employee Id:"<<a[i].empid;
            cout<<"\n Name:"<<a[i].name;
            cout<<"\n Age:"<<a[i].age;
            cout<<"\n Salary"<<a[i].salary;
            cout<<"\n Address"<<a[i].address;
        }
        break;
    }
}