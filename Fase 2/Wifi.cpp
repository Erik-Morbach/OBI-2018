#include <bits/stdc++.h>

using namespace std;
struct evento{
  int x;
  int yi, yf;
  int tipo;
  bool operator<(evento b){
    return x < b.x;
  }
};
vector<evento> eventos;

int main(){
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    int xi,xf,yi,yf;
    scanf("%d %d %d %d",&xi,&yf,&xf,&yi);
    eventos.push_back({xi,yi,yf,0});
    eventos.push_back({xf,yi,yf,1});
  }
  sort(eventos.begin(),eventos.end());
  map<int,int> ycont;
  int ans = 0;
  for(int i=0;i<eventos.size();i++){
    if(!eventos[i].tipo){
      ycont[eventos[i].yi] = 0;
      ycont[eventos[i].yf] = 0;
    }else{
      if(!ycont[eventos[i].yi]) ans++;
      map<int,int>::iterator it = ycont.find(eventos[i].yi);
      --it;
      it -> second = 1;
      ycont.erase(eventos[i].yi);
      ycont.erase(eventos[i].yf);
    }
  }
  printf("%d\n",ans);
}
