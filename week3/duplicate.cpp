// Find the duplicate in array;
#include <iostream>
#include<algorithm>
using namespace std;
void finddup(int arr[],int n){
   for(int i=0;i<n;i++){
       if(arr[i+1]==arr[i]){
           cout<<"YES";
           return;
       }
   }
   cout<<"NO";
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
    int m=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+m);
    finddup(arr,n);
    return 0;
}
