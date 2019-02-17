#include <bits/stdc++.h>

using namespace std;
bool comp(int a,int b){
  return a<b;
}
int main(){
  int n;
  vector<int> p;
  scanf("%d",&n);
  int aux;
  for(int i=0;i<n;i++){
    scanf("%d",&aux);
    p.push_back(aux);
  }
  p.push_back(0);
  sort(p.begin(),p.end(), comp);
  int o = 0;
  for(int i=0;i<n;i++){
    if(p[i+1] - p[i] > 8){
      o = 1;
      break;
    }
  }
  if(!o) printf("S\n");
  else printf("N\n");
}
