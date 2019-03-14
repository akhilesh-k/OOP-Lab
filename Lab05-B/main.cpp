#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string.h>
using namespace std;
class Directory{
private:
    char name[50], num[10];
public:
    void setValues(){
        ofstream file;
        file.open("phone.txt", ios::app);
        cout << "Enter Name: " << endl;
        cin >> name;
        cout << "Enter Number: " << endl;
        cin >> num;
        file << name << ' ' << num << endl;
        cout << "Contact Added!";
    }
    void getValues(){
        char ar[60];
        fstream file("phone.txt");
        cout << file.tellp() << endl;
        while(file) {
            file.getline(ar, 60);
            cout << ar << " " << strlen(ar) << endl;
            cout << file.tellp() << " " << file.tellg() << endl;
        }
    }
    void findByName() {
        char name[50], ar[60];
        cout << "Enter name: ";
        cin >> name;
        ifstream file("Directory.txt");
        while(file) {
            file.getline(ar, 60);
            bool flag = 1;
            for(int i = 0; i < strlen(name); i++)
                if(name[i] != ar[i])
                    flag = 0;
            if(flag) {
                cout << ar << endl;
                return;
            }
        }
        cout << name << " was not found!!!" << endl;
    }
    void findByNumber() {
        char number[10], ar[60];
        cout << "Enter number: ";
        cin >> number;
        ifstream file("Directory.txt");
        while(file) {
            file.getline(ar, 60);
            bool flag = 1;
            int i = 0, j = 0;
            for(; i < strlen(ar); i++)
                if(ar[i] == ' ') {
                    i++;
                    break;
                }
            for(j = 0; i < strlen(ar); i++, j++) {
                if(ar[i] != number[j])
                    flag = 0;
            }
            if(flag) {
                cout << ar[i] << endl;
                return;
            }
        }
        cout << number << " was not found!!!" << endl;
    }
    void update() {
        char name[50], ar[60];
        cout << "Enter Name of contact to update: ";
        cin >> name;
        fstream file("Directory.txt");
        int loc = 0;
        while(file) {
            file.getline(ar, 60);
            loc += strlen(ar) + 1;
            bool flag = 1;
            for(int i = 0; i < strlen(name); i++)
                if(name[i] != ar[i])
                    flag = 0;
            if(flag) {
                cout << "Enter number: ";
                cin >> num;
                cout << "before: " << file.tellp() << endl;
                file.seekp(loc - strlen(ar) - 1);
                cout << "after: " << file.tellp() << endl;
                file << endl << name << " " << num << endl;
                return;
            }
        }
        cout << name << " was not found!!!" << endl;
    }
};
int main() {
    Directory dir;
    int ch;
    while(1) {
        cout << "----- WELCOME TO DIRECTORY -----" << endl << "\t\t by Akhilesh" << endl;
        cout << "Select Option: " << endl << "1. Enter Contact" << endl << "2. Display Contacts" << endl << "3. Find By Name" << endl << "4. Find By Number" << endl << "5. Update" << endl << "6. Exit" << endl;
        cin >> ch;
        switch(ch) {
            case 1: dir.setValues();
                    break;
            case 2: dir.getValues();
                    break;
            case 3: dir.findByName();
                    break;
            case 4: dir.findByNumber();
                    break;
            case 5: dir.update();
                    break;
            case 6: exit(0);
            default: cout << "ERROR: Incorrect Choice!!!" << endl;
        }
    }
    return 0;
}
