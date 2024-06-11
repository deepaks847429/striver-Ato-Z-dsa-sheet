// overlapping subproblems 
//memoization(we tend to store the value of subproblems  (bottom to up))

// always declare a dp array
// store the values
// check dp[n] value, if it exists than return.

#include<iostream>(tabulation)
using namespace std;
int main(){
  int n;
  cin>>n;
  int prev2=0;
  int prev=1;
  for(int i=2; i<=n; i++){
    int curi=prev+prev2;
    prev2=prev;
    prev=curi;
  }
cout<<prev;
  return 0;
}