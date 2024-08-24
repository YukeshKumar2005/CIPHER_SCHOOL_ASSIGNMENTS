/* QUESTION 1:
#include <iostream>
using namespace std;
int main(){
    string s1,s2;
    cout<<"Enter the first string: ";
    cin >>s1;
    cout<<"Enter the second string: ";
    cin>>s2;
    cout<<"Concatenated string: "<<s1+s2<<endl;
    return 0;
}
QUESTION -2
#include<iostream>
#include<string>
int main(){
    int arr[5];
    float temp=0.0;
    for(int i=1;i<=5;i++){
        std::cout<<"Enter grade "<<i<<": ";
        std::cin>>arr[i];
        temp+=arr[i];
    }
    std::cout<<"The average grade is: "<<temp/5;
}*/
//QUESTION-3
#include <iostream>
#include<string>
int square(int n){
    return n*n;
}
int main(){
    int num;
    std::cout<<"Enter a number: ";
    std::cin>>num;
    std::cout<<"The square of "<<num<<" is: "<<square(num)<<std::endl;
}
