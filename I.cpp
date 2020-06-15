#include<iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <cstdlib>
#define FOR(i,a,b) for(int i = a; i <= b; i++)
#include<vector>
using namespace std;
int n;
bool check(int a){
	if(a == 1) return 1;
	int temp = 2;
	while(a%30 == 0) a/=30;
	while(a%6 == 0) a/=6;
	while(a%15 == 0) a/=15;
	while(a%10 == 0) a/=10;
	while(a%2 == 0){
		a /= 2;
	}
	while(a%3 == 0){
		a /= 3;
	}
	while(a%5 == 0){
		a /= 5;
	}
	if(a == 1) return 1;
	return 0;
	
}
void travel(int a[]){
//	if(a[1] % 2 ==0 || a[1] % 3 == 0 || a[1] % 5 ==0) b[1] = 1;
//	else b[1] = 0;
	int Max = 0, sum = 0;
	FOR(i,1,n){
		if(check(a[i])){
//			a[i].second = 1;
			sum++;
		} 
		else {
//			a[i].second = 0;
			if(sum > Max) Max = sum;
			sum = 0;
		}
	}
	
	if(sum) if(sum > Max) Max = sum;
	
//	for(int i = 1;i<=n;i++) cout<<a[i].second<<" ";
//	cout<<endl;
	
//	for(int i = 1;i<=n;i++){
//		if(a[i].second == 1) sum++;
//		else{
//			Max = max(Max, sum);
//			sum = 0;
//		}
//	}
//	if(sum) Max = max(sum, Max);
	cout<<Max<<endl;
}
int main(){
	int time;
	cin >> time;
	while(time--){
		int a[10005];
		cin >> n;
	//	memset(b, 0, sizeof(b));
		FOR(i,1,n){
			cin >> a[i];
		}
		travel(a);
	}
}
