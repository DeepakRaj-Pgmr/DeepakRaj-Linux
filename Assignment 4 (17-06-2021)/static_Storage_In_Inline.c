/*
3.	Why inline function needs static storage class ?
*/
/*
In the below program consider the inline function foo() which return the value 10 on execution
*/
#include <stdio.h>
inline int foo()
{
    return 10;
}
int main()
{
    printf("%d",foo());
    return 0;
}
/*Output: Compilation Error
undefined reference to `foo'

Because if we write inlinefunction c there will be no external 
or internal linkage to the inline function.

So to avoid this error we add static keyword for internal linkage
and extern keyword for external linkage beforn inline token.

Thus static/extern keyword forces the compiler to consider this inline function in the linker
*/
//Using static
#include <stdio.h>
static inline int foo()  //or extern inline int foo()
{
    return 10;
}
int main()
{
    printf("%d",foo());
    return 0;
}
/*
Output:
10
*/