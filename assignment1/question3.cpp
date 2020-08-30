                #include<iostream>
                using namespace std;
int main()
{
    int a,b,i,l,temp,flag=0;
    cout<<"Please enter the limit a to b";
    cin>>a>>b;
    if(a>b)
        cout<<"Invalid Limit";
    else
        {
    temp=a;
    cout<<endl<<"PRIME NUMBER BETWEEN "<<a<<" TO "<<b<<" are"<<endl;
    while(temp<=b)
    {
        l=temp/2;
        flag=0;
        for(i=2;i<l;i++)
        {
            if(temp%i==0)
             flag=1;
        }
        if(flag==0)
            cout<<temp<<endl;
        temp++;
    }
        }
    return 0;
}
