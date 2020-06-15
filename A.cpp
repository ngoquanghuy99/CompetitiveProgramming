#include<iostream>
#include<math.h>
using namespace std;

long long pow1(long long a, long x){
	if(x == 0) return 1;
	if(x == 1) return 10;
	long long temp = pow1(a,x/2);
	if( x& 1) return (temp*temp)*10;
	return temp*temp;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int time;
	cin >> time;
	while(time--){
		long long k;
		cin >> k;
		int sum = 0;
		int dem = 0;
		int i = 1;
		int j = 1;
		while(sum < k){
			if(j >= pow1(10,i)) i++;
			sum += i*j;
			dem++;
//			cout<<sum<<" "<<dem<<endl;
			j++; 
		}
		cout<<dem<<endl;
	}
}
