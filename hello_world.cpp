#include<iostream>
using namespace std;

int add(int &a, int &b){
	int sum = a+b;
	return sum;
}

int main(){
	cout<<"hello_world"<<endl;
	int a,b;
	a=0;b=0;
	cout << "Enter a number : ";
	cin >> a;
	cout << "Enter another number : ";
	cin >>b;
	int sum = add(a,b);
	cout<<sum<<endl;
}
