            #include<iostream>
            #include<string>

            using namespace std;
int main()
{
    char sym, str[50];
    int i,j,k,l2,l=0,f=0;
    cin.getline(str,50);
    for(i=0;str[i]!='\0';i++)
        l++;
    for(i=0;str[i]!='\0';i++)
    {
        l2=0;
        sym=(f%2==0)?'#':'$';
        if(str[i]>='A' && str[i]<='Z')
        str[i]=tolower(str[i]);
        if(str[i]>='a' && str[i]<='z')
        {
            l2=str[i]-'a';
            for(k=l-1;k>i;k--)
                str[k+l2]=str[k];
            cout<<str<<endl;
            for(j=0;j<=l2;j++)
            {
              str[i+j]=sym;
            }

            l+=l2;
            i+=l2;
        }
        str[l]='\0';
        f++;
    }

    cout<<endl<<"STRING AFTER ENCRYPTION IS  "<<str;
    return 0;
}
