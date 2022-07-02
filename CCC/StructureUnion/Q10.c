#include <stdio.h>
struct student {
    char name[50];
    int roll;
} s[5];

int main() {
    int i,n;
    scanf("%d",&n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &s[i].roll);
        scanf("%s", s[i].name);
    }
    for (i = 0; i < n; ++i) {
        printf("\n%d %s\n",s[i].roll,s[i].name);
    }
    return 0;
}
