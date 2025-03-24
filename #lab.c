#include <stdio.h>
#include <string.h>

#define POLYNOMIAL "1101"

void xorDivision(char *dividend, const char *divisor, int len) {
    for (int i = 0; i < strlen(divisor); i++) {
        dividend[i] = (dividend[i] == divisor[i]) ? '0' : '1';
    }
}

void computeCRC(char *data, const char *polynomial) {
    int dataLen = strlen(data);
    int polyLen = strlen(polynomial);
    char remainder[polyLen];

    strncpy(remainder, data, polyLen);
    remainder[polyLen] = '\0';

    for (int i = polyLen; i <= dataLen; i++) {
        if (remainder[0] == '1') {
            xorDivision(remainder, polynomial, polyLen);
        }
        memmove(remainder, remainder + 1, polyLen - 1);
        remainder[polyLen - 1] = (i < dataLen) ? data[i] : '0';
    }
    strncpy(data + dataLen - (polyLen - 1), remainder, polyLen - 1);
}

int verifyCRC(char *data, const char *polynomial) {
    int dataLen = strlen(data);
    int polyLen = strlen(polynomial);
    char remainder[polyLen];

    strncpy(remainder, data, polyLen);
    remainder[polyLen] = '\0';

    for (int i = polyLen; i <= dataLen; i++) {
        if (remainder[0] == '1') {
            xorDivision(remainder, polynomial, polyLen);
        }
        memmove(remainder, remainder + 1, polyLen - 1);
        remainder[polyLen - 1] = (i < dataLen) ? data[i] : '0';
    }
    return (strchr(remainder, '1') == NULL);
}

int main() {
    char data[100];
    printf("Enter binary data: ");
    scanf("%s", data);

    int dataLen = strlen(data);
    int polyLen = strlen(POLYNOMIAL);

    strcat(data, "000");
    computeCRC(data, POLYNOMIAL);

    printf("Transmitted data with CRC: %s\n", data);

    if (verifyCRC(data, POLYNOMIAL)) {
        printf("No errors detected.\n");
    } else {
        printf("Errors detected in received data.\n");
    }
    return 0;
}
