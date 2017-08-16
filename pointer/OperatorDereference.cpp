#include "iostream"

using namespace std;

int main() {
	int a, *b, c;
	
	a = 100;
	b = &a;
	c = *b;
	
	cout<<"Niali a = "<<a<<endl; //100
	cout<<"Nilai b = "<<b<<endl; //0xghkfdhghdfg
	cout<<"Nilai c = "<<c<<endl; //100
	
}



