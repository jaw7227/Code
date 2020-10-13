#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
  int n=7; // size of triangle
  //cin >> n;
  for (int i=1;i<=n;i++){
    for(int j=n;j>n-i;j--){
      cout<<" ";
    }
    for(int j=i;j<=n;j++){
      cout<< j <<" ";
    }
    cout << endl;
  }
  for (int i=2;i<=n;i++){
    for(int j=i;j<=n;j++){
      cout<<" ";
    }
    for(int j=n-i+1;j<=n;j++){
      cout<< j <<" ";
    }
    cout << endl;
  }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//
// #ifndef ONLINE_JUDGE
//     freopen("inputf.in", "r", stdin);
//     freopen("error.out", "w", stderr);
//     freopen("outputf.out", "w", stdout);
// #endif

    int T = 1;
    //cin >> T;
    for (int t=1;t<=T; t++) {
        solve(); // function to solve the give problem
    }
    cerr << "\ntime taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;

    return 0;
}
