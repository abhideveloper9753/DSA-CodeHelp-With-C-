#include <iostream>
#include<stack>
using namespace std;
bool checkredundant(string &str){
  stack<char> st;
  for(int i=0 ; i<str.length() ; i++){
    char ch = str[i];
    if(ch =='(' || ch == '+' || ch == '-' || ch == '+' || ch == '/'){
      st.push(ch);
    }
    else if(ch == ')' ){
      int operatorcount = 0;
      while(!st.empty() && st.top()! = '('){
       char temp = st.top();
       if(temp =='+' || temp == '-' || temp == '*' || temp == '/'){
        operatorcount++;
       }
       st.pop();

      }
      st.pop();
      if(operatorcount =0){
        return true;
      }
    }
  }
  return false;
}


int main() {
 string str = "((a+b)*(c+d))";
 bool ans = checkredundant(str);
 if(ans == true){
  cout<< "redundant bracket present" << endl;

 }
 else{
  cout<< "redundant bracket not present" << endl;
  
 }
  return 0;
}