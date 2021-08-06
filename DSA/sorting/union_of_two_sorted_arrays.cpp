#include<bits/stdc++.h>

using namespace std;

void solve(int a1[], int a2[], int n, int m){
	int i{0}, j{0};
	while(i < n && j < m){
		if(a1[i] < a2[j]){
			cout << a1[i] << " ";
			i++;
		}else if(a2[j] < a1[i]){
			cout << a2[j] << " ";
			j++;
		}else if(a2[j] == a1[i]){
			int temp = a1[i];
			cout << temp << " ";
			while(a1[i] == temp && i < n){
				i++;
			}
			while(a2[j] == temp && j < m){
				j++;
			}
		}
	}
	if(i < n){
		for(i; i < n; i++){
			if(a1[i] != a2[m-1]){
				cout << a1[i] << " ";
			}
		}
	}
	if(j < m){
		for(j; j < m; j++){
			if(a2[j] != a1[n-1]){
				cout << a2[j] << " ";
			}
		}
	}
		
	cout << '\n';
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a1[] {3, 5, 8};
	int a2[] {2, 8, 9, 10, 15};

	solve(a1, a2, 3, 5);


	return 0;
}

