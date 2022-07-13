    #include<bits/stdc++.h>
    using namespace std;

    // Remove Duplicate ELements from sorted Array
    int main()
    {

        int n;
        cin>>n;
       int a[n];

       for (int i = 0; i < n; ++i)
       {
           cin>>a[i];
       }


        int i=0;
       for (int j = 1; j < n; ++j)
       {
           if(a[j]!=a[i])
           {
             i++;
             a[i]=a[j];
           }
       }

     for(int k=0;k<i+1;k++)
     {
        cout<<a[k]<<" ";
     }
      
        return 0;

    }
