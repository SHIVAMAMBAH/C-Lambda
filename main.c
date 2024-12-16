/* main.c */
#include <stdio.h>

#define assign(a, b) b; \
  a = &lmd ## __LINE__;

#define lambda(a, _, c) \
  int lmd ## __LINE__(int a){return c;}

int main(){
  int (*p)(int);

  assign(p, lambda(x, ->, x+1));

  printf("%d", p(1));
  return 0;
}
