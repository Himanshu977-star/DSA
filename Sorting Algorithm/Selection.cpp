#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int SmallestInd=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[SmallestInd]) {
                SmallestInd=j;
            }
        }
        swap(arr[i],arr[SmallestInd]);
    }
}

int main() {
    int n=5;
    int arr[]={4,1,2,3,5};
    
    SelectionSort(arr,n);
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}