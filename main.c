#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void save_prisoner(int n, int m, int s) {
    int p;
    
    m = m % n;
    p = (m + s - 1) % n;
    if (p <= 0)
    {
        p += n;
    }
    printf("%d\n", p);
}

int main() {
    int t, n, m, s;
    int i;
    
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &n);
        scanf("%d", &m);
        scanf("%d", &s);
        save_prisoner(n, m, s);
    }    
    return 0;
}
