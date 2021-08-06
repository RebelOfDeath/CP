//this data structure is used to store key, value pairs
//it uses hashing
//it has no order of keys
#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unordered_map<string, int> m; // this has created a unordered map where the key is a string and the value is an integer
	m["Roham"] = 1234; // [] is usually a member access operator, in this DS if the key is present it will change the value, if not it will add the key and the value to the unordered set.
	m["CPP"] = 4321;
	m.insert({"mit",  60001});
	for(auto x : m){
		cout << x.first << " " << x.second << endl;
	}
	
	//some functions that are available for use on unordered maps are:
	//
	//find() this will search the map for the key value, if it is present it will return an itterator to it, if not it will return an itterator to map.end();
	//end() this will return an itterator to the end of the map, this is not a valid element, this is after the last element
	//begin() this will return an itterator the beginning of the map
	//.first and .second these will respectively return the key and the value, you have to use the arrow opperator because they are pointers and not the value itself so ->first and ->second
	//count() this is used to check wether a certain key is present in the map or not, if present it will return 1 if  not it will return 0
	//size() return  the number of key value pairs in the map
	//erase() used to remove key value pairs from the map, this funciton can also return a itterator to the element as well, you can also pass a range of iterators for example erase(m.begin(), m.end());
	

	//the same for loop as above can be written as:
	cout << '\n';
	for(auto it = m.begin(); it != m.end(); it++){
		cout << (it->first) << " " << (it->second) << '\n';
	}
	
	
	

	return 0;
}
