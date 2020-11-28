#include<stdio.h> 
#include<stdlib.h>

//��������ѧ������ϵͳ
struct student
{
	char name[20];
	int num;
	
 };
 #include<stdio.h>zzzz
  #include<stdlib.h>
  
  //��������ϰ达瓦达瓦大娃娃大王店
  struct Node//����һ���ṹ�� ģ�� 
  {
      struct student data;
      struct Node* next;    
  } ;
 struct Node* createlist()//�����µ����� 
 {
     struct Node* headnode = (struct Node*)malloc(sizeof(struct Node));
     headnode->next = NULL;
     return headnode; 
  } 
  
  

 struct Node * createnode(struct student data)//�����½ڵ�  ��������ʼֵ 
 {
     struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
     newnode->data = data;
     newnode->next = NULL;
     return newnode; 
 }
 
 
 
 
 struct Node * printlist(struct Node* headNode)//��ӡ���������Ի���  �������ĸ����� 
 {
     struct Node* Pmove = headNode->next;
     printf("name\tnum\t\n");
     while (Pmove)
     {
         printf("%s\t%d\n",Pmove->data.name,Pmove->data.num);
        Pmove = Pmove->next;
     }
     printf("\n");
 }
 
 
 
 
 void insertNodeByHead(struct Node* headnode,struct student data)//���첢ͷ������ڵ�  �������ĸ�����������ڵ��ʼֵ 
	{
     struct Node* newnode = createnode(data);
     newnode->next = headnode->next;
     headnode->next = newnode;
 	}
 
 
 
 
 void deleteNode (struct Node* headnode,int num)//ָ��λ��ɾ���ڵ�  ������Ŀ��������λ������ 
 {
     struct Node* posnode = headnode->next;//��ͷ��ʼѰ�� 
     struct Node* posnodefront = headnode;
     if (posnode == NULL)
         printf("�޷�ɾ��������Ϊ��\n");
    else
     {
         while(posnode->data.num!= num)
         {
             posnodefront = posnode;//�Ʋ�����Ѱ�� 
             posnode = posnodefront->next;
            if (posnode == NULL)
             {
                 printf("û���ҵ������Ϣ\n");
                 return;
             }
         }
         posnodefront ->next = posnode->next;//����ָ�� 
         free(posnode);//�ͷſռ� 
     }
}
 
int main()
{
	struct Node* list = createlist();
	struct student in; 
	char choice; 
	int delnum;
	while (1)                  //¼��ѧ����Ϣ 
	{
		printf("������");
		setbuf(stdin,NULL);
		scanf("%s",in.name);
	
		printf("ѧ�ţ�");
		setbuf(stdin,NULL);
		scanf("%d",&in.num);
		
		insertNodeByHead(list,in);
		printf("�Ƿ��˳���y/n����");
		setbuf(stdin,NULL);
		choice = getchar();
		if (choice == 'y')
		{
			break;
		}
	}
	printlist(list);
	char choice2; 
	while (1)
	{
		printf("�Ƿ�ɾ��ѧ����Ϣ(y/n)��");
		scanf("%s",&choice2);
		
		if(choice2 == 'y')
		{
			printf("������ɾ��ѧ��ѧ�ţ�");
			setbuf(stdin,NULL);
			scanf("%d",&delnum);
			deleteNode(list,delnum);
		}
		else
		{
			break;
		} 
	}
	printlist(list);
	return 0;
}
