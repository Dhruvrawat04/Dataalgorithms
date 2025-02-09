//Program to search key using linear searching
 #include<iostream>
 #include<vector>
using namespace std;
void linearsearch(vector<int>vec,int key){
    int i;
    for(i=0;i<vec.size();i++){
        if(vec[i]==key){
            cout<<"key found at"<<i<<endl;
            break;
        }
    }
    if(i==vec.size()){
        cout<<"not found";
    }
}
int main(){
    vector<int>vec={1,2,7,8,6,3};
    int key;
    cout<<"enter the key you want to search"<<endl;
    cin>>key;
    linearsearch(vec,key);
    return 0;
}
