#include <stdio.h>

int main()
{
    int  Cv, Ce, Cs, Fv, Fe, Fs;
    
    scanf("%d%d%d%d%d%d", &Cv, &Ce, &Cs, &Fv, &Fe , &Fs);
    
    int ptc = (Cv*3) + Ce;
    int ptf = (Fv*3) + Fe;
    
    if ( ptc == ptf){
        if (Cs == Fs)
            printf("=\n");
        else if (Cs > Fs)
            printf("C\n");
        else
            printf("F\n");
    }
    else if (ptc > ptf)
        printf("C\n");
    else
        printf("F\n");

    return 0;
}
