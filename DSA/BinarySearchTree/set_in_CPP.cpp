#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//sets in c++ are used to store sorted data

	//you can create a set using this syntax
	set<int> s;

	/*
		the functions availble for sets are:

			insert()
			begin()
			end()
			rbegin()
			rend()
			erase()
			clear()
			find()
			size()
			lower_bound()
			upper_bound()
	*/


	s.insert(10);
	s.insert(5);
	s.insert(20);

	for(int x : s){
		cout << x << " ";
	}

	cout << '\n';


	// you can also store the data in a  reverse fashion by using the greater function as 
	//		set<int, greater<int>> s;

	for(auto it = s.begin(); it != s.end(); it++){
		cout << (*it) << " ";
	}
	cout << '\n';


	//to reverse iterate the set you can use
	for(auto it = s.rbegin(); it != s.rend();  it++){
		cout << (*it) << " ";
	}
	cout << '\n';


	//duplicates can not be inserted into a set
	s.insert(10);
	s.insert(5);


	//the find() function returns an iterator to the element if present, if not present it will return s.end()
	auto it = s.find(10);
	if(it == s.end()){
		cout << "Not Found\n";
	}else{
		cout << "Found\n";
	}


	//the function clear() erases all elements from the set
	s.clear();
	cout << s.size() << '\n';



	s.insert(10);
	s.insert(5);
	s.insert(20);


	//the count function will check wether an  element is present in the set
	cout << s.count(5) << '\n';


	//the erase() function can be used to erase a specific element with given iterator to it, or a range
	for(auto x : s){cout << x << " ";} cout << '\n';
	s.erase(s.find(5));
	for(auto x : s){cout << x << " ";} cout << '\n';



	//the lower_bound() function returns an iterator to the element if it is present, it will return s.end() if the element is greater than the greatest element
	//else it will return the nearest greater element

	cout << (*s.lower_bound(6)) << '\n';


	//the upper_bound() function in concept is same to the lower_bound() function, the only thing that is present is if it is present in the set it will print
	//the next element

	cout << (*s.upper_bound(5)) << '\n';




	return 0;
}