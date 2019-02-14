#include <iostream>

using namespace std;

class Publication {
private:
	string title;
	float price;

public:
	void getData() {
		cout << "Enter Title: ";
		cin >> title;
		cout << "Enter Price: ";
		cin >> price;
	}

	void putData() {
		cout << "Title: " << title << endl;
		cout << "Price: " << price << endl;
	}
};

class Book : public Publication {
private:
	int pagecount;

public:
	void getData() {
		Publication :: getData();
		cout << "Enter Page Count: ";
		cin >> pagecount;
	}

	void putData() {
		Publication :: putData();
		cout << "PageCount: " << pagecount << endl;
	}
};

class Tape : public Publication {
private:
	float playTime;

public:
	void getData() {
		Publication :: getData();
		cout << "Enter Playing Time: ";
		cin >> playTime;
	}

	void putData() {
		Publication :: putData();
		cout << "Play Time: " << playTime << endl;
	}
};

int main() {
	Book b;
	Tape t;
	b.getData();
	b.putData();
	t.getData();
	t.putData();
}
