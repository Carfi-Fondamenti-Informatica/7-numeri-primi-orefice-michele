#unclude "lib.h"
void primo(int a, int i, int &conta){
  int c=0;
  i++;
  if(a>1 and a>i) {
    c=a &i;
    if (c==0){
      conta++;
    }
    else {
      primo (a,i,conta);
    }
  }
}
