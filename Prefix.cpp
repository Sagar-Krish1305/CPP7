#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
int prefixEvaluation(string s)
{
    stack<int> st;
    
    for (int i = (int)(s.length() - 1); i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push((int)(s[i] - '0'));

        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            switch (s[i]){
            case '+':
                st.push(op1+op2);
                break;
            case '-':
                st.push(op1-op2);
                break;
            case '*':
                st.push(op1*op2);
                break;
            case '/':
                st.push(op1/op2);
                break;
            case '^':
                st.push(pow(op1,op2));
                break;
            }
        }
    }
    return st.top();
}
int main()
{
string s="*(-63)(-42)";

int t=prefixEvaluation(s);
cout<<t<<endl;
return 0;
}