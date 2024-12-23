#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Student {
    int id;
    char name[100];
    int age;
    char phoneNumber[100];
};

void showStudent(struct Student student[], int count);
void sortStudent(struct Student student[], int count);

int main() {
    struct Student student[5] = 
    {
       {1,"Hoang Van Luong",18,"0367771862"},
        {2,"Hoang Van Luong",19,"0367771862"},
        {3,"Hoang Van Luong",20,"00367771862"},
        {4,"Hoang Van Luong",21,"0367771862"},
        {5,"Hoang Van Luong",21,"0367771862"},
    }; 
    int count = 5;
    sortStudent(student, count);
    showStudent(student,count);
}

void showStudent(struct Student student[], int count) {
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < count; i++) {
        printf("ID : %d\n", student[i].id);
        printf("Ten : %s\n", student[i].name);
        printf("Tuoi : %d\n", student[i].age);
        printf("So dien thoai : %s\n", student[i].phoneNumber);
        printf("\n");
    }
}

void sortStudent(struct Student student[], int count){
    struct Student temp;
    for (int i = 0; i < count-1; i++) {
        for (int j = i+1; j < count; j++) {
            if (strcmp(student[i].name, student[j].name) > 0) {
                temp = student[i];
                student[i] = student[j];
                student[j] = temp;
            }
        }
    }
}