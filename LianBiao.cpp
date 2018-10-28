#include "cstdio"
#include "cstdlib"

struct node{
    int data;
    node *next;
};//设置结构体

node *create(int a[]){
    node *p,*pre,*head;
    head=new node;
    head->next=NULL;
    pre=head;


    for(int i=0;i<5;i++)
    {
        p=new node;
        p->next=NULL;
        p->data=a[i];
        pre->next=p;
        pre=p;
    }

    return head;
}    //创建链表

int search(node *head,int x)    //查询链表
{

     int count=0;
    node* s=head;
    //s=s->next;
    while (s!=NULL) {
        while (s->data == x) {
            count++;
            //printf("sdfsdfsdfsdfsd");
            break;
        }
        s = s->next;
    }
   // printf("%d\n",count);

    return count;

}


int deletc(node *head,int  x)     //删除链表
{
    node *p=head->next;
    node *pre=head;
    while (p!=NULL)
    {
        if (p->data==x) {
            pre->next = p->next;
            delete (p);
            p = pre->next;
        }else{
            pre=p;
            p=p->next;
        }

    }

}


int show(node *head){          //显示链表
    node* L1=head->next;
    while (L1!=NULL)
    {
        printf("%d",L1->data);
        L1=L1->next;
        //printf("打发第三方士大夫士大夫");
    }


}        //显示链表


int main()                        //main函数
{
    int a[5]={9 ,1,6,9,9};

    node *L=create(a);
    deletc(L,9);
    show(L);




    return 0;
}