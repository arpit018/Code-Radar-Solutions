#include <stdio.h>

int main(){
    char name[100];
    char age[100];
    char hobby[100];
    scanf("%s", &name);
    scanf("%s", &age);
    scanf("%s", &hobby);
    printf("Name: %s\nAge: %s\nHobby: %s",name,age,hobby);
}