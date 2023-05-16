#include <bits/stdc++.h>
using namespace std;
void swap(int *xp,int*yp){
    int temp;
    temp=*xp;
    *xp=*yp;
    *yp=*xp;
}
void printArray(int arr[],int n){
         cout<<"the sorted array is "<<endl;
    for(int i=0;i<n;i++){
  cout<<"array is"<<arr[i];
    }
}
void selectionsort(int arr[],int n){
    int i,j,temp,key;
    for(int i=0;i,n-1;i++){
        key=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[key]){
                key=j;

            }
            if(key !=i){
                swap(&arr[key],&arr[i]);
            }
        }
    }
}
int main(){
    int arr[]={12,11,3,5,1,2};
    int n=6;
    selectionsort(arr,n);
    printArray(arr,n);
}