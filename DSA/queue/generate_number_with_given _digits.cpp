//the questino states : given a number, n print first n numbres (in increasing order) such that all the numbers have digits in the given set

/*
	example:

		i/p : n = 10 	set = {5, 6};
		O/p : 5, 6, 55, 56, 65, 66, 555, 556, 565, 566


	note: 
		n can be a very large number and the result values migth not fit in basic data types like long int or long long int
*/

#include<bits/stdc++.h>

using namespace std;

void print_first_n(int n){
	queue<string> q;
	
	q.push("5");
	q.push("6");


	for(int count{0}; count < n; count++){
		string curr = q.front();
		cout << curr << " "	;
		q.pop();
		q.push(curr+"5");
		q.push(curr+"6");
	}
	cout << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	print_first_n(10);
	

	return 0;
}