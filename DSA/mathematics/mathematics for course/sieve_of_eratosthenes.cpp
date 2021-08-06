#include<bits/stdc++.h>

using namespace std;

//this function uses the algorithm of the sieve of eratosthenes to print all the prime numbers up to n

void sieve(int n)
{
	if(n <= 1)
		return;

	bool isPrime[n+1];

	fill(isPrime, isPrime + n + 1, true);

	for(int i=2; i*i <= n; i++)
	{
		if(isPrime[i])
		{
			for(int j = 2*i; j <= n; j = j+i)
			{
				isPrime[j] = false;
			}
		}
	}

	for(int i = 2; i<=n; i++)
	{
		if(isPrime[i])
			cout<<i<<" ";
	}
}

int main(){
	sieve(100);
	return 0;
}
