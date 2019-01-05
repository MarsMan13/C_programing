#include <stdio.h>
void def(int *h, int *m, int *s, int t);

int main(void){

    int h, m ,s, t;

    scanf("%d %d %d %d", &h, &m, &s, &t);

    def(&h, &m, &s, t);
    printf("%02d:%02d:%02d\n", h, m, s);


    return 0;
}

void def(int *h, int *m, int *s, int t){
    
    t += *h * (60*60) + *m * 60 + *s;
    
    *s = t % 60;
    t -= *s;

    *m = (t %(60*60)) /60;
    t -= *m *60;

    *h = t/(60*60);

}
