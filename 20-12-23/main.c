//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//void reverse(int *p,int l,int r)
//{
//    if(l==r)
//    {
//        p[l]=p[r];
//    }
//    else
//    {
//        int tmp;
//        tmp=p[l];
//        p[l]=p[r];
//        p[r]=tmp;
//        reverse(p,l+1,r-1);
//    }
//}
//int main()
//{
//    int count=0;
//    scanf("%d",&count);
//    int arr[count];
//    int i;
//    for(i=0;i<count;i++)
//        scanf("%d",&arr[i]);
//    reverse(arr,0,count-1);
//    for(i=0;i<count;i++)
//        printf("%d ",arr[i]);
//    return 0;
//}
//int fei(int n)
//{
//    if(n==0)
//        return 0;
//    else if(n==1)
//        return 1;
//    else
//        return fei(n-1)+fei(n-2);
//}
//#include<stdio.h>
//int main()
//{
//    int count=0;
//    int n,m;
//    int flag=0;
//    scanf("%d",&n);
//    for(;(m=fei(count))<n;count++)
//    {
//        if(flag!=0)
//            printf(",");
//        flag=1;
//        printf("%d",m);
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//struct W
//{
//    int w1;
//    int w2;
//    int w3;
//};
//int cmp(const void* a,const void* b)
//{
//    if(((struct W*)a)->w1!=((struct W*)b)->w1)
//        return ((struct W*)a)->w1-((struct W*)b)->w1;
//    else
//    {
//        if(((struct W*)a)->w2!=((struct W*)b)->w2)
//            return ((struct W*)a)->w2-((struct W*)b)->w2;
//        else
//            return ((struct W*)a)->w3-((struct W*)b)->w3;
//    }
//}
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    struct W w[n];
//    int i;
//    for(i=0;i<n;i++)
//    {
//        scanf("%d%d%d",&w[i].w1,&w[i].w2,&w[i].w3);
//    }
//    int (*p)(const void*,const void*)=cmp;
//    qsort(w,n,sizeof(struct W),p);
//    for(i=0;i<n;i++)
//    {
//        printf("%d %d %d\n",w[i].w1,w[i].w2,w[i].w3);
//    }
//    return 0;
//}
#include<stdio.h>
#include<ctype.h>
void pan(char arr[19],int *count)
{
    int sum=0,i,l;
    for(i=0;i<17;i++)
    {
        if(!isdigit(arr[i]))
        {
            printf("%s\n",arr);
            (*count)++;
            return;
        }
    }
    sum=(arr[0]-'0')*7+(arr[1]-'0')*9+(arr[2]-'0')*10+(arr[3]-'0')*5+(arr[4]-'0')*8+(arr[5]-'0')*4
         +(arr[6]-'0')*2+(arr[7]-'0')*1+(arr[8]-'0')*6+(arr[9]-'0')*3+(arr[10]-'0')*7+(arr[11]-'0')*9
         +(arr[12]-'0')*10+(arr[13]-'0')*5+(arr[14]-'0')*8+(arr[15]-'0')*4+(arr[16]-'0')*24;
    l=sum%11;
    switch(l)
    {
    case 0:
        if(arr[17]!='1')
            {
                (*count)++;
                printf("%s\n",arr);
            }
        break;
    case 1:
        if(arr[17]!='0')
            {
                (*count)++;
                printf("%s\n",arr);
            }
        break;
    case 2:
        if(arr[17]!='X')
            {
                (*count)++;
                printf("%s\n",arr);
            }
        break;
    case 3:
        if(arr[17]!='9')
            {
                (*count)++;
                printf("%s\n",arr);
            }
        break;
    case 4:
        if(arr[17]!='8')
           {
               (*count)++;
                printf("%s\n",arr);
            }
        break;
    case 5:
        if(arr[17]!='7')
            {
                (*count)++;
                printf("%s\n",arr);
            }
        break;
    case 6:
        if(arr[17]!='6')
            {
                (*count)++;
                printf("%s\n",arr);
            }
        break;
    case 7:
        if(arr[17]!='5')
            {
                (*count)++;
                printf("%s\n",arr);
            }
        break;
    case 8:
        if(arr[17]!='4')
            {
                (*count)++;
                printf("%s\n",arr);
            }
        break;
    case 9:
        if(arr[17]!='3')
           {
                (*count)++;
                printf("%s\n",arr);
            }
        break;
    case 10:
        if(arr[17]!='2')
            {
                (*count)++;
                printf("%s\n",arr);
            }
        break;
    }
}
int main()
{
    int n,count=0;
    scanf("%d",&n);
    char arr[n][19];
    int i,j;
    getchar();
    for(i=0;i<n;i++)
    {
        for(j=0;j<18;j++)
            scanf("%c",&arr[i][j]);
        arr[i][18]='\0';
        getchar();
    };
    printf("\n");
    for(i=0;i<n;i++)
    {
        pan(arr[i],&count);
    }
    if(count==0)
        printf("All passed");
    return 0;
}
