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
void insertStudent(struct Student student[], int *count, int position, struct Student newStudent);

int main() { 
    int count = 5; 
    struct Student student[50] = 
    {
        {1,"Hoang Van Luong",18,"0367771862"},
        {2,"Hoang Van Luong",19,"0367771862"},
        {3,"Hoang Van Luong",20,"00367771862"},
        {4,"Hoang Van Luong",21,"0367771862"},
        {5,"Hoang Van Luong",21,"0367771862"},
    };
    showStudent(student,count);
    int position;
    struct Student newStudent;
    printf("Nhap vi tri can chen : ");
    scanf("%d", &position);
    printf("Nhap ID: ");
    scanf("%d", &newStudent.id);
    fflush(stdin);
    printf("Nhap ten: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    printf("Nhap tuoi: ");
    scanf("%d", &newStudent.age);
    fflush(stdin);
    printf("Nhap so dien thoai: ");
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);
    insertStudent(student, &count, position, newStudent);
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
void insertStudent(struct Student student[], int *count, int position, struct Student newStudent) {
    for (int i = *count; i > position; i--) {
        student[i] = student[i - 1];
    }
    student[position] = newStudent;
    (*count)++;
}