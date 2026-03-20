#include<stdio.h>
int function(){
printf("hello");
}
int main(){
   int(*ptr)();
   ptr=function;
   ptr();
}