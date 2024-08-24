/*
//QUESTION-01
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n],sum=0;
    cout<<"Enter the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Sum of the array: "<<sum<<endl;
    return 0;
}
//QUESTION -02
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n],odd=0,even=0;
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even+=arr[i];
        }else{
            odd+=arr[i];
        }
    }
    cout<<"Sum of odd numbers: "<<odd<<endl;
    cout<<"Sum of even numbers: "<<even;
    return 0;
}*/
//QUESTION -03
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n],count_even=0,count_odd=0;
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count_even+=1;
        }else{
            count_odd+=1;
        }
    }
    cout<<"Number of odd numbers: "<<count_odd<<endl;
    cout<<"Number of even numbers: "<<count_even;
    return 0;
}