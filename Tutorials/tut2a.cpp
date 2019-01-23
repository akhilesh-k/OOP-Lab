#include<iostream>
#include<string.h>
using namespace std;
struct Date{
    int day;
    int month;
    int year;
};
class Employee{
    private:
    char empid[10];
    int rank;
    float salary;
    Date dob;

    public:
    Employee(){
        strcpy(empid, " ");
        rank=0;
        salary=0.0;
        dob.day=0;
        dob.month=0;
        dob.year=0;
    }
    void display(){
        cout<<"\n Emp id:= "<<empid;
        cout<<"\n Rank= "<<rank;
        cout<<"\n Salary:= "<<salary;
        cout<<"\n Date of Birth:= ";
        cout<<dob.day<<"-"<<dob.month<<"-"<<dob.year<<endl;
    }
    void enter(){
        cout<<"\n Enter the New Employee Id:";
        cin>>empid;
        cout<<"\n Enter the Rank of Employee";
        cin>>rank;
        cout<<"\n Enter the Salary of Employee";
        cin>>salary;
        cout<<"\n Enter the Date of Birth";
        cout<<"\n Enter the Date";
        cin>>dob.day;
        cout<<"\n Enter the Month";
        cin>>dob.month;
        cout<<"\n Enter the Year";
        cin>>dob.year;
    }
    void increment(Employee e[], int n){
        char id[10];
        cout<<"Enter the Employee Id to intcrement salary";
        cin>>id;
        for(int i=0;i<n;i++){
            if(strcmp(id,e[i].em2pid)==0){
                e[i].rank+=1;
                e[i].salary+=e[i].salary*0.25;
                break;
            }
        }

    }
};
int main(void){
    int n;
    cout<<"Enter the number of Employees"<<endl;
    cin>>n;
    Employee e[n];
    for (int i=0;i<n;i++){
        e[i].enter();
        for(int i=0; i<n;i++){
            e[i].display();
        }
    }
    Employee temp;
    temp.increment(e, n);
    for(int i=0;i<n;i++){
        e[i].display();
    }
    return(0);
}