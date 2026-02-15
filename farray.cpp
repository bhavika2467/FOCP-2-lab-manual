/*
Array Utility Functions
Implement the following functions:
int sumArray(int arr[], int size);
double average(int arr[], int size);
bool contains(int arr[], int size, int key);
Input Format:
N
N space-separated integers
Key
Output Format:
Print sum
Print average
Print YES or NO for key presence
*/
#include<iostream>
using namespace std;
int sumArray(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
   }
    return sum;
}
double average(int arr[], int size){
    int sum = sumArray(arr, size);   
        return (double)sum / size;   }  
bool contains(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return true;}   }
    return false;
}
int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << sumArray(arr, N) << endl;
    cout << average(arr, N) << endl;
    if(contains(arr, N, key))
        cout << "YES";
    else
        cout << "NO";
}
