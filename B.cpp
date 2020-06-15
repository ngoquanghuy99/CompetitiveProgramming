#include<iostream>
#include<stack>
using namespace std;
int main(){
	int time;
	cin >> time;
	while(time--){
		int n;
		cin >> n;
		cin.ignore();
		string a;
		int rs = 1;
		
			stack <char> s;
		while(n-- && rs){
			getline(cin, a);
			for(int i = 0; i < a.length(); i++){
				if(a[i] == '(' || a[i] == '[' || a[i] == '{') s.push(a[i]);
				else if(a[i] == ')' || a[i] == ']' || a[i] == '}'){
					if(!s.empty()){
						char temp = s.top();
						if(a[i] == ')' && temp == '(') s.pop();
						else if(a[i] == ']' && temp == '[') s.pop();
						else if(a[i] == '}' && temp == '{') s.pop();
						else{
							rs = 0;
							break;
						}
					}else{
						rs = 0;
						break;
					}
				}
			}
		}
		if(!s.empty()) rs = 0;
		
		if(rs) cout<<"No"<<endl;
		else cout<<"Yes"<<endl;
	}
}
