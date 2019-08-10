#include <stdio.h>

int gcc_size();
int gcc_align();
__int128 add_one(__int128 x);

int main() {
  printf("clang size %d , align %d\n", sizeof(__int128), _Alignof(__int128));
  printf("gcc size %d , align %d\n", gcc_size(), gcc_align());

  __int128 x = 42;
  __int128 y = add_one(x);
  int z = (int)y;
  printf("Adding 42 + 1 = %d\n", z);
  return 0;
}
