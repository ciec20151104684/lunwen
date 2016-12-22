#include <iostream>
#define N 1
    struct Node
    {
        char name[40];
        int age;
        struct Node*next;
    };
    int main()
    {
        struct Node*head,*p,*tail;
        int i;
        
        FILE *fp;
        char ch;
        //char *p=NULL;
        fp=fopen("test.txt","r");
        if(fp==NULL)
        {
        	printf("文件打不开\n");
        	exit(-1);
		}
		else
		{
			ch=fgetc(fp);
			while(ch!=EOF)
			{
				printf("%c",ch);
				ch=fgetc(fp);
			}
			fclose(fp);
		}
        
        
        head=new Node;
        head->next=0;
        tail=head;
        //scanf("%s",head->name);
        //scanf("%d",&head->age);
        for(i=0;i<N;i++)
        {
            p=new Node;
            scanf("%s",p->name);
            scanf("%d",&p->age);
            p->next=0;
            tail->next=p;
            tail=p;
        }
        p=head;
        while(p)
        {
            printf("%s %d\n",p->name,p->age);
            p=p->next;
        }
        return 0;
    }
