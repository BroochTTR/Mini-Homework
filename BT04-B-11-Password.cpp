#include<bits/stdc++.h>

using namespace std;




int main()

{

    int n;

    cin>>n;

    vector<string>arr(n);

    for(int i=0;i<n;i++)

    {

        cin>>arr[i];

    }




    for(int i=0;i<n;i++)

    {

        int m=arr[i].size();

        reverse(arr[i].begin(),arr[i].end());

        for(int j=0;j<n;j++)

        {

if(arr[j]==arr[i])

         {

             if(i!=j)

             {

             cout<<arr[j].size()<<" "<<arr[j][m/2];

             break;

             }

         }

        }

    }
}

