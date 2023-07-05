#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[100001];
        scanf("%s", s);
        int len = strlen(s);
        int f = 0; 
        for (int i = 0; i < len; i++) {
 
            if (s[i] == s[(i+1)%len]) {
                f = 1;
                break;
            }
        }
        if (f==1) {
            printf("no\n");
        } else {
            printf("yes\n");
        }
    }
    return 0;
}