#include <bits/stdc++.h>

using namespace std;

int main(){
  int m,n;
  scanf("%d %d",&m,&n);
  int x,y,v;
  int s = 0;
  int graus[1001];
  memset(graus,0,sizeof(graus));
  for(int i=0;i<m;i++){
    scanf("%d %d %d",&x,&v,&y);
    s+=v;
    graus[y-1] += v;
    graus[x-1] -= v;
  }

  int ex = 0;
  for(int i=0;i<n;i++) {
    if(graus[i]>0) ex+=graus[i];
  }
  string a = ((s==ex)?("N"):("S"));
  cout<<a<<endl;
  printf("%d\n",ex);
}
