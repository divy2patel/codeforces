    #include<iostream>
    using namespace std;
    int main()
    {
        int n,k;
        int c=0;
        int scr[100];
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>scr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(scr[k-1]<=scr[i])
            {
                if(scr[i]>0)
                {
                    c++;
                }
            }
        }
        cout<<c;
    }