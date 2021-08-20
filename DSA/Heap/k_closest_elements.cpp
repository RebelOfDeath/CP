#include<bits/stdc++.h>

using namespace std;

void k_closest(vector<int> arr, int x, int k){
	int n = arr.size();	
	priority_queue<pair<int, int> > pq; 
	for (int i = 0; i < k; i++) 
        pq.push({ abs(arr[i] - x), i }); 
  
    for (int i = k; i < n; i++) { 
        int diff = abs(arr[i] - x); 
        if ( pq.top().first>diff ){
        pq.pop(); 
        pq.push({ diff, i }); 
        }
    } 
   
    while (pq.empty() == false) { 
        cout << arr[pq.top().second] << " "; 
        pq.pop(); 
    } 
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {30, 40, 32, 33, 36, 37};

	k_closest(arr, 38, 3);	

	return 0;

}