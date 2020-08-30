                    #include<iostream>
                    using namespace std;
    int main(int n,char arg[])
    {
        int i=0,a[n],mini=99999;
        for(i=0;i<n;i++)
        {
             a[i]= (int)arg[i];
            if(!a[i])
            {
                cout<<"ARGUMENT PASSED BY USER IS NOT NUMBER"<<endl;
                exit(99);
            }
            else
            {
                if(mini>a[i])
                    mini=a[i];
            }
        }
        cout<<"Least no. is "<<mini;
        return 0;
    }
