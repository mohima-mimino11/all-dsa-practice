// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//   int k;
//   cin >> k;
//   for(int t = 0; t < k ; t++){
//     long long int a, b, c, d;
//     cin >> a >> b >> c >> d;

//     long long int gellyfish_total = a + c;
//     long long int flower_total = b + d;
//     if(gellyfish_total > flower_total ||  (t % 2 != 0 && c >= d)){
//       cout << "Gellyfish" << endl;
//     }else if(flower_total > gellyfish_total || (t%2 == 0 && c <= d)){
//       cout << "Flower" << endl;
//     }else if(gellyfish_total == flower_total && c > d){
//       cout << "Gellyfish" << endl;
//     }

//   }
//   return 0;
// }
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(int i){
    long a,b,c,d,x,y;
    cin>>a>>b>>c>>d;
    x=min(a,c);
    y=min(b,d);
    // cout<<i<<" - ";
    if(x>=y){
        cout<<"Gellyfish\n";
    }
    else{
        cout<<"Flower\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
/*  freopen(input.txt, 'r', stdin);
    freopen(output.txt, 'w', stdout); */
    int t,i=1;
    cin>>t;

    while(t--){
        solve(i++);
    }


  return 0;
}