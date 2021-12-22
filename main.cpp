#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
  int A, B, C;
  scanf("%d%d%d", &A, &B, &C);
  for (int a=1; a<=100; a++) {
    for (int b=-10000; b<=10000; b++) {
      for (int c=-100; c<=100; c++) {
        for (int d=-10000; d<=10000; d++) {
          if (A == a*c && B == a*d+b*c && C == b*d) {
            printf("%d %d %d %d\n", a, b, c, d);
            return 0;
          }
        }
      }
    }
  }
  printf("No Solution\n");
  return 0;
}
