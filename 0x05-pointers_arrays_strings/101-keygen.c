#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void);
{
const char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTU";
const int password_length = 12;
char password[password_length + 1];

srand(time(NULL));

for (int i = 0; i < password_length; i++)
{
password[i] = valid_chars[rand() % (sizeof(valid_chars) - 1)];
}

password[password_length] = '\0';
printf("%s\n", password);
return (0);
}
}
