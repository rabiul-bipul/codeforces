#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  double m;
  cin >> n >> m;

  int arr[n];

  for(int i = 0; i < n; i++){
    cin >> arr[i];
    if(arr[i] <= m){
      arr[i] = 0;
    } 
  }
    double moxa = 0;
    int ans = 0;

    for(int i = 0; i < n; i++){
      if(ceil(arr[i]/m) >= moxa){
        moxa = ceil(arr[i] / m);
        ans = i;
      }
    }
    cout << ans+1 << endl;
    return 0;
}
