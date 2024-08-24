/*QUESTION 01
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Enter the third number: ";
    cin>>c;
    if(a>b && a>c){
        cout<<"The largest number is: "<<a<<endl;
    }else if(b>a && b>c){
        cout<<"The largest number is: "<<b<<endl;
    }else{
        cout<<"The largest number is: "<<c<<endl;
    }
    return 0;
}
QUESTION -02
#include<iostream>
using namespace std;
int main(){
    int score;
    cout<<"Enter the score: ";
    cin>>score;
    if(score>=90 && score<=100){
        cout<<"Grade: A\"";
    }else if(score>=80 && score<=89){
        cout<<"Grade: B\"";
    }else if(score>=70 && score<=79){
        cout<<"Grade: C\"";
    }else if(score>=60 && score<=69){
        cout<<"Grade: D\"";
    }else{
        cout<<"Grade: F\"";
    }
    return 0;
}*/
#include<iostream>
using namespace std;
int main(){
    int month;
    cout<<"Enter a number: ";
    cin>>month;
    switch(month){
        case 1:
            cout<<"The month is: January";
            break;
        case 2:
            cout<<"The month is: February";
            break;
        case 3:
            cout<<"The month is: March";
            break;
        case 4:
            cout<<"The month is: April";
            break;
        case 5:
            cout<<"The month is: May";
            break;
        case 6:
            cout<<"The month is: June";
            break;
        case 7:
            cout<<"The month is: July";
            break;
        case 8:
            cout<<"The month is: August";
            break;
        case 9:
            cout<<"The month is: September";
            break;
        case 10:
            cout<<"The month is: October";
            break;
        case 11:
            cout<<"The month is: November";
            break;
        case 12:
            cout<<"The month is: December";
            break;
        default:
            cout<<"invalid";
    }
    return 0;
}