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
    for(i=length-1;i>=0;i--){
        rev_str+=a[i];
    }
if(a==rev_str){
    cout<<"It is a palindrome.";
} 
else{
    cout<<"It is not a palindrome";
}
}

