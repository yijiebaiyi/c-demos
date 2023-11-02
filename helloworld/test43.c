#include <stdio.h>

// 指针。
// 注释：用int类型保存变量地址不靠谱。（32位系统相等，64位系统不相等）
int main()
{
    // int i;
    // int *p = &i; // p指向i的地址。

    // int *p, q;  // 等同于 int* p,q。 p是指针类型, q是一个普通的int类型。
    // int *p, *q; // p是指针类型, q也是指针类型。

    printf("%d\n", sizeof(int *)); // 8
    printf("%d\n", sizeof(char));  // 1

    int i = 10;

    int foo(int *p);
    int bar(int k);

    foo(&i);
    bar(i);

    // 修改之后的值
    printf("i=%d\n", i); // i=20

    return 0;
}

int foo(int *p)
{
    printf("p=%p\n", p);
    printf("*p=%d\n", *p);

    *p = 20;
}

int bar(int k)
{
    printf("k=%d\n", k);
}