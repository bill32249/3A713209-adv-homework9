#include<iostream> 
int main()
{
    int a, b,c;
    printf("�п�J�@�Ӥ���G");
    scanf("%d%d",&a,&b);
    c = (a*2+b)%3;
        if(c == 0 ) 
        {
			printf("���骺�B�աG���q");
        }
        if(c == 1 ) 
        {
			printf("���骺�B�աG�N");
        }
        if(c == 2 )
        {
			printf("���骺�B�աG�j�N");
        }
	system("PAUSE");
	return 0; 
}
