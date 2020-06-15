#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
bool sort_by_second(const pair <int, int> &a, const pair <int, int> &b){
	return a.second < b.second;
}

//void sodr
int main(){
	
	int time;
	cin >> time;
	while(time--){
		map <int, int> m;
		int n;
		cin >> n;
		int a[200];
		int k = 0;
		for(int i = 0; i <  n ; i++){
			int temp;
			cin>>temp;
			m[temp]++;
			if(m[temp] <= 1) a[k++] = temp;
//			cin >> a[i];
		}
		sort(a,a+k);
		
//		for(int i = 0; i < m.size(); i++) cout<<m[i].first<<" ";
		for(int i = 0;i<k;i++) cout<<a[i]<<" "<<m[a[i]]<<endl;
//		sort(m.begin(), m.end())
	}
}
