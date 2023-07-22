1. **Basic text output**
    ```c
    #include <stdio.h>

    int main() {
        printf("Hello, world!\\n");
        // Output: "Hello, world!"
        return 0;
    }
    ```
2. **Printing integer values**
    ```c
    #include <stdio.h>

    int main() {
        int num = 50;
        printf("The number is: %d\\n", num);
        // Output: "The number is: 50"
        return 0;
    }
    ```
3. **Printing floating point numbers**
    ```c
    #include <stdio.h>

    int main() {
        float num = 50.5;
        printf("The number is: %.2f\\n", num);
        // Output: "The number is: 50.50"
        return 0;
    }
    ```
4. **Printing characters**
    ```c
    #include <stdio.h>

    int main() {
        char character = 'A';
        printf("The character is: %c\\n", character);
        // Output: "The character is: A"
        return 0;
    }
    ```
5. **Printing multiple variables**
    ```c
    #include <stdio.h>

    int main() {
        int age = 20;
        float gpa = 3.5;
        printf("Age: %d, GPA: %.2f\\n", age, gpa);
        // Output: "Age: 20, GPA: 3.50"
        return 0;
    }
    ```
6. **Printing strings**
    ```c
    #include <stdio.h>

    int main() {
        char *name = "John Doe";
        printf("Name: %s\\n", name);
        // Output: "Name: John Doe"
        return 0;
    }
    ```
7. **Printing formatted dates**
    ```c
    #include <stdio.h>

    int main() {
        int day = 15, month = 3, year = 2023;
        printf("Date: %02d/%02d/%04d\\n", day, month, year);
        // Output: "Date: 15/03/2023"
        return 0;
    }
    ```
8. **Printing hexadecimal numbers**
    ```c
    #include <stdio.h>

    int main() {
        int num = 255;
        printf("Hexadecimal: %x\\n", num);
        // Output: "Hexadecimal: ff"
        return 0;
    }
    ```
9. **Printing scientific notation**
    ```c
    #include <stdio.h>

    int main() {
        double num = 3000.75;
        printf("Scientific notation: %e\\n", num);
        // Output: "Scientific notation: 3.000750e+03"
        return 0;
    }
    ```
10. **Printing percentage**
    ```c
    #include <stdio.h>

    int main() {
        double percentage = 0.85;
        printf("Percentage: %.2f%%\\n", percentage * 100);
        // Output: "Percentage: 85.00%"
        return 0;
    }
    ```
11. **Printing right-justified text**
    ```c
    #include <stdio.h>

    int main() {
        printf("%20s\\n", "Hello, world!");
        // Output: "       Hello, world!"
        return 0;
    }
    ```
12. **Printing left-justified text**
    ```c
    #include <stdio.h>

    int main() {
        printf("%-20s\\n", "Hello, world!");
        // Output: "Hello, world!       "
        return 0;
    }
    ```
13. **Printing a string with a maximum width**
    ```c
    #include <stdio.h>

    int main() {
        char *str = "Hello, world!";
        printf("%.5s\\n", str);
        // Output: "Hello"
        return 0;
    }
    ```
14. **Printing the memory address of a variable**
    ```c
    #include <stdio.h>

    int main() {
        int num = 10;
        printf("Address: %p\\n", (void*)&num);
        // Output: "Address: 0x7ffeefbff58c" (example address)
        return 0;
    }
    ```
15. **Printing a formatted table**
    ```c
    #include <stdio.h>

    int main() {
        printf("%-10s | %10s | %10s\\n", "Product", "Quantity", "Price");
        printf("%-10s | %10d | %10.2f\\n", "Apples", 10, 1.25);
        printf("%-10s | %10d | %10.2f\\n", "Bananas", 5, 0.75);
        // Output: 
        // "Product    |   Quantity |      Price"
        // "Apples     |         10 |       1.25"
        // "Bananas    |          5 |       0.75"
        return 0;
    }
    ```
16. **Printing in a loop**
    ```c
    #include <stdio.h>

    int main() {
        for (int i = 0; i < 5; i++) {
            printf("Iteration: %d\\n", i + 1);
        }
        // Output: 
        // "Iteration: 1"
        // "Iteration: 2"
        // "Iteration: 3"
        // "Iteration: 4"
        // "Iteration: 5"
        return 0;
    }
    ```
17. **Printing formatted time (using time.h)**
    ```c
    #include <stdio.h>
    #include <time.h>

    int main() {
        time_t now = time(NULL);
        struct tm *t = localtime(&now);
        printf("%02d:%02d:%02d\\n", t->tm_hour, t->tm_min, t->tm_sec);
        // Output: "13:26:32" (current time)
        return 0;
    }
    ```
18. **Printing with variable width**
    ```c
    #include <stdio.h>

    int main() {
        int width = 5;
        printf("%*s\\n", width, "Hi");
        // Output: "   Hi" (width of 5)
        return 0;
    }
    ```
19. **Printing with variable precision**
    ```c
    #include <stdio.h>

    int main() {
        double num = 1.23456;
        int precision = 3;
        printf("%.*f\\n", precision, num);
        // Output: "1.235" (3 decimal places)
        return 0;
    }
    ```
20. **Printing long long integers**
    ```c
    #include <stdio.h>

    int main() {
        long long int big_num = 123456789012345LL;
        printf("Big number: %lld\\n", big_num);
        // Output: "Big number: 123456789012345"
        return 0;
    }
    ```
21. **Printing double in fixed-point notation**
    ```c
    #include <stdio.h>

    int main() {
        double num = 3.14159265;
        printf("Pi: %.5f\\n", num);
        // Output: "Pi: 3.14159"
        return 0;
    }
    ```
22. **Printing ASCII values of characters**
    ```c
    #include <stdio.h>

    int main() {
        char c = 'A';
        printf("ASCII value of %c: %d\\n", c, c);
        // Output: "ASCII value of A: 65"
        return 0;
    }
    ```
23. **Printing complex number (using complex.h)**
    ```c
    #include <stdio.h>
    #include <complex.h>

    int main() {
        double complex z = 1.0 + 2.0*I;
        printf("Real part: %.2f\\n", creal(z));
        printf("Imaginary part: %.2f\\n", cimag(z));
        // Output: 
        // "Real part: 1.00"
        // "Imaginary part: 2.00"
        return 0;
    }
    ```
24. **Printing a binary number**
    ```c
    #include <stdio.h>

    void print_binary(int num) {
        for (int i = 31; i >= 0; i--) {
            printf("%d", (num >> i) & 1);
        }
        printf("\\n");
    }

    int main() {
        print_binary(10);
        // Output: "00000000000000000000000000001010"
        return 0;
    }
    ```
25. **Printing a memory dump (advanced)**
    ```c
    #include <stdio.h>

    void print_memory(void *mem, size_t len) {
        unsigned char *bytes = (unsigned char*)mem;
        for (size_t i = 0; i < len; i++) {
            printf("%02x ", bytes[i]);
            if ((i + 1) % 16 == 0) printf("\\n");
        }
        printf("\\n");
    }

    int main() {
        int arr[4] = {1, 2, 3, 4};
        print_memory(arr, sizeof(arr));
        // Output: "01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00"
        return 0;
    }
    ```
