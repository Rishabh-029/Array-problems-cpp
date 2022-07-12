    #include<bits/stdc++.h>
    using namespace std;

    
    int main()
    {
        int n;
        cin>>n;
        int a[n];

        for (int i = 0; i < n; ++i)
        {
            cin>>a[i];    
        }

        int first,second=INT_MIN,third=INT_MIN;


        first=a[0];

        for (int i = 1; i < n; ++i)
        {
            if(a[i]>first)
            {
                third=second;
                second=first;
                 first=a[i];
            }
            else if(a[i]>second && a[i]!=first)
            {
                third=second;
                second=a[i];
            }
            else if(a[i]>third && a[i]!=first && a[i]!=second)
            {
                third=a[i];
            }
        }
        

        cout<<first<<"\t"<<second<<"\t"<<third<<"\t";

        return 0;

    }
