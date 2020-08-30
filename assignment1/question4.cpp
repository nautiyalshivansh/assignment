                    #include<iostream>
                    #include<string>
                    using namespace std;
int main()
{
        string str;
        int ch,i;
        do {
        cout<<endl<<endl<<"ENTER YOUR CHOICE \n 1. Encrypt \n 2.Decrypt"<<endl;
         cin>>ch;
         cin.ignore();
        cout<<"Enter the string"<<endl;
        getline(cin,str);
        switch (ch)
        {
        case 1:
         for(i=0;str[i]!='\0';i++)
           str[i]+=5;
           cout<<"String after encryption is "<<str<<endl;
           break;
        case 2:
          for(i=0;str[i]!='\0';i++)
           str[i]-=5;
           cout<<"String after decryption is "<<str<<endl;
          }
           }while(ch==1 || ch==2);

           return 0;
}
