#include<stdio.h>
#include<unistd.h>

int main() {
   execl("./hello", "./hello", (char *)0);
   printf("This wouldn't print\n");
   return 0;
}
