#include<bits/stdc++.h>

using namespace std;


bool is_balanced(string &str){
	stack<char> s;
	for(char c : str){
		if(c == '{' || c == '(' || c == '['){
			s.push(c);
		}else{
			if(s.empty()){
				return false;
			}else{
				if(c == '}' && s.top() == '{'){
					s.pop();
					continue;
				}else if(c == ']' && s.top() == '['){
					s.pop();
					continue;
				}else if(c == ')' && s.top() == '('){
					s.pop();
					continue;
				}
				return false;
			}
		}
	}
	if(s.empty())
		return true;
	return false;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string str = "{}([()])";
	cout << std::boolalpha << is_balanced(str) << '\n';

	return 0;
}