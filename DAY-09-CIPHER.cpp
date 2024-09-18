/*QUESTION-01
#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int *ptr=&num;
    cout<<"Value without using pointer: "<<num<<endl<<"Value using pointer: "<<*ptr;
    return 0;
}
QUESTION-02
#include <iostream>
using namespace std;

int main(){
    int arr[]={12,25,37,44,59};
    int n=sizeof(arr[n])/sizeof(arr[0]);
    int *ptr=arr;
    for(int i=0;i<n;i++){
        cout<<"Element "<<i+1<<" : "<<*(ptr+i)<<endl;
    }
    return 0;
}
QUESTION-03*/
#include <iostream>
using namespace std;

int main() {
    // Declare an integer variable
    int num = 42;

    // Declare a pointer to the integer
    int* ptr1 = &num;

    // Declare a pointer to the pointer
    int** ptr2 = &ptr1;

    // Print the value of the integer using the variable
    cout << "Value of num (using variable): " << num << endl;

    // Print the value of the integer using the pointer to the integer
    cout << "Value of num (using ptr1): " << *ptr1 << endl;

    // Print the value of the integer using the pointer to the pointer
    cout << "Value of num (using ptr2): " << **ptr2 << endl;

    return 0;
}