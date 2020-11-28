 #include<stdio.h>
  #include<stdlib.h>
  
  //��������ϰ
  struct Node//����һ���ṹ�� ģ�� 
  {
      int data;
      struct Node* next;    
  } ;
 struct Node* createlist()//�����µ����� 
 {
     struct Node* headnode = (struct Node*)malloc(sizeof(struct Node));
     headnode->next = NULL;
     return headnode; 
  } 
  
  

 struct Node * createnode(int data)//�����½ڵ�  ��������ʼֵ 
 {
     struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
     newnode->data = data;
     newnode->next = NULL;
     return newnode; 
 }
 
 
 
 
 struct Node * printlist(struct Node* headNode)//��ӡ�������Ի���  �������ĸ����� 
 {
     struct Node* Pmove = headNode->next;
     while (Pmove)
     {
         printf("%d",Pmove->data);
        Pmove = Pmove->next;
     }
     printf("\n");
 }
 
 
 
 
 void insertNodeByHead(struct Node* headnode,int data)//���첢ͷ������ڵ�  �������ĸ���������ڵ��ʼֵ 
	{
     struct Node* newnode = createnode(data);
     newnode->next = headnode->next;
     headnode->next = newnode;
 	}
 
 
 
 
 void deleteNode (struct Node* headnode,int posdata)//ָ��λ��ɾ���ڵ�  ������Ŀ������λ������ 
 {
     struct Node* posnode = headnode->next;//��ͷ��ʼѰ�� 
     struct Node* posnodefront = headnode;
     if (posnode == NULL)
         printf("�޷�ɾ��������Ϊ��\n");
    else
     {
         while(posnode->data != posdata)
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
