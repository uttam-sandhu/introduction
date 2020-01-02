#include <stdio.h>
#include <stdlib.h>

struct cust{
char name[20];
int bal;
int acc_no;
}c[4];

void display(struct cust cc){

    printf("\n%s %d %d",cc.name,cc.acc_no,cc.bal);

}
void filter(int min){
    int i;
    for(i=0;i<4;i++){
        if(c[i].bal<min)
            display(c[i]);
    }
}

void wdr(int acc,int am){
    int i;
for(i=0;i<4;i++){
        if(c[i].acc_no==acc){
            c[i].bal-=am;
        }

}

}

void dep(int acc,int am){
    int i;
for(i=0;i<4;i++){
        if(c[i].acc_no==acc){
            c[i].bal+=am;
        }

}

}


void main()
{
int i,s,acc,am;
for(i=0;i<4;i++)
    scanf("%s%d%d",c[i].name,&c[i].acc_no,&c[i].bal);
printf("enter 1 for dep 2 for withd");

scanf("%d %d %d",&s,&acc,&am);

switch(s){
case 1:
    dep(acc,am);
    break;
case 2:
    wdr(acc,am);
    break;

}
for(i=0;i<4;i++)
    display(c[i]);

}
