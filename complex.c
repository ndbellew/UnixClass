#include <stdio.h>
#include <math.h>

float f(float x){
	return x*x+x*sin(x);
	}
	
float integrate(float a, float b, float rError){
	float fa = f(a);
	float fb = f(b);
	float a1=(fa+fb)*(b-a)/2.0;
	float m = (a+b)/2.0;
	float fm = f(m);
	float a2 = (fa+fm)*(m-a)/2.0 + (fm+fb)*(b-m)/2.0;
	if (fabs(a1-a2)<rError) return a2;
	else return integrate(a,m,rError/2.0)+integrate(m,b,rError/2.0);
}

int main(int argc, char **argv){
	float x;
	for(x=0.001;x<100.0;x+=1.0){
		float result = integrate(0.0,x,.00001);
		printf("Result is %f\n",result);
	}
	return 0;
}
