#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    
    for(int i=0;i<n-1;i++){
        bool shuffle=false;
        for(int j=0;j<n-1-i;j++) {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                bool shuffle=true;
            }
        }
        if(shuffle==false){
            break;
        }
    }
}

int main() {
    int n=5;
    int arr[]={4,1,2,3,5};
    
    BubbleSort(arr,n);
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}