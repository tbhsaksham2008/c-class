#include <stdio.h>
#include <string.h>
int main(){
    char str1[]="Hello";
    char str2[]="World";
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    strcpy(str2, str1);
    printf("str2: %s\n", str2);
    return 0;
}
// In this code, we include the necessary header files for input/output and string manipulation. We define two character arrays, `str1` and `str2`, initialized with the strings "Hello" and "World" respectively. We then use the `strcpy` function to copy the contents of `str1` into `str2`. Finally, we print the contents of `str2`, which will now be "Hello". The program returns 0 to indicate successful execution.