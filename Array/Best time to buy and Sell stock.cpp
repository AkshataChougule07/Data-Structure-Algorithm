/*
//optimal solution//

Intuition: We will linearly travel the array. We can maintain a minimum from the starting of the array and compare it with 
every element of the array, if it is greater than the minimum then take the difference and maintain it in max,
 otherwise update the minimum.

Approach:

Create a variable maxPro and store 0 initially.
Create a variable minPrice and store some larger value(ex: MAX_VALUE) value initially.
Run a for loop from 0 to n.
Update the minPrice if it is greater than the current element of the array
Take the difference of the minPrice with the current element of the array and compare and maintain it in maxPro.
Return the maxPro.

*/
#include<iostream>
using namespace std;
int main(){
	int n,min_stock,max_profit;
	cout<<"Size of array:";
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	min_stock=199;  
	max_profit=0;
	int max=0;
	for(int i=0;i<n;i++){
		if(a[i]>min_stock){      //comparing stock prices
			max=abs(a[i]-min_stock);   // calculate the max profit
		}
		else{
			min_stock=a[i];   //updating min with current stock
		}
		
		if(max>max_profit){  //checking profit profit with existing max profit
			max_profit=max;
		}
	}
	cout<<max_profit;
	return 0;
}
