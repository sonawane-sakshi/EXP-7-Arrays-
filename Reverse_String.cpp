//Sakshi Sonawane
//PRN:24070123505
#include <iostream>
using namespace std;
int main(){
    string a,rev_str;
    int length,i;
    cout<<"Enter a string: "<<endl;
    cin>>a;
    length=a.length();
    for(i=length;i>=0;i--){
        rev_str+=a[i];
    }
    cout<<"Reversed string is: "<<rev_str<<endl;

}

