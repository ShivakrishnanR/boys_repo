#include<stdio.h>
#include<conio.h>
int a=5;
int function(){
printf("hello");
}
int main(){
   int(*ptr)();
   ptr=function;
   ptr();
}
