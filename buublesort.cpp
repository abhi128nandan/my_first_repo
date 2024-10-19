#include<iostream>
using namespace std;
void bubblesort(int arr[],int s){
    for (int i = 0; i <s; i++)
    {
       for (int j= 0; j<s-i-1; j++)
       {
        if (arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
       }
    }
}
int main(){
    int arr[5]={6,4,8,9,7};
    bubblesort(arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i];
        cout<<endl;
    }
}
