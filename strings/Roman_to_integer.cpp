//roman number converted into integer
#include<iostream>
#include<string>
using namespace std;
class solution{
    public:
    int value(char c){
        switch(c){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
        return 0;
    }
    int romanToInt(string s){
        int total=0;//it stores the final answer
        for(int i=0;i<s.length();i++)
        {
            if(i+1<s.length() && value(s[i])<value(s[i+1]))//roman number is process from left to right if current<next(subtract) and current>=next(Add)
            {
                total=total-value(s[i]);//subtract the number
            }else{
                total=total+value(s[i]);//add the number
            }
        }
        return total;
    }
};
int main() {
    solution r;
    string roman;
    cout<<"Enter Roman numerical";
    cin>>roman;
    cout<<"'Integer value"<<r.romanToInt(roman)<<endl;
    return 0;
}
