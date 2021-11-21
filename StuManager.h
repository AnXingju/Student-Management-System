#include <stdio.h>

typedef struct book
{
	char bnum[10];						//�鼮���
	char bname[30];						//����
	char bauthor[20];					//����
	char bclassfy[10];					//�����
	float bprice;						//�۸�
	struct book* next;					//����ָ��
}BookInfo;

BookInfo* CreateBooksList();			//��������
void Insert(BookInfo* head);			//����
void Delete(BookInfo* head);			//ɾ��
void Print(BookInfo* head);				//���
void Search(BookInfo* head);			//��ѯ
void Update(BookInfo* head);			//�޸�
void Save(BookInfo* head);				//����
int menu();								//�˵�