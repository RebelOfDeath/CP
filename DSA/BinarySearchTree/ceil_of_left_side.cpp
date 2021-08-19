//the prompt of the question is to find an element on the left side of the element that is greater of equal the element
#include<bits/stdc++.h>

using namespace std;

void ceil_left(vector<int> &arr){
	size_t mid = arr.size()/2;
	set<int> s;
	cout << "-1 ";
	s.insert(arr[0]);	
	for(size_t i{1}; i < arr.size(); i++){
		auto num = s.lower_bound(arr[i]);
		if(num == s.end()){
			cout << "-1 ";
		}else{
			cout << *num << " ";
		}
		s.insert(arr[i]);
	}
	cout << '\n';

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> arr {2, 8, 30, 15, 25, 12};

	ceil_left(arr);

	return 0;
}