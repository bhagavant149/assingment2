1.#include<stdio.h>
int main()
{
	int i=4,j=-1,k=0,w,x,y,z;
	w=i||j||k;
	x=i&&j&&k;
	y=i||j&&k;
	z=i&&j||k;
	printf("\nw=%d x=%d y=%d z=%d",w,x,y,z);
	
}
2. #include<stdio.h>
int main()
{
  int i=4,z=12;
if(i = 5&& z>5)
printf(“hello”);
else
printf(“bye”);
}
3.#include<stdio.h>
int main()
{
  int i =4, z =12;
if( i = 5|| z>50)
printf(“\nwelcome in matrix”);
else
printf(“\n you may go now”);
}
4.#include<stdio.h>
int main()
{
    int i =4,j =-1,k =0,y,z;
    y =j+5&&j+1||k+2;
    z = i+5 || j+1 && k+2;
  printf("\n y=%d z=%d",y,z);
}
5.#include<stdio.h>
int main()
{
     int i = -3, j = 3;
     if (!i+!j*1)
       printf("hello");
     else
       printf("bye");

}
6.#include<stdio.h>
int main()
{
     int a= 40;
     if(a>40 && a<45)
       printf(" a is between 40 and 45");
     else
         printf("%d",a);
}
7.#include<stdio.h>
int main()
{
     int a = 65;
     printf("\n a>=65?%d:%c",a);
}
8.#include<stdio.h>
int main()
{
    float a= 0.7;
     if(a<0.7)
       printf("hello");
     else
       printf("bye");
}
9.#include<stdio.h>
int main()
{
   int p = 8, q = 20;
     if(p==5&&q<5)
     printf("hello matrix");
     else
     printf("bye matrix");
}
10.#include<stdio.h>
int main()
{
    int i=-1,j = 1,k,l;
    k = i&&j;
    l = i||j;
   printf("%d%d",i,j);

}
11.#include<stdio.h>
int main()
{
   int j = 4,k;
      k=!5 && j;
     printf("k=%d",k);
}
12.#include<stdio.h>
int main()
{
   int i = -1, j = 1,k,l;
       k = !i&&j;
       l = !i||j;
     printf("%d%d",i,j);
}
13.#include<stdio.h>
int main()
{
  int x = 20, y = 40, z = 45;
  if(x>y && x>z)
      printf("xis max");
  else if(y>x && y>z)
     printf("y is max");
  else
     printf("z is max");
}
14.#include<stdio.h>
int main()
{
  int a,n=30;
    a =( n>5 ? ( n<=10 ? 100:200):500);
   printf("%d",n);
}
15.#include<stdio.h>
int main()
{
  int k = 4;
( !k != 1?
printf("\n hello"):printf("bye"));

}