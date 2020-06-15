#include<iostream>
#include<stack>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int  time;
	cin >> time;
	while(time--){
		int n;
		cin >> n;
		int a[10005];
		for(int  i = 0; i < n ; i++) cin >> a[i]; 
		
		
		stack <int> s;
		s.push(a[n - 1]);
		for(int i = n - 2; i >=0 ; i--){
			if(a[i] > s.top()) s.push(a[i]);
		}		
		while(!s.empty()){
			cout<<s.top()<<" ";
			s.pop();
		}
		cout<<endl;
	}	
}
