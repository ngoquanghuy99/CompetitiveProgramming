#include<iostream>
#include<stack>
using namespace std;
int dem = 0, n, check = 1;
string a;
void xem(){
	for(int i = 0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void Try(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j + '0';
		if(a[0] == '1') break;
		if(i == n - 1){
			check = 1;
			stack <char> s;
			for(int z = 0; z < n; z++){
//				cout<<a[z]<<" ";
				if(a[z] == '0') s.push(a[z]);
				else{
					if(!s.empty()){
						s.pop();
					}else{
						check = 0;
						break;
					}
				}
			}
			if(check && s.empty()){
				dem++;
//				xem();
			}
		}else Try(i + 1);
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie();
	int t;
	cin>>t;
	while(t--){
		dem = 0;
		cin>>n;
		if(n%2 == 0) 
		Try(0);
		cout<<dem<<endl;
	}
}

