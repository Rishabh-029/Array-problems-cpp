    #include<bits/stdc++.h>
    using namespace std;

    //kth smallest element
    int main()
    {
        int n;
        cin>>n;

        int k;
        cin>>k;
        int a[n];

        for (int i = 0; i < n; ++i)
        {
            cin>>a[i];    
        }

        priority_queue<int>pq;

        for(int i=0;i<k;i++)
        {
            pq.push(a[i]);
        }


        for (int i = k; i < n; ++i)
        {
            if((a[i])<pq.top())
            {
                pq.pop();
                pq.push(a[i]);
            }
        }
        cout<<pq.top();
        return 0;

    }
