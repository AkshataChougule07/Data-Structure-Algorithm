#include<iostream>
using namespace std;

int mergeArrays(int arr1[],int arr2[],int n1,int n2,int arr3[]){
	int i=0,j=0,k=0;
	while(i<n1&&j<n2){
		if(arr1[i]<arr2[j]){
			arr3[k++]=arr1[i++];
		}
		else{
			arr3[k++]=arr2[j++];
		}
	}
	
	while(i<n1){
		arr3[k++]=arr1[i++];
	}
	
	while(j<n2){
		arr3[k++]=arr2[j++];
	}
	for(int l=0;l<(n1+n2);l++){
		
	}
}
int main(){
	int arr1[]={1,2,7,5};
	int arr2[]={6,4,3,8};
	int n1,n2;
	n1=sizeof(arr1)/sizeof(arr1[0]);
	n2=sizeof(arr2)/sizeof(arr2[0]);
	int arr3[n1+n2];
	mergeArrays(arr1,arr2,n1,n2,arr3);
}
