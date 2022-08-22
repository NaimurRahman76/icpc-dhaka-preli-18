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
///............www.facebook.com/naimur76...................................................
///................durjoyovi76@gmail.com...................................................
///........... ....( N~76 ) ...................................................................
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

int call(int x)
{
    int low=1,high=1e9,ans=0;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if((mid*mid)<=x){
            ans=mid;
            low=mid+1;
        }
        else high=mid-1;
    }
    return ans;
}
int32_t main()
{
    FAST_IO;
    int tt=1,t=0,cnt=1;
    cin>>tt;
    while(tt--)
    {
        t++;
        int a,b;
        cin>>a>>b;
        a--;
        int ans=call(b)+call(b/2);
        ans-=(call(a)+call(a/2));
        cout<<"Case "<<t<<": "<<ans<<endl;

    }

    return 0;
}


