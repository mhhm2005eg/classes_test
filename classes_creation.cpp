#include <iostream>
using namespace std;


class MyClass{
	
	public:
	static unsigned int Counter;
	unsigned int member;

	MyClass(){
		Counter++;
		cout << "I am the constructor: "<<Counter<< " member: "<<member<<endl;

	}
	MyClass(unsigned int member):member(member){
		Counter++;
		cout << "I am the constructor: "<<Counter<< " member: "<<member<<endl;

	}
	~MyClass(){
		cout << "I am the destructor: "<<Counter<<" member: "<<member<<endl;
		Counter--;


	}
    
    void operator () (void)  { 
		cout << "I am the functor: "<<Counter<< " member: "<<member<<endl;
    } 
    

};
unsigned int MyClass::Counter = 0;


int main() 
{
	MyClass MyClass_0 = MyClass();
	MyClass MyClass_1(50);
	MyClass MyClass_2;
    MyClass(100)();
    MyClass_2();
	//MyClass MyClass_3 = MyClass();
	//MyClass MyClass_4 = MyClass();
	//MyClass MyClass_5;
	//MyClass MyClass_6;


    cout << "Hello, World!"<<endl;
    return 0;
}