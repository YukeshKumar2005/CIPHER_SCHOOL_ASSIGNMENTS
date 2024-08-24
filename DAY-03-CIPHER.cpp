/*QUESTION -01
#include<iostream>
using namespace std;
int main(){
    int N,temp=0;
    cout<<"Enter a number: ";
    cin>>N;
    for(int i=1;i<=N;i++){
        temp+=i;
    }
    cout<<"The sum of the first "<<N<<" natural numbers is: "<<temp<<endl;
    return 0;
}
//QUESTION -02
#include<iostream>
using namespace std;
int main(){
    int i,n,factorial=1;
    cout<<"Enter a number: ";
    cin>>n;

    for(i=1;i<=n;i++){
        factorial*=i;
    }
    cout<<"Factorial of "<<n<<" is: "<<factorial;
    return 0;
}*/
#include <iostream>
using namespace std;
int main(){
    int i,num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Multiplication table of "<<num<<": "<<endl;
    for(i=1;i<11;i++){
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }
    return 0;
}