#include<iostream>
using namespace std;
int n, x[100];
void init(){
	cout<<"Nhap n: ";
	cin>>n;
	for(int i=1; i<=n; i++)
		x[i] = 0;
}
void Final(){
	for(int i=1; i<=n; i++)
		x[i] = 1;
}
bool isFinal(){
	if(x[0] == 1) return true;
	return false;
}
void printOut(){
	for(int i=1; i<=n; i++)
		cout<<x[i];
	cout<<endl;
}
void nextGen(){
	int i = n;
	while(i>0 && x[i]==1){
		x[i] = 0;
		i--;
	}
	x[i] = 1;
}
int main(){
	init();
	while(!isFinal()){
		printOut();
		nextGen();
	}
	Final();
	printOut();
	return 0;
}
