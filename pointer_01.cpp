#include <iostream>
using namespace std;

int main(){
    int * p = NULL;
    cout<<"Address pointer hold by pointer"<<p<<"\n";
    
    int num = 90;
    p=&num;
    cout<<"Address pointer hold by pointer--->"<<p<<"\n";
	cout<<"Address pointer hold by pointer--->  data---->"<<*p<<"\n";
	cout<<"concept is called dereferencing";
	
	// * dereference opertor  / indirection
	//& address of
}
