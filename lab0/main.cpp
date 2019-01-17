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
void Update(Emp[],int);

int main(){
    int size;
    cout<<"\n Enter the number of Employees:";
    cin>>size;
    Emp *e=new Emp[size];       // Space allocation
    Enter(e, size);
    Display(e, size);
    Search(e, size);
    Update(e, size);
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
        cout<<"\n Employee Name:"<<a[i].name;
        cout<<"\n Employee Age:"<<a[i].age;
        cout<<"\n Employee Salary"<<a[i].salary;
        cout<<"\n Employee Address"<<a[i].address<<endl;
    }
}
void Search (Emp a[], int s){
    char id[10];
    cout<<"/n Enter the Id to be searched";
    cin>>id;
    for (int i=0; i<s; i++){
        if (strcmp(a[i].empid, id)==0){
            cout<<"\n Employee Id:"<<a[i].empid<<endl;
            cout<<"\n Name:"<<a[i].name;
            cout<<"\n Age:"<<a[i].age;
            cout<<"\n Salary:"<<a[i].salary;
            cout<<"\n Address:"<<a[i].address;

        }
    }
}
void Update(Emp a[], int s){
    for (int i=0;i<s;i++){
        char id[10];
        cout<<"\n Enter the Id to update the Salary";
        cin>>id;
        for(int i=0;i<s;i++){
            if (strcmp(a[i].empid, id)==0){
            cout<<"\n Enter the new salary:";
            cin>>a[i].salary;
            cout<<"\n Name:"<<a[i].name;
            cout<<"\n Age:"<<a[i].age;
            cout<<"\n Updated Salary:"<<a[i].salary<<endl;
            cout<<"\n Address:"<<a[i].address;

        }

    }
}    }
