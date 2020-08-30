#include<iostream>
#include<cstring>
using namespace std;
class ConsDemo
{
public:
    void SumDemo(int x,char y)
    {
        cout<<"the square of number is:"<<x*x<<endl;
    }
    void SumDemo(int x,int y,char ch)
    {
        if(x+y)
            cout<<"the sum of two numbers is:"<<x+y<<endl;
        else
            cout<<"ASCII value of given character is:"<<int(ch);
    }
    void SumDemo(char *str,char *str2)
    {
        if(strcmp(str,str2)==0)
            cout<<"string are equal";
        else
            cout<<"string are not equal";
    }
};
int main()
{
    ConsDemo obj;
    char ch;
    char str[20],str2[20];
    int num,num2;
    cout<<"enter any character \'p\'/\'a\':"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 'p':
        case'P':cout<<"enter any number"<<endl;
                        cin>>num;
                        obj.SumDemo(num,ch);
                        break;
        case 'a':
        case 'A':cout<<"enter any two numbers"<<endl;
                        cin>>num>>num2;
                        obj.SumDemo(num,num2,ch);
                        break;
    }
    cin.ignore();
    cout<<"enter two strings"<<endl;
    cin.getline(str,20);
    cout<<"enter second string"<<endl;
    cin.getline(str2,20);
    obj.SumDemo(str,str2);
}
