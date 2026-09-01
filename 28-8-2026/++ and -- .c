#include<stdio.h>
int main(){
    int a=10;
    printf ("a++=%d\n",a++);
    printf ("++a=%d\n",++a);
    printf ("a=%d\n",a);
    printf ("a--=%d\n",a--);
    printf ("--a=%d\n",--a);
    printf ("a=%d\n",a);
}

// a++ is the post-increment operator, which means it increases the value of 'a' by 1, but returns the original value before the increment.
// ++a is the pre-increment operator, which means it increases the value of 'a' by 1 and returns the new value after the increment.
// a-- is the post-decrement operator, which means it decreases the value of 'a' by 1, but returns the original value before the decrement.
// --a is the pre-decrement operator, which means it decreases the value of 'a' by 1 and returns the new value after the decrement.