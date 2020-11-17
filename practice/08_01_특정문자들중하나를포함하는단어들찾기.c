#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char chs[100];
    char haystack[1000];

    printf("Input characters: ");
    fgets(chs, 99, stdin);
    printf("Input a sentence: ");
    fgets(haystack, 999, stdin);

    char* tok;

    for (tok = strtok(haystack, " ."); tok != NULL; tok = strtok(NULL, " .")) {
        int len = strlen(chs);
        for (int i = 0; i < len; i++) {
            // 대문자일 경우
            if (64 < chs[i] && chs[i] < 91) {
                char chs_a = chs[i] + 32;

                if (strchr(tok, chs[i]) || strchr(tok, chs_a)) {
                    printf("%s\n", tok);
                    break;
                }
            }
            // 소문자일 경우
            else {
                char chs_A = chs[i] - 32;
                if (strchr(tok, chs[i]) || strchr(tok, chs_A)) {
                    printf("%s\n", tok);
                    break;
                }
            }
        }
    }
    return 0;
}
