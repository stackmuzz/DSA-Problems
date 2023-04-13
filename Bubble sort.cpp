#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[],int n)
{
  int counter=1;
  while(counter<n)
  {
      for(int i=0;i<n-counter;i++)
      {
          if(arr[i]>arr[i+1]){
              swap(arr[i],arr[i+1]);
          }
      }
      counter++;
  }
}

int main() {

int arr[5]={5,4,3,2,1};
bubbleSort(arr,5);
for(int i=0;i<5;i++)
{
    cout<<arr[i]<<" ";
}


	return 0;
}
