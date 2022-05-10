#include <iostream>
using namespace std;

typedef struct _card
{
	string name;
	int age;
	char code;
	float key;
}card;
int main()
{
	card c;
	cin >> c.name >> c.age >> c.code >> c.key;
	cout << c.name << endl;
	cout << c.age << endl;
	cout << c.code << endl;
	cout << c.key << endl;
	return 0;
}