#include<bits/stdc++.h>

using namespace std;

void solve(int a1[], int a2[], int n, int m){
	int i{0}, j{0};
	while(i < n && j < m){
		if(a1[i] < a2[j]){
			i++;
		}else if(a2[j] < a1[i]){
			j++;
		}else if(a2[j] == a1[i]){
			int temp = a1[i];
			cout << a1[i] << " ";
			while(a1[i] == temp && i < n){
				i++;
			}
			while(a2[j] == temp && j < m){
				j++;
			}
		}
		}
	cout << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a1[] {3, 5, 10, 10, 10, 15, 15};
	int a2[] {5, 10, 10, 15, 30};

	solve(a1, a2, 7, 5);


	return 0;
}
