# include<stdio.h>

int main() {

    // sum karne ke liye humme do veriable chahiye ex: a anb b.
    int a, b;

    //sum karne ke liye sbse pele humme prinf ke function me veriable a likhana hoga .
    printf("enter a");
    // then humme scanf ke function ka use karna hoga . [format of scanf : ("%d 'ye int ka f.s he '" , &a 'yaha & ka use variable ko memory me savve karne ka he' and a is a variable)] .
    scanf("%d", &a);

    printf("enter b");
    scanf("%d", &b);

    // yaha int sum = a+b ka use karke then printf("sum is : %d", sum) ka bhi use kar sakte the .
    
    printf("sum is : %d", a / b);

    // yaha sum nhi suptraction , multiply or dividation bhi ho sakta he.
    /*
    add = +
    sub = -
    mul = *
    div = /
    */

    return 0;
}