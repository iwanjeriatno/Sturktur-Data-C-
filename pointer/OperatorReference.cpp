#include "iostream"

using namespace std;

int main() {
	int a, b, *c;
	
	
	a = 100;
	b = a;
	c = &a;
	
	cout<<"Niali a = "<<a<<endl; // 100
	cout<<"Nilai b = "<<b<<endl; // 100
	cout<<"Nilai c = "<<c<<endl; // 0xhgkjdhgjksfh
	
}
