/*QUESTION-01

#include <iostream>
using namespace std;

int stringLength(const string &str){
    int count=0;
    for(char c:str){
        count++;
    }
    return count;
}

int main(){
    string str;
    getline(cin,str);
    int result=stringLength(str);
    cout<<result;
    return 0;
}

QUESTION-02
    
#include <iostream>
using namespace std;

int countCharacter(string &str,char ch){
    int count=0;
    for(char c:str){
        if(c==ch){
            count++;
        }
    }
    return count;
}

int main(){
    string str;
    char ch;
    cout<<"Enter the string: ";
    getline(cin,str);
    cout<<"Enter the character: ";
    cin>>ch;
    int result=countCharacter(str,ch);
    cout<<result<<endl;
    return 0;
}*/
#include <iostream>
using namespace std;

string concatenateStrings(const string &str1,const string &str2){
    string str=str1+str2;
    return str;
}

int main(){
    string str1,str2;
    cout<<"Enter first string: ";
    getline(cin,str1);
    cout<<"Enter second string: ";
    getline(cin,str2);
    cout<<concatenateStrings(str1,str2);
    return 0;
}
