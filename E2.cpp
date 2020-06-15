#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
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
		for(int i = k - 1; i >= 1; i--){
			for(int j = i - 1; j >= 0; j--){
				if(m[a[i]] == m[a[j]] && a[i] < a[j]){
					swap(a[i],a[j]);
				}
				else if(m[a[i]] > m[a[j]]){
					swap(a[i], a[j]);
				}
			}
		}
//		for(int i = 0; i < m.size(); i++) cout<<m[i].first<<" ";
		for(int i = 0;i<k;i++){
			for(int j = 0; j < m[a[i]]; j++)cout<<a[i]<<" ";
			
		} cout<<endl;
//		sort(m.begin(), m.end())
	}
}
