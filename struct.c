#include<stdio.h>

// check how to define strunt in C language
struct user {
    int id;
    char    name[20];
    int age;
};

int main(void) {
    struct user users[20]={
        {9501551, "三輪拓真", 22}
    };
    printf("id: %d, name: %s, age: %d\n", users[0].id, users[0].name, users[0].age);
}