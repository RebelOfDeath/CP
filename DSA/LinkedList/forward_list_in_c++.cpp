#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//the way to create this singly linked list in c++ is
	forward_list<int> list1 = {5, 4, 6, 2};
	forward_list<int> list2 = {7, 6, 1, 9};


	//the funcions that are available for use on forward lists are
	/*
			#access elements

				you can use the .front() function which gives you a reference to the head


			#iterators

				before_begin() returns an iterator to the element before beginning

				begin() returns an iteratior to the beginning

				end() returns an iterator to the end

			#capacity

				empty() checks whether the container is empty

				max_size() returns the maximum possible number of elements

			#modifiers

				clear() clears the contents

				insert_after(iterator, value) inserts the value after the iterator's position

				erase_after(iterator) erases the value after the iterator

				reverse() reverses the linked list

				sort() sorts the linked list

				merge() merges two different lists **only if both lists are sorted**


		there area bunch more but these are the main ones




	*/

	return 0;
}