#include <iostream>
#include<time.h>

using namespace std;

/*struct somestr
{
	int num;
	char* name;
}s2;

struct somestr
{
	int num;
	char* name;
}*s;*/

int main()
{

	/*somestr * start_rec;
	s1.num = 1;
	s1.num = 2;
	s = new somestr[20];
	start_rec = 0;
	s->name = new char[50];
	s->num = 2;
	//strcpy_s(s1.name, 50, "Ivan");
	strcpy_s(s->name, 50, "Platon");
	//cout << "num =" << s1.num << "name" << s1.name;
	cout << "num =" << s->num<< "  " << "name" << s->name;
	(++s)->num = 3;
	strcpy_s(s->name, 50, "Gerasim");
	
	s = start_rec;
	*((*s).name)++;
	cout << endl << *s++->name;*/


	union
	{
		short int component1;
		int component2;
		long int component3;
	} myUnion; // объект объединения

	myUnion.component1 = 22;
	cout << myUnion.component1 << endl;
	myUnion.component3 = 222222222;
	cout << myUnion.component3 << endl;
	cout << myUnion.component1 << endl; // снова 
	// обращаемся к component1


	struct fieldbite
	{
		unsigned short field1 : 2;
		unsigned short field2 : 2;
		unsigned short field3 : 4;
	} field;
	

}