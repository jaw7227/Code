
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void bruteForce(string s, string p){
  int n=s.length();
  int m=p.length();
  map<char,int> Map;
  for(int i=0;i<m;i++){
    Map[p[i]]++;
  }
  bool isfound=false;
  for(int i=0;i<=n-m;i++){
    isfound=true;
    map<char,int> M(Map);
    for(int j=0;j<m;j++){
      if(M[s[i+j]]<1){
        isfound=false;
        break;
      }
      else{
        M[s[i+j]]--;
      }
    }
     for(auto it =M.begin();it!=M.end();it++){
      if((it->second) > 0){
        isfound=false;
      }
    }
    if(isfound==true){
      cout <<"Substring "<< s.substr(i,m) <<" present at index "<< i <<endl;;
    }
  }
  if(!isfound){
    cout<<"N0 Substring Found"<<endl;
  }
}

void solve()
{
  string str1 = "XYYZXZYZXXYZ";
  string str2 = "XYZ";
  //cin >> str1;
  //cin >> str2;
  bruteForce(str1,str2);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("error.out", "w", stderr);
    freopen("outputf.out", "w", stdout);
#endif

    int T = 1;
    //cin >> T;
    for (int t=1;t<=T; t++) {
        solve(); // function to solve the give problem
    }
    cerr << "\ntime taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;

    return 0;
}
