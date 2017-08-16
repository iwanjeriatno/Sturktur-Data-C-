#include "iostream"

using namespace std;

int main() {
	int k,b,x[4][3];
	
	for(b=0; b<=10; b++)
		for(k=0; k<=10; k++)
			x[b][k] = x[b][k] + x[b][k];
			
	for(b=0; b<=10; b++) {
		for(k=0; k<=10; k++)
			cout<<x[b][k]<<"|";
		cout<<endl;
	}
	
			
}
