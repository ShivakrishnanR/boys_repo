#include<stdio.h>
#include<conio.h>
int a=5;
#include<conio.h>
int a=5;
int function(){
printf("hello");
printf("i am shiva");
}
int main(){
   int(*ptr)();
   ptr=function;
   ptr();
}
