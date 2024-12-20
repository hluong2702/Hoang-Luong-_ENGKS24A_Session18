#include<stdio.h>
#include<string.h>

int main(){
    struct sinhVien{
        char name[100];
        int age;
        char phoneNumber[15];

    };

    struct sinhVien x;
    strcpy(x.name,"Hoang Luong");
    x.age = 18;
    strcpy(x.phoneNumber,"0367771862");

    printf("ho ten : %s\n",x.name);
    printf("tuoi: %d\n",x.age);
    printf("so dien thoai: %d\n",x.phoneNumber);

    return 0;
}