#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n)
{
    
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                min=j;
            }
            
        }
        swap(arr[i],arr[min]);
    }
}

int main() {

int arr[5]={5,4,3,2,1};
selectionSort(arr,5);
for(int i=0;i<5;i++)
{
    cout<<arr[i]<<" ";
}


	return 0;
}
