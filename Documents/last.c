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
	printf("\n输入名字");
	scanf("%s", customers[customerNum].name);
	getchar();
	printf("\n输入性别");
	scanf("%c", &customers[customerNum].gender);
	getchar();
	printf("\n输入年龄");
	scanf("%d", &customers[customerNum].age);
	getchar();
	printf("\n输入电话");
	scanf("%s", customers[customerNum].phone);
	getchar();
	printf("\n输入邮箱");
	scanf("%s", customers[customerNum].email);
	getchar();
	printf("\n-------添加完成");
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
	printf("选择删除的客户编号(-1表示返回）：");
	scanf("%d",&id);
	getchar();
	if (id == -1) {
		printf("你选择放弃了");
		return;
	}
	printf("\n确认选择删除吗？(y/n)");
	scanf("%c", &choice);
	getchar();
	if (choice == 'y') {
		if (!del(id)) {
			printf("\n删除失败。id不存在");
		}
		else {
			printf("\n删除成功");
			
		}
	}
}
void getCustomerInfo(struct Customer* customer) {
	printf("\n%d\t%s\t%c\t%d\t%s\t%s", (*customer).id, (*customer).name, (*customer).gender, (*customer).age, (*customer).phone, (*customer).email);
}
void listCustomers() {
	printf("\n--------客户列表--------");
	printf("\nid\tname\tgender\tage\tphone\temail");
	int i;
	for (i = 0; i < customerNum; i++) {
		getCustomerInfo(&customers[i]);
	}
}
void mainMenu() {
	char choice = ' ';
	do {
		printf("\n--------客户信息管理软件--------");
		printf("\n		1.添加客户");
		printf("\n		2.修改客户");
		printf("\n		3.删除客户");
		printf("\n		4.客户列表");
		printf("\n		5.退		出");
		printf("\n		选择（1-5）：");
		scanf("%c", &key);
		getchar();
		switch (key) {
		case '1':
			add();
			break;
		case '2':
			printf("\n修改客户");
			break;
		case '3':
			delView();
			break;
		case '4':
			listCustomers();
			break;
		case '5':
			do {
				printf("你是否真的要退出？y/n");
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



