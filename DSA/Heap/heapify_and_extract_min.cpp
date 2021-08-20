#include<bits/stdc++.h>

using namespace std;

class MinHeap{
	int [] arr;
	int size;
	nit capacity;
	MinHeap(int c){
		arr = new int[c];
		size = 0;
		capacity = c;
	}
	int left(int i){
		return (2*i) + 1;
	}
	int right(int i){
		return (2*i) + 2;
	}
	int parent(int i){
		return floor((i-1)/2);
	}
	void insert(int x){
		if(size == capacity){
			return;
		}
		size++; arr[size-1] = x;
		for(int  i = size - 1; i != 0 && arr[parent(i)] > arr[i];){
			swap(arr[i], arr[parent(i)]);
			i = parent(i);
		}

	}
	int get_min(){
		return arr[0];
	}

	//the reason to have a heapify funciton is to be able to solve the following  question prompt
		//given a binary heap with one possible violation, fix the heap
	//the time complexity of this function is O(h) where h is the height of the binary heap 
	void min_heapify(int i){
		int lt = left(i);
		int rt = right(i);
		int smallest = i;
		if(lt < size & arr[lt] < arr[i]){
			smallest = lt;
		}
		if(rt  < size && arr[rt] < arr[smallest]){
			smallest = rt;
		}
		if(smallest != i){
			swap(arr[i], arr[smallest]);
			min_heapify(smallest);
		}
	}


	int extract_min(){
		if(size == 0){
			return INT_MAX;
		}
		if(size == 1){
			size--;
			return arr[0];
		}
		swap(arr[0], arr[size-1]);
		size--;
		min_heapify(0);
		return arr[size];
	}


}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

		

	return 0;
}