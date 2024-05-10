#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n,l;
    cin>>n>>l;

    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    sort(ar, ar+n);
    int mx = 0;
    for(int i=0; i<n-1; i++){
        if(ar[i+1] - ar[i] > mx){
            mx = ar[i+1] - ar[i];
        }
    }

    double x = ar[0];
    double y = double(mx)/2;
    double ans = max(x,y);
    double z = l - ar[n-1];
    ans = max(z, ans);

    cout<<fixed<<setprecision(9)<<ans;
}