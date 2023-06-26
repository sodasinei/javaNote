#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i,j;
// 定义学生结构体
typedef struct {
    char studentId[20];
    char name[50];
    int age;
    char gender[10];
    char birthdate[20];
    char address[100];
    char phoneNumber[20];
    char email[50];
} Student;

// 函数声明
void menu();
void addStudent();
void displayStudents();
void searchStudentById();
void searchStudentByName();
void deleteStudent();
void updateStudent();

// 全局变量
Student students[100];
int numStudents = 0;

int main() {
    int choice;

    do {
        menu();
        printf("请选择操作：");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudentById();
                break;
            case 4:
                searchStudentByName();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                updateStudent();
                break;
            case 0:
                printf("感谢使用！\n");
                break;
            default:
                printf("无效的选项，请重新选择。\n");
        }
    } while (choice != 0);

    return 0;
}

void menu() {
    printf("\n====== 学生信息管理系统 ======\n");
    printf("1. 录入学生信息\n");
    printf("2. 浏览学生信息\n");
    printf("3. 按学号查询学生信息\n");
    printf("4. 按姓名查询学生信息\n");
    printf("5. 删除学生信息\n");
    printf("6. 修改学生信息\n");
    printf("0. 退出系统\n");
    printf("==============================\n");
}

void addStudent() {
    if (numStudents >= 100) {
        printf("学生信息已满，无法继续录入。\n");
        return;
    }

    Student newStudent;

    printf("请输入学号：");
    scanf("%s", newStudent.studentId);
    printf("请输入姓名：");
    scanf("%s", newStudent.name);
    printf("请输入年龄：");
    scanf("%d", &newStudent.age);
    printf("请输入性别：");
    scanf("%s", newStudent.gender);
    printf("请输入出生年月：");
    scanf("%s", newStudent.birthdate);
    printf("请输入地址：");
    scanf("%s", newStudent.address);
    printf("请输入电话：");
    scanf("%s", newStudent.phoneNumber);
    printf("请输入电子邮件：");
    scanf("%s", newStudent.email);

    students[numStudents] = newStudent;
    numStudents++;

    printf("学生信息录入成功！\n");
}

void displayStudents() {
    if (numStudents == 0) {
        printf("暂无学生信息。\n");
        return;
    }

    printf("学号\t姓名\t年龄\t性别\t出生年月\t\t地址\t\t电话\t\t\t邮箱\n");
    printf("================================================================================================\n");
    for (i = 0; i < numStudents; i++) {
        printf("%s\t%s\t%d\t%s\t%s\t%s\t%s\t%s\n",
               students[i].studentId, students[i].name, students[i].age, students[i].gender,
               students[i].birthdate, students[i].address, students[i].phoneNumber, students[i].email);
    }
    printf("================================================================================================\n");
}

void searchStudentById() {
    char targetId[20];
    int found = 0;

    printf("请输入要查询的学号：");
    scanf("%s", targetId);

    for (i = 0; i < numStudents; i++) {
        if (strcmp(students[i].studentId, targetId) == 0) {
            printf("学号\t姓名\t年龄\t性别\t出生年月\t\t地址\t\t电话\t\t\t邮箱\n");
            printf("================================================================================================\n");
            printf("%s\t%s\t%d\t%s\t%s\t%s\t%s\t%s\n",
                   students[i].studentId, students[i].name, students[i].age, students[i].gender,
                   students[i].birthdate, students[i].address, students[i].phoneNumber, students[i].email);
            printf("================================================================================================\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("未找到该学号对应的学生信息。\n");
    }
}

void searchStudentByName() {
    char targetName[50];
    int found = 0;

    printf("请输入要查询的姓名：");
    scanf("%s", targetName);

    for (i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, targetName) == 0) {
            printf("学号\t姓名\t年龄\t性别\t出生年月\t\t地址\t\t电话\t\t\t邮箱\n");
            printf("================================================================================================\n");
            printf("%s\t%s\t%d\t%s\t%s\t%s\t%s\t%s\n",
                   students[i].studentId, students[i].name, students[i].age, students[i].gender,
                   students[i].birthdate, students[i].address, students[i].phoneNumber, students[i].email);
            printf("================================================================================================\n");
            found = 1;
        }
    }

    if (!found) {
        printf("未找到该姓名对应的学生信息。\n");
    }
}

void deleteStudent() {
    char targetId[20];
    int found = 0;

    printf("请输入要删除的学号：");
    scanf("%s", targetId);

    for (i = 0; i < numStudents; i++) {
        if (strcmp(students[i].studentId, targetId) == 0) {
            found = 1;
            for (j = i; j < numStudents - 1; j++) {
                students[j] = students[j + 1];
            }
            numStudents--;
            printf("学生信息删除成功！\n");
            break;
        }
    }

    if (!found) {
        printf("未找到该学号对应的学生信息，无法删除。\n");
    }
}

void updateStudent() {
    char targetId[20];
    int found = 0;

    printf("请输入要修改的学号：");
    scanf("%s", targetId);

    for (i = 0; i < numStudents; i++) {
        if (strcmp(students[i].studentId, targetId) == 0) {
            printf("请输入新的姓名：");
            scanf("%s", students[i].name);
            printf("请输入新的年龄：");
            scanf("%d", &students[i].age);
            printf("请输入新的性别：");
            scanf("%s", students[i].gender);
            printf("请输入新的出生年月：");
            scanf("%s", students[i].birthdate);
            printf("请输入新的地址：");
            scanf("%s", students[i].address);
            printf("请输入新的电话：");
            scanf("%s", students[i].phoneNumber);
            printf("请输入新的电子邮件：");
            scanf("%s", students[i].email);

            printf("学生信息修改成功！\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("未找到该学号对应的学生信息，无法修改。\n");
    }
}

