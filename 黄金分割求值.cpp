#include<stdio.h>              //  ʹ��ʱ�޸� f(x)���� ��[a,b]    ����c  
#include<math.h>
const double e=2.71828;
#define f(x) (pow(e,-x)+x*x)     // f(x)���� 
#define lan(x) (a+(b-a)*0.382)
#define miu(x) (a+(b-a)*0.618)
int main()
{
	double a=0,b=1,c=0.03;    // ��[a,b] �� a<b   cΪĿ�꾫�� 
	while(b-a>=c)
	{
		printf("%lf %lf %lf %lf %lf %lf\n",a,b,lan(a),miu(b),f(lan(a)),f(miu(b)));
		if(f(lan(a))>f(miu(b)))
		   a=lan(a);
		   else
		   b=miu(b);
	}
	printf("%lf %lf %lf %lf %lf %lf\n",a,b,lan(a),miu(b),f(lan(a)),f(miu(b)));
	return 0;
 } 
