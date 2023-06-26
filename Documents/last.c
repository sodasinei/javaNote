#include <stdio.h>
#include <string.h>
struct Customer {
	int id;
	char name[20];
	char gender;
	int age;
	char phone[16];
	char email[20];
};

char key;
int loop = 1;
struct Customer customers[100];
int customerNum = 0;

void add() {
	customers[customerNum].id =customerNum+1;
	printf("\n��������");
	scanf("%s", customers[customerNum].name);
	getchar();
	printf("\n�����Ա�");
	scanf("%c", &customers[customerNum].gender);
	getchar();
	printf("\n��������");
	scanf("%d", &customers[customerNum].age);
	getchar();
	printf("\n����绰");
	scanf("%s", customers[customerNum].phone);
	getchar();
	printf("\n��������");
	scanf("%s", customers[customerNum].email);
	getchar();
	printf("\n-------������");
	customerNum++;
}
int findIndex(int id) {
	int i;
	int index = -1;
	for (i = 0; i < customerNum; i++) {
		if ((customers)[i].id == id) {
			index = i;
		}
	}
	return index;
}
int del(int id) {
	int index = findIndex(id);
	int i;
	if (index == -1) {
		return 0;
	}
	else {
		for (i = index + 1; i < customerNum; i++) {
			customers[i - 1] = customers[i];
		}
		customerNum--;
		return 1;
	}
}
void delView() {
	int id;
	char choice=' ';
	printf("ѡ��ɾ���Ŀͻ����(-1��ʾ���أ���");
	scanf("%d",&id);
	getchar();
	if (id == -1) {
		printf("��ѡ�������");
		return;
	}
	printf("\nȷ��ѡ��ɾ����(y/n)");
	scanf("%c", &choice);
	getchar();
	if (choice == 'y') {
		if (!del(id)) {
			printf("\nɾ��ʧ�ܡ�id������");
		}
		else {
			printf("\nɾ���ɹ�");
			
		}
	}
}
void getCustomerInfo(struct Customer* customer) {
	printf("\n%d\t%s\t%c\t%d\t%s\t%s", (*customer).id, (*customer).name, (*customer).gender, (*customer).age, (*customer).phone, (*customer).email);
}
void listCustomers() {
	printf("\n--------�ͻ��б�--------");
	printf("\nid\tname\tgender\tage\tphone\temail");
	int i;
	for (i = 0; i < customerNum; i++) {
		getCustomerInfo(&customers[i]);
	}
}
void mainMenu() {
	char choice = ' ';
	do {
		printf("\n--------�ͻ���Ϣ�������--------");
		printf("\n		1.��ӿͻ�");
		printf("\n		2.�޸Ŀͻ�");
		printf("\n		3.ɾ���ͻ�");
		printf("\n		4.�ͻ��б�");
		printf("\n		5.��		��");
		printf("\n		ѡ��1-5����");
		scanf("%c", &key);
		getchar();
		switch (key) {
		case '1':
			add();
			break;
		case '2':
			printf("\n�޸Ŀͻ�");
			break;
		case '3':
			delView();
			break;
		case '4':
			listCustomers();
			break;
		case '5':
			do {
				printf("���Ƿ����Ҫ�˳���y/n");
				scanf("%c", &choice);
			} while (choice != 'y' && choice != 'n');
			if (choice == 'y') {
				loop = 0;
			}
		}
	} while (loop);
}

void main() {
	/*customers[0].id = 1;
	customers[0].gender = 'f';
	customers[0].age = 10;
	strcpy(customers[0].name, "li");
	strcpy(customers[0].email, "123@bd.com");
	strcpy(customers[0].phone, "110");*/
	mainMenu();
}



