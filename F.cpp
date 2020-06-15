#include<iostream>
#include<queue>
#include<string>
#include<sstream>
#include<cstdlib>
using namespace std; 

#define MAX_COUNT 1000000

vector<long long> vec; 

long long generateNumbersUtil(int  n) { 
	queue<long long> q; 
	q.push(6); 
	q.push(8);
	int dem = 0;
	for (int count = MAX_COUNT; count > 0; count--){ 
		long long s1 = q.front(); 
		dem++;
		q.pop(); 
		if(dem == n) return s1;
		vec.push_back(s1); 
		q.push(s1*10 + 6); 
		q.push(s1*10 + 8); 
	} 
} 

int main() { 
	ios_base::sync_with_stdio(false);
	 
	int t = 0, n;
	cin>>t;
	while(t--){
		cin>>n;
		cout << generateNumbersUtil(n)	 << endl;
	}
	return 0; 
} 

