#include<bits/stdc++.h>

using namespace std;

void merge(int arr[], int l, int m, int h){
    
    int n1=m-l+1, n2=h-m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
        left[i]=arr[i+l];
    for(int j=0;j<n2;j++)
        right[j]=arr[m+1+j];    
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j])
            arr[k++]=left[i++];
        else
            arr[k++]=right[j++];
    }
    while(i<n1)
        arr[k++]=left[i++];
    while(j<n2)
        arr[k++]=right[j++];    
}

void mergeSort(int arr[],int l,int r){
    if(r>l){
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

int main() {
	
    int a[] {40, 42, 12, 35, 34, 23, 6, 39, 14, 16, 28, 29, 5, 30, 20, 4, 38, 13, 7, 25, 43, 46, 31, 36, 45, 10, 33, 47, 32, 9};
;
	int l=0,r=29;
	
	mergeSort(a,l,r);
	for(int x: a)
	    cout<<x<<" ";
	return 0;
}
