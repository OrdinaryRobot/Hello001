#include<iostream>
using namespace std;
int main() {
    //声明字符串变量,并输入字符串
    string s;
    cin>>s;//cin遇到空格，回车等等都会停止输入，
           //用来读取一个连续的字符

    //2.获取长度
    cout<<s.size()<<'\n';//输入字符，解析出它的长度

    //3.访问单个字符
    cout<<s[0]<<'\n';//找出字符串第0个字符

    //遍历字符串
    for (char c : s) {
        //依次把字符串s中的每一个字符取出来，临时赋值给变量 c，然后执行大括号里的代码
        cout<<c<<' ';//把取出的字符 c 打印出来，并在后面加一个空格

    }




return 0;
}
