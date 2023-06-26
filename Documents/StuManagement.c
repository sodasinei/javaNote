#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i,j;
// ����ѧ���ṹ��
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

// ��������
void menu();
void addStudent();
void displayStudents();
void searchStudentById();
void searchStudentByName();
void deleteStudent();
void updateStudent();

// ȫ�ֱ���
Student students[100];
int numStudents = 0;

int main() {
    int choice;

    do {
        menu();
        printf("��ѡ�������");
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
                printf("��лʹ�ã�\n");
                break;
            default:
                printf("��Ч��ѡ�������ѡ��\n");
        }
    } while (choice != 0);

    return 0;
}

void menu() {
    printf("\n====== ѧ����Ϣ����ϵͳ ======\n");
    printf("1. ¼��ѧ����Ϣ\n");
    printf("2. ���ѧ����Ϣ\n");
    printf("3. ��ѧ�Ų�ѯѧ����Ϣ\n");
    printf("4. ��������ѯѧ����Ϣ\n");
    printf("5. ɾ��ѧ����Ϣ\n");
    printf("6. �޸�ѧ����Ϣ\n");
    printf("0. �˳�ϵͳ\n");
    printf("==============================\n");
}

void addStudent() {
    if (numStudents >= 100) {
        printf("ѧ����Ϣ�������޷�����¼�롣\n");
        return;
    }

    Student newStudent;

    printf("������ѧ�ţ�");
    scanf("%s", newStudent.studentId);
    printf("������������");
    scanf("%s", newStudent.name);
    printf("���������䣺");
    scanf("%d", &newStudent.age);
    printf("�������Ա�");
    scanf("%s", newStudent.gender);
    printf("������������£�");
    scanf("%s", newStudent.birthdate);
    printf("�������ַ��");
    scanf("%s", newStudent.address);
    printf("������绰��");
    scanf("%s", newStudent.phoneNumber);
    printf("����������ʼ���");
    scanf("%s", newStudent.email);

    students[numStudents] = newStudent;
    numStudents++;

    printf("ѧ����Ϣ¼��ɹ���\n");
}

void displayStudents() {
    if (numStudents == 0) {
        printf("����ѧ����Ϣ��\n");
        return;
    }

    printf("ѧ��\t����\t����\t�Ա�\t��������\t\t��ַ\t\t�绰\t\t\t����\n");
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

    printf("������Ҫ��ѯ��ѧ�ţ�");
    scanf("%s", targetId);

    for (i = 0; i < numStudents; i++) {
        if (strcmp(students[i].studentId, targetId) == 0) {
            printf("ѧ��\t����\t����\t�Ա�\t��������\t\t��ַ\t\t�绰\t\t\t����\n");
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
        printf("δ�ҵ���ѧ�Ŷ�Ӧ��ѧ����Ϣ��\n");
    }
}

void searchStudentByName() {
    char targetName[50];
    int found = 0;

    printf("������Ҫ��ѯ��������");
    scanf("%s", targetName);

    for (i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, targetName) == 0) {
            printf("ѧ��\t����\t����\t�Ա�\t��������\t\t��ַ\t\t�绰\t\t\t����\n");
            printf("================================================================================================\n");
            printf("%s\t%s\t%d\t%s\t%s\t%s\t%s\t%s\n",
                   students[i].studentId, students[i].name, students[i].age, students[i].gender,
                   students[i].birthdate, students[i].address, students[i].phoneNumber, students[i].email);
            printf("================================================================================================\n");
            found = 1;
        }
    }

    if (!found) {
        printf("δ�ҵ���������Ӧ��ѧ����Ϣ��\n");
    }
}

void deleteStudent() {
    char targetId[20];
    int found = 0;

    printf("������Ҫɾ����ѧ�ţ�");
    scanf("%s", targetId);

    for (i = 0; i < numStudents; i++) {
        if (strcmp(students[i].studentId, targetId) == 0) {
            found = 1;
            for (j = i; j < numStudents - 1; j++) {
                students[j] = students[j + 1];
            }
            numStudents--;
            printf("ѧ����Ϣɾ���ɹ���\n");
            break;
        }
    }

    if (!found) {
        printf("δ�ҵ���ѧ�Ŷ�Ӧ��ѧ����Ϣ���޷�ɾ����\n");
    }
}

void updateStudent() {
    char targetId[20];
    int found = 0;

    printf("������Ҫ�޸ĵ�ѧ�ţ�");
    scanf("%s", targetId);

    for (i = 0; i < numStudents; i++) {
        if (strcmp(students[i].studentId, targetId) == 0) {
            printf("�������µ�������");
            scanf("%s", students[i].name);
            printf("�������µ����䣺");
            scanf("%d", &students[i].age);
            printf("�������µ��Ա�");
            scanf("%s", students[i].gender);
            printf("�������µĳ������£�");
            scanf("%s", students[i].birthdate);
            printf("�������µĵ�ַ��");
            scanf("%s", students[i].address);
            printf("�������µĵ绰��");
            scanf("%s", students[i].phoneNumber);
            printf("�������µĵ����ʼ���");
            scanf("%s", students[i].email);

            printf("ѧ����Ϣ�޸ĳɹ���\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("δ�ҵ���ѧ�Ŷ�Ӧ��ѧ����Ϣ���޷��޸ġ�\n");
    }
}

