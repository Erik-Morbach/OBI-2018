#include <bits/stdc++.h>

using namespace std;

int main(){
  int l,c;
  scanf("%d %d",&l,&c);
  int t1,t2;
  t2 = 2*(l-1) + 2*(c-1);
  t1 = 2*l*c - l - c + 1;
  printf("%d\n%d\n",t1,t2);
}
