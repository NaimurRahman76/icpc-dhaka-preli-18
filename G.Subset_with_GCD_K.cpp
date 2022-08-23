#include<bits/stdc++.h>
using namespace std;

///PBDS Starting.......

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<numeric>
using namespace __gnu_pbds;
typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;

///PBDS_SET
///Index of Value - .order_of_key()
///Value at Index - .find_by_order()
//typedef tree<int, nua_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds_set;
//typedef tree<int, null_type, lessorequal<int>, rb_tree_tag,tree_order_statistics_node_update> pbds_multiset;

/// PBDS closing......
#define int long long
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20)
#define endl '\n'
///............Author..................................................................
///........... :: .....................................................................
///...........(  NOBODY  )................................................................
///........... Bangabandhu Sheikh Mujibur Rahman Science and Technlogy University,Gopalganj
///........... ( N~76 ) ...................................................................
///........... No Copyright .....You can copy and paste my code without any permission.....
/// !!!!!!!!!!!!!!!........................................................................
#define pb push_back
#define esp 0.000000001
#define pi acos(-1)
#define N 1000009
#define ff first
#define ss second
#define all(x) x.begin(),x.end()

/// Code Loading Please wait.............
/// returning to N~76.
/// Loading Finished.....................'
int mod=1e9+7;
int gcd(int x,int y)
{
    if(x>y)swap(x,y);
    if(x==0)return y;
    return gcd(y%x,x);
}
int32_t main()
{
    FAST_IO;
    int tt=1,t=0,cnt=1;
    while(tt--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        int q;
        cin>>q;
        unordered_map<int,int>dp;
        while(q--)
        {
            int x;
            cin>>x;
            vector<int>div;
            bool ok=false;
            for(int i=0; i<n; i++)
            {
                if(v[i]%x)continue;
                div.push_back(v[i]/x);
            }
            if(div.size()==0)cout<<"N"<<endl;
            else
            {
                int xx=div[0];
                for(int i=0; i<div.size(); i++)
                {
                    xx=gcd(xx,div[i]);
                    if(xx==1)
                    {
                        ok=true;
                        break;
                    }
                }
                if(ok)cout<<"Y"<<endl;
                else cout<<"N"<<endl;
            }
        }
    }

    return 0;
}


