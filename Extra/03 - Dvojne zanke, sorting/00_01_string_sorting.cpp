#include <cstring>

#include <string>

#include <iostream>

using namespace std;

int main() {

    char imena[4][10] = {
        "Benjamin",
        "Tjasa",
        "Jure",
        "Ana"
    };

    int n = 4;
    char tmp[10];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(imena[j + 1], imena[j]) < 0) {
                // strcpy("kam", "kaj");

                strcpy(tmp, imena[j]);
                strcpy(imena[j], imena[j + 1]);
                strcpy(imena[j + 1], tmp);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        puts(imena[i]);
    }

    return 0;
}