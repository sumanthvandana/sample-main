#include<stdio.h>
#include<math.h>
#define TOTAL 10000


int main()
{
    double energy=0,energyTemp=0,power=0,powerTemp=0,x,dt,i;
    double negInf=-INFINITY;
    double posInf=INFINITY;
    scanf("%lf",&x);
    scanf("%lf",&dt);
    for(i=negInf;i<posInf;i+=(posInf-negInf)/TOTAL)
    {
        energyTemp=x*x*dt;
        if(energyTemp<0)
        energyTemp=-1*energyTemp;
        energy=energy+energyTemp*(posInf-negInf)/TOTAL;
    }
    for(i=-1*dt;i<dt;i+=(dt-(-1*dt))/TOTAL)
    {
        powerTemp=x*x*dt;
        if(powerTemp<0)
        powerTemp=-1*powerTemp;
        power=power+powerTemp*(dt-(-1*dt))/TOTAL;
    }
    power=power/(2*dt);
    printf("%lf %lf",energy,power);
    return 0;
}
}