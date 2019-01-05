#include <stdio.h>


int main(void)
{
    double x1, y1, z1, x2, y2, z2;
    double *px1, *px2, *py1, *py2, *pz1, *pz2;

    scanf("%lf %lf %lf", &x1, &y1, &z1);
    scanf("%lf %lf %lf", &x2, &y2, &z2);

    px1 = &x1;
    px2 = &x2;
    py1 = &y1;
    py2 = &y2;
    pz1 = &z1;
    pz2 = &z2;


    *px1 = (*px1 - *px2) >= 0 ? (*px1 - *px2) : (*px1 - *px2)*(-1.0);
    *py1 = (*py1 - *py2) >= 0 ? (*py1 - *py2) : (*py1 - *py2)*(-1.0);
    *pz1 = (*pz1 - *pz2) >= 0 ? (*pz1 - *pz2) : (*pz1 - *pz2)*(-1.0);


    *px2 = (*px1>=*py1) ? *px1 : *py1;
    *px2 = (*px2>=*pz1) ? *px2 : *pz1;

    printf("%lf\n", *px2);

    return 0;
}
