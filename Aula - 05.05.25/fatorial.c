#include <stdio.h>

int main() {
    int n, fat=1;

    scanf("%d", &n);
    for (int i = n; i>=2; i--)
    {
        fat = fat *i;
    }
      printf("%d", fat);

return 0;
}