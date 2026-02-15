/*
Problem 3: Minimum and Maximum in Array
Write a function:
void findMinMax(int arr[], int size, int &minVal, int &maxVal);
Input Format:
First line: Integer N
Second line: N space-separated integers
Output Format:
Print minimum and maximum value.
Constraints:
1 ≤ N ≤ 10⁵
*/
#include<iostream>
using namespace std ;
void findMinMax(int arr[], int size, int &minVal, int &maxVal) {
        minVal = arr[0];   
    maxVal = arr[0];
    for(int i=0;i<size;i++) {
if (arr[i]>maxVal) {
    maxVal=arr[i];
}
if(arr[i]<minVal){
    minVal=arr[i];
}
    }
}
int main () {
    int n ;
    cout<<"enter n ";
    cin>>n ;
    int arr[n];
    cout<<"enter elements ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 int minVal, maxVal;
    findMinMax(arr, n, minVal, maxVal);
    cout << "Min value: " << minVal << endl;
    cout << "Max value: " << maxVal << endl;
}