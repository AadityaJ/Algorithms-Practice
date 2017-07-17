#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;
class A{
public:
	A(){
		cout<<"A created"<<endl;
	}
	~A(){
		cout<<"A dead"<<endl;
	}
};
class B: public A{
public:
	B(){
		cout<<"B created"<<endl;
	}
	~B(){
		cout<<"B dead"<<endl;
	}
};
int main(int argc, char const *argv[]){
	B *b=new B();
	delete b;
	return 0;
}
