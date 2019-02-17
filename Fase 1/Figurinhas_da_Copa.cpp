#include <bits/stdc++.h>

using namespace std;

int main(){
  int figurasc[101];
  int n,cari,jacomp;
  memset(figurasc,0,sizeof(figurasc));
  scanf("%d %d %d",&n,&cari,&jacomp);
  int aux;
  for(int i=0;i<cari;i++){
    scanf("%d",&aux);
    figurasc[aux] = 1;
  }
  for(int i=0;i<jacomp;i++){
    scanf("%d",&aux);
    if(figurasc[aux]){
      cari--;
      figurasc[aux] = 0;
    }
  }
  printf("%d\n",cari);
}
