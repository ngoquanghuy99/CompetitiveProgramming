#include<iostream>
#include<stack>
using namespace std;

int dem = 0, n, OK = 0,  check = 1;
string a;
stack <char> s;

void xem(){
	for(int i = 0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void khoitao(){
	for(int i = 0;i<n;i++){
		a[i] = '0';
	}
}
void sinh(){
	khoitao();
	while(!OK){
		int i = n-1;
		while(a[i] == '1') i--;
		if(i == 0) OK = 1;
		else{
			a[i] = '1';
//			if(!s.empty()) s.pop();
			for(int j = i+1;j<n;j++){
				a[j] = '0';
//				s.push(j);
			}
		}
		xem();
		for(int i = 0;i<n;i++){
			if(a[i] == '0') s.push(a[i]);
				else{
					if(!s.empty()){
						s.pop();
					}else{
						check = 0;
						break;
					}
				}
		}
		if(s.empty() && check == 1){
			dem++;
			xem();
		}
	}
}
main(){
	cin>>n;
	sinh();
}
