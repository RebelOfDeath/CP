#include<bits/stdc++.h>

using namespace std;

struct Person
{
	int age;
	float ht;
	Person(int a, float h){
		age = a;
		ht = h;
	}
};

struct myCmp{
	//this will help create a pq with decreasing values.
	bool operator() (Person const &p1, Person const &p2){
		p1.h1 < p2.ht;
	}
};

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	priority_queue<Person, vector<Person>, myCmp> pq;	

	return 0;
}