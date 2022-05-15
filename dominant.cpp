#include<iostream>

int main(void) {
 int a;
 scanf("%d", &a);

 while (a--) {
  int x, y, z;
  scanf("%d %d %d", &x, &y, &z);

  if (x > y && x > z) {
   if (y+z >= x) {
    printf("NO\n");
   }
   else {
    printf("YES\n");
   }
  }
  else if (y > x && y > z) {
   if (x+z >= y) {
    printf("NO\n");
   }
   else {
    printf("YES\n");
   }
  }
  else {
   if (x+y >= z) {
    printf("NO\n");
   }
   else {
    printf("YES\n");
   }
  }
 }
 return 0;
}