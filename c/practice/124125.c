#include<stdio.h> 
#include<stdlib.h>

//尝试制作学生管理系统

 struct student
{
	char name[20];
	int num;
	
 }DATE,*PDATE;
 #include<stdio.h>zzzz
  #include<stdlib.h>
  
  //单链表练习
  typedef struct Node//定义一个结构体 模板 
  {
      struct student data;
      struct Node* next;    
  }DATE,*PDATE;
 PNODE* createlist()//创建新的链表 
 {
     struct Node* headnode = (struct Node*)malloc(sizeof(struct Node));
     headnode->next = NULL;
     return headnode; 
  } 
  
  

 struct Node * createnode(struct student data)//创建新节点  参数：初始值 
 {
     struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
     newnode->data = data;
     newnode->next = NULL;
     return newnode; 
 }
 
 
 
 
 struct Node * printlist(struct Node* headNode)//打印链表，测试环节  参数：哪个链表 
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
 
 
 
 
 void insertNodeByHead(struct Node* headnode,struct student data)//创造并头部插入节点  参数：哪个链表，插入节点初始值 
	{
     struct Node* newnode = createnode(data);
     newnode->next = headnode->next;
     headnode->next = newnode;
 	}
 
 
 
 
 void deleteNode (struct Node* headnode,int num)//指定位置删除节点  参数：目标链表，位置数据 
 {
     struct Node* posnode = headnode->next;//重头开始寻找 
     struct Node* posnodefront = headnode;
     if (posnode == NULL)
         printf("无法删除，链表为空\n");
    else
     {
         while(posnode->data.num!= num)
         {
             posnodefront = posnode;//移步向下寻找 
             posnode = posnodefront->next;
            if (posnode == NULL)
             {
                 printf("没有找到相关信息\n");
                 return;
             }
         }
         posnodefront ->next = posnode->next;//重组指向 
         free(posnode);//释放空间 
     }
}
 
int main()
{
	struct Node* list = createlist();
	struct student in; 
	char choice; 
	int delnum;
	while (1)                  //录入学生信息 
	{
		printf("姓名：");
		setbuf(stdin,NULL);
		scanf("%s",in.name);
	
		printf("学号：");
		setbuf(stdin,NULL);
		scanf("%d",&in.num);
		
		insertNodeByHead(list,in);
		printf("是否退出（y/n）：");
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
		printf("是否删除学生信息(y/n)：");
		scanf("%s",&choice2);
		
		if(choice2 == 'y')
		{
			printf("请输入删除学生学号：");
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
