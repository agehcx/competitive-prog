/* https://www.borntodev.com/devlab/task/620 */

#include <bits/stdc++.h>
using namespace std;

int main()
{	
  map<double,string> bmi;
  bmi[18] = "Thin";
  bmi[23] = "Good Health";
  bmi[25] = "Fat Level 1";
  bmi[30] = "Fat Level 2";
  bmi[999] = "Fat Level 3";
  double x ;
  double a,b;
  cin>>a>>b;
  x = (10000*a)/(b*b);
  cout<<fixed<<setprecision(2)<<x<<'\n';
  auto idx = bmi.lower_bound(x);
  cout<<idx->second;
}
