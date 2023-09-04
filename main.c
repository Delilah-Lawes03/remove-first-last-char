#include <stdio.h>

char* remove_char(char* dst, const char* src)
{
    int i = 0;
    int j = 0;
    while (src[i] != '\0') {
        if (i != 0 && src[i + 1] != '\0') {
            dst[j] = src[i];
            j++;
        }
        i++;
    }

    dst[j] = '\0';
    return dst;
}

int main() {

    char dst[100];
    const char* src = "Hello World!";
    remove_char(dst, src);
    printf("%s\n", dst);


    return 0;
}