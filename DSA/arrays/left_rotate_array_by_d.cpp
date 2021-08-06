#include<bits/stdc++.h>

using namespace std;

void reverse(vector<int> &vec, int low, int high){
	while(low < high){
		swap(vec.at(low), vec.at(high));
		low++;
		high--;
	}
}

void left_rotate_by_d(vector<int> &vec, int d){
		
	reverse(vec, 0, d-1);
	reverse(vec, d, vec.size()-1);
	reverse(vec, 0, vec.size()-1);

}


int main(){
    	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	int d; cin >> d;
	cout << '\n';

	vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9};
	left_rotate_by_d(vec, d);
    
	for(int num : vec){
		cout << num << " ";
	}
	cout << '\n';

    	return 0;
}
