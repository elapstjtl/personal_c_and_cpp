 #include<stdio.h>
  #include<stdlib.h>
  
  //单链表练习
  struct Node//定义一个结构体 模板 
  {
      int data;
      struct Node* next;    
  } ;
 struct Node* createlist()//创建新的链表 
 {
     struct Node* headnode = (struct Node*)malloc(sizeof(struct Node));
     headnode->next = NULL;
     return headnode; 
  } 
  
  

 struct Node * createnode(int data)//创建新节点  参数：初始值 
 {
     struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
     newnode->data = data;
     newnode->next = NULL;
     return newnode; 
 }
 
 
 
 
 struct Node * printlist(struct Node* headNode)//打印链表，测试环节  参数：哪个链表 
 {
     struct Node* Pmove = headNode->next;
     while (Pmove)
     {
         printf("%d",Pmove->data);
        Pmove = Pmove->next;
     }
     printf("\n");
 }
 
 
 
 
 void insertNodeByHead(struct Node* headnode,int data)//创造并头部插入节点  参数：哪个链表，插入节点初始值 
	{
     struct Node* newnode = createnode(data);
     newnode->next = headnode->next;
     headnode->next = newnode;
 	}
 
 
 
 
 void deleteNode (struct Node* headnode,int posdata)//指定位置删除节点  参数：目标链表，位置数据 
 {
     struct Node* posnode = headnode->next;//重头开始寻找 
     struct Node* posnodefront = headnode;
     if (posnode == NULL)
         printf("无法删除，链表为空\n");
    else
     {
         while(posnode->data != posdata)
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
     insertNodeByHead(list,1);
     insertNodeByHead(list,2);
     insertNodeByHead(list,3);
     insertNodeByHead(list,4);
     printlist(list);
     
	 deleteNode(list,3);       
     printlist(list);
     
     deleteNode(list,1);
     deleteNode(list,2);
     deleteNode(list,4);
     printlist(list);
     
     deleteNode(list,3);
     return 0;
 }
