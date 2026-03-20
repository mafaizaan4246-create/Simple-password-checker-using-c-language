#include<stdio.h>
#include<string.h>
int main(){
char password[50];
int length;
printf("Enter your password to check:");
scanf("%s",password);
length=strlen(password);
if(length<7){
printf("Your password is too weak!!");
}
else if(length>=7&&length<=11){
printf("Your password is moderate!!");
}
else{
printf("Your password is strong!!");
}
printf("\nThank you for using our password checker!!");
}
