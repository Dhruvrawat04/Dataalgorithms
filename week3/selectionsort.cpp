// selection sort and find number of swap and comparision;
#include <iostream>
#include<algorithm>
using namespace std;
void selsort(int arr[],int n){
    int compare=0,swapp=0;
     
    for(int i=0;i<n-1;i++){
        int key =i;
        for(int j=i+1;j<n;j++){
            compare++;
            if(arr[j]<arr[key])key=j;
        }
        swapp++;
        swap(arr[i],arr[key]);
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"comparison"<<compare;
    cout<<endl<<"swap"<<swapp;
}
int main() {
    cout << "Enter size of array"<<endl;
    int n;
    cin>>n;
    cout<<"enter array elements"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selsort(arr,n);
    return 0;
}
