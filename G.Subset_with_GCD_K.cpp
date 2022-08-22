#include<bits/stdc++.h>
using namespace std;

///PBDS Starting.......

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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
int pr[1002],inv[1098];
int go(int base,int po)
{
    if(po==0)return 1;
    int x=go(base,po/2);
    x*=x;
    x%=mod;
    if(po&1)x*=base;
    return (x%mod);
}
vector<int>a(200000),b(100009);
vector<int>vis(200000);
void pre()
{
    a[1]=0;
    b[1]=1;
    for(int i=2; i<=100000; i++)
    {
        a[i]=b[i-1]*2;
        if(i%2)b[i]=a[i]+1;
        else b[i]=a[i]-1;
        a[i]%=mod;
        b[i]%=mod;
    }
}
int32_t main()
{
    FAST_IO;
    int tt=1,t=0,cnt=1;
    cin>>tt;
    pre();
    while(tt--)
    {
        t++;
        string s;
        cin>>s;
        int n=s.size();
        int pos=0,cnt=0;
        while(pos<n&&s[pos]=='W'){
            cnt++;
            pos++;
        }
        int ans=0;
        if(cnt)ans=(go(2,cnt-1))%mod;
        if(cnt==n)ans=(ans* 3)%mod;
        else if(cnt)ans=((ans*2))%mod;
        int pos2=n-1;
        cnt=0;
        while(pos2>=pos&&s[pos2]=='W'){
            pos2--;
            cnt++;
        }
        int ans2=1;
       if(cnt) {
            ans2=(go(2,cnt))%mod;
            if(ans==0)ans=1;
            ans=(ans*ans2)%mod;
       }
        cnt=0,ans=max(1ll,ans);
        for(int i=pos+1;i<=pos2;i++)
        {
            if(s[i]=='W')cnt++;
            else{
                if(cnt==0)continue;
                int x=go(2,cnt)%mod;
                if(s[i]==s[i-cnt-1])x-=a[cnt];
                else x-=b[cnt];
                if(x<=0)x+=mod;
                ans=(ans*x)%mod;
                cnt=0;
            }
        }
        cout<<"Case "<<t<<": "<<ans<<endl;


    }

    return 0;
}


