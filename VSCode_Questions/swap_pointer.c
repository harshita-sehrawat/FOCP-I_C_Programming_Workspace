#include <stdio.h>
int main()
{
int n1=120,n2=300;
int *np=&n1;
int *mp=&n2;

printf("\n *np=%d np address=%d   np address=%p",*np,np,np);
printf("\n *mp=%d mp address=%d   mp address=%p",*mp,mp,mp);

*mp=*np;
printf("\n *np=%d np address=%d   np address=%p",*np,np,np);
printf("\n *mp=%d mp address=%d   mp address=%p",*mp,mp,mp);

}
