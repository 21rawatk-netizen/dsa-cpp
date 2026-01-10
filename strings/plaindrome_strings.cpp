//plaindrome of string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter a string";
    cin>>s;
int start=0;//starting index of string s
int end= s.length()-1;//last index of string s
bool Palindrome =true;//asuume the string is an palindrome
while(start<end){
    if(s[start]!= s[end]){
         Palindrome=false;
        break;
    }
    start++;//move forward in a string
    end--;//move backward in string
}
if ( Palindrome )
    cout<<"Palindrome";
else
    cout<<"not a Palindrome"<<endl;
//palindrome of integer
int x;
int original=x;
long long rev=0;
cout<<"Enter the integer";
cin>>x;
if(x<0){
    return false;
}
while(x>0){
int digit=x%10;
rev=rev*10+digit;
x=x/10;
}
if(original==rev){
    return true;
}else{
    return false;
}
    return 0;
}
