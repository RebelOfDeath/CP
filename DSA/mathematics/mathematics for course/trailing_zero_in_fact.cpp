#include<bits/stdc++.h>

using namespace std;

//begining of first solution
//this solution has overflow problems

int fact(long n){
	int res{1};
	for(long int i{n}; i >= 0; i--){
		if(i>0)
			res *= i;
		else
			continue;
	}
	return res;
}


int traling_zero_in_fact(long n){
	int count{0};
	int fact_of_num = fact(n);
	while((fact_of_num % 10) == 0){
		count++;
		fact_of_num /= 10;
	}
	return count;
}

//end of first solution



//begining of efficient method
	//this method counts the number of fives in the prime factorization of the array and that is
	//the amount of traling zero's in the factorial of that number n
	//this is true because most of the times there are less 5's than 2's in the prime factorization of
	//the given factorial
	
int traling_zero_efficient(long n){
	int count {0};
	for(int i{5}; i <= n; i=i*5)
		count += (n/i);
	return count;
}


//end of efficient solution




int main(){
	printf("%d \n", traling_zero_in_fact(10));
	printf("%d \n", traling_zero_efficient(10));
	return 0;
}
