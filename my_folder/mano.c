#include<stdio.h>
#include<conio.h>
int function(){
printf("hello");
}
int main(){
   int(*ptr)();
   ptr=function;
   ptr();
}
