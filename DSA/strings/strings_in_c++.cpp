#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// the c style string
	char str1[] = "string 1"; // this type of string always ends in a \0 or in other words a NULL charachter

	//funcions for c style strings are
	//strlen(str) find the length of the array
	//strcmp(s1, s2) compares two string lexixographicly and if s1 > s2 it returs positive integer, if they are the same it returns 0 and if s1 is smaller returns a negative value
	//strcpy(s1, s2) copy the value of s2 into the string s1
	
	

	//**********************************************************************************************************************************************************************************
	
	
	// the c++ string
	//richer library, supports operators like +, < , > ==, <=, >= are posssible
	//can assign an string later
	//do not have to worry about size
	//can be converted to c-style if needed
	string str = "geeksforgeeks";

	//functions for c++ strings
	//str.length() returns the length of the string
	//opperator + concatenated the two strings together
	//str.substr(begin_index, len) returns a substring of string str from index begin_index up to a length of len
	//str.find(sub_str) searches the array for the sub string sub_str in the string str, if it was found returns index of first occurence, if it is not found it return **string::npos**
	//to read string you can use >>
	//to read a series of word you can use getline(cin, str), this function reads the string from the buffer 
	//you can also use getline as getline(cin, str, char_to_stop) the third parameter is optional but this indicateds the value, which if reaced will stop reaading from the buffer
	//you can use the [] operator to accessed specific char indexes of a string
	


	return 0;
}
