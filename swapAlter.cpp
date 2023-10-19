#include<iostream>
using namespace std;
void printArray(int arr[], int n);
void swap(int &a, int &b);

int main(){
    int arr[]={12,34,22,45,21,78};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0; i<n; i = i+2){
        if(i+1 < n){
            swap(arr[i],arr[i+1]);
        }
    }
    printArray(arr, n);
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
