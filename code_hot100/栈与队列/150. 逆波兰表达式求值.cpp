#include<iostream>
#include<stack>
using namespace std;
#include<string>
#include<vector>

class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> s;
        for(int i=0;i<tokens.size();i++)
        {
            while(tokens[i]!= "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/")
            {   //
                //如果不是运算符，就把数字压入栈中
                // stoi(s)：转成普通整数 (int)。
                // stoll(s)：转成超大整数 (long long)。如果你刷算法题遇到极大的数字，stoi 会爆表，必须用它！
                // stod(s)：转成双精度浮点数 (double)。处理带小数点的文本。
                // stof(s)：转成单精度浮点数 (float)。
                s.push(stoi(tokens[i++]));
                //stoi函数可以将字符串转换为整数
            }
            
            if(s.size()>=2)
            {
                int num1=s.top();
                s.pop();
                int num2=s.top();
                s.pop();
                if(tokens[i]=="+") s.push(num2+num1);
                else if(tokens[i]=="-") s.push(num2-num1);
                else if(tokens[i]=="*") s.push(num2*num1);
                else if(tokens[i]=="/") s.push(num2/num1);
               
            }
        }
        return s.top();
    }
};

void test()
{
    vector<string> tokens={"2","1","+","3","*"};
    Solution ss;
    cout<<ss.evalRPN(tokens)<<endl;
}

int main()
{
    test();
    return 0;
}