#include<stdio.h>              //  使用时修改 f(x)函数 界[a,b]    精度c  
#include<math.h>
const double e=2.71828;
#define f(x) (pow(e,-x)+x*x)     // f(x)函数 
#define lan(x) (a+(b-a)*0.382)
#define miu(x) (a+(b-a)*0.618)
int main()
{
	double a=0,b=1,c=0.03;    // 界[a,b] 且 a<b   c为目标精度 
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
