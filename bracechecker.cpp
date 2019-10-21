#include "bracechecker.h"
#include "stack" 
using namespace std;
bracechecker::bracechecker (){
};
bool bracechecker::isbalanced(const string& data){
    stack <int> st;
    for (int i = 1; i < data.length(); i++){
        if (data[i] != '(' && data[i] != '{' && data[i] != '[' && data[i] != ']' && data[i] != '}' && data[i] != ')') continue;
        if (data[i] == '(') st.push(data[i]);
        if (data[i] == '[') st.push(data[i]);
        if (data[i] == '{') st.push(data[i]);
        if (data[i] == ')'){
            if (!st.empty()){
                if(st.top() == '(') st.pop();
                else return false;
                }
            else return false;
        }
        if (data[i] == ']'){
            if (!st.empty()){
                if(st.top() == '[') st.pop();
                else return false;
                }
            else return false;
        }
        if (data[i] == '}'){
            if (!st.empty()){
                if(st.top() == '{') st.pop();
                else return false;
                }
            else return false;
        }
    }
    if (st.empty()) return true; else return false;
}