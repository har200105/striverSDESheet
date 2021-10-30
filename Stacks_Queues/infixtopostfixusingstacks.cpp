#include<iostream>
#include<string>
#include<stack>

using namespace std;

string postfix(string s);
int check(char c);

int main(){
    string inputvalue;
    cout<<"ENTER THE INFIX EXPRESSION"<<endl;
    cin>>inputvalue;
    cout<<postfix(inputvalue)<<endl;
}

int check(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else {
        return -1;
    }
} 

string postfix(string s){

    stack<char> mystack;
    string result;

    for (int i = 0; i < s.length(); i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            result+=s[i];
        }
        else if(s[i]=='('){
            mystack.push(s[i]);
        }
        else if(s[i]==')'){
            while (!mystack.empty() && mystack.top()!= '(')
            {
                result+=mystack.top();
                mystack.pop();
            }
            if(!mystack.empty()){
                mystack.pop();
            }
            
        }
        else{
            while(!mystack.empty() && check(mystack.top())>check(s[i])){
                result+=mystack.top();
                mystack.pop();
            }
            mystack.push(s[i]);
        }
    }
    while(!mystack.empty()){
        result+=mystack.top();
        mystack.pop();
    }
    return result;

}
