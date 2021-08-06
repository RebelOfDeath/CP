#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unordered_set<int> s;
	s.insert(10);
	s.insert(5);
	s.insert(15);
	s.insert(20);
	for(int x : s){
		cout << x << " ";
	}
	cout << '\n';

	//some functions on the unordered_set are
	//insert() insert a certain element in the unordered set
	//begin() returns an intterator to the begining of the set
	//end() returns an itterator to the end of the set
	//size() tells you the size of the set
	//clear() clears the unordered set
	//find() searches the unordered set to find the element if it is present it will
		//return an itterator to the element, if it is not present it will return an
		//itterator the the end of the array
	//count() it searches the array for a certain element if it is present it returns 1 else it returns 0]
	//erase() it removes an item, or a range of items from the unordered set

	return 0;
}
