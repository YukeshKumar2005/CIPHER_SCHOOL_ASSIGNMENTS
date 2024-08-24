/*
//QUESTION -01
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    (num%2==0)?cout<<"Even":cout<<"Odd";
    return 0;
}
//QUESTION -02
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    int n=s.length();
    for(int i=0;i<n/2;++i){
        swap(s[i],s[n-i-1]);
    }
    cout<<"Reversed string: "<<s;
}*/
//QUESTION -03
#include<bits/stdc++.h>
#include<cctype>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    int vowels=0,consonants=0;
    for(char c:s){
        if(isalpha(c)){
            if(c=='a'||c=='e'||c=='i'||c=='i'||c=='o'||c=='u'){
                vowels+=1;
            }else{
                consonants+=1;
            }
        }
    }
    cout<<"Number of vowels: "<<vowels<<endl;
    cout<<"Number of consonants: "<<consonants<<endl;
    return 0;
}