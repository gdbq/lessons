//https://github.com/gdbq/lessons/tree/main/pr3

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
    long long login,password;
    printf("Login=");
    (void)scanf("%lld", &login);
    printf("Passoword=");
    (void)scanf("%lld", &password);
  
  
    if (((login == 5656) && (password == 6565)) || ((login == 2323) && (password == 3232)) || ((login == 1515) && (password == 5151))) {

        printf("OK");
    }
    else {

        printf("Error");
        
    }


}