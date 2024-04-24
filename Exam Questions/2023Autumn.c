#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//A. *
float doubleTo25(float num){
    int count = 0;
    for(count; num<=25; count++){num=num*2;}
    printf("%f ", num);
    return(count);
}

//B. ****
void operations(float num1, float num2, float num3){
    float biggest, middlest, smallest;
    biggest = (num1>num2) ? ((num1>num3) ? num1:num3) :((num2>num3) ? num2:num3);
    smallest = (num1<num2) ? ((num1<num3) ? num1:num3) :((num2<num3) ? num2:num3);
    middlest = (num1!=biggest && num1!=smallest) ? num1 : ((num2!=biggest && num2!=smallest) ? num2 : num3);
    float product = middlest*smallest;
    float sum = middlest+biggest;
    printf("Product of 2 smallest: %f", product);
    printf("Sum of 2 largest: %f", sum);
}

//C. *** - Same as sumemer C
int countX(char string[1000]){
    int size = 1000;
    int numOfX = 0;
    for(int i =0; i<size; i++){
        if(isalpha(string[i])){
            if(string[i] == 'x' || string[i] == 'X'){
                numOfX += 1;
            }
        }
        else if (isnumber(string[i])){
            printf("%c ", string[i]);
        }
    }
    return(numOfX);
}

//D. **
void timeCheck(int numSecs){
    int hour = 0;
    int minute = 0;
    while(numSecs>59){
        numSecs-=60;
        minute++;
    }
    while(minute>59){
        minute-=60;
        hour++;
    }
    printf("%d:%d:%d", hour, minute, numSecs);
}

//E. * - Same as Summer E
int oddDivis5Sum(){
    int sum = 0;
    int num = 500;
    int maxNum = 5000;
    while(num<=5000){
        if(num % 2 != 0 && num % 5 == 0){
            sum += num;
        }
        num++;
    }
    for(num; num<=5000; num++){
        if(num % 2 != 0 && num % 5 == 0){
            sum += num;
        }
    }
    return(sum);
}

//F. * - Same as summer F
void findSum(int firstInt, int secondInt){
    int sum = 0;
    for(int i=firstInt+1; i<secondInt; i++){
        sum+=i;
    }
    printf("%d", sum);
}


int main(){
    // int value = doubleTo25(0.000000007);
    // printf("%d ", value);
    // operations(23.42153, 0.952456, -527524.34);
    // int numX = countX("3KvDL6B;BY}t+DxU-5$.:gB8H0wWyW!3h==_K)-cvQx.u9:LPDcKfR&f3UEV0Z7T+--kyrp.D98[U]$)bL!u7HAFjrztpzb@Vjq8-5GE$dM;dL*w+Hr}(9JRjG=Q,yMqwe;#&1NK@V0($L[=V#8nyY9.rHu6Qf/+6tq}7t&fuBTieA.e,;UNHJ)UCYQ.g5L!+bc.d*3-#jj}$r=d.;tHJ,y!yHjWa2v3?G?8.uUu:P{!dmm[a.3;F$[bjm$p?B=CTv5}gQ?!amy-nPC%uLSxG+GWJm1KkvtVFnZ0*w}hKh9mQkgZrgn0*V&V{Kx/Pu?;U5zZ[b?Xq[xn=#5G6}RVv+-why?GnuC+ZS]${Rbg&ZK{#-ESAdY-j;@:H[N$#+_b4F6D:NTP8x#iL&}Z6xQ1c:BTBBj&{];P8vjT@Wgwq%E*FkX(;0V+1Z*(k0pnfyZaw,29kZ8/H3twu{eFfWw=])_uiK.fai}eAv4d;]?%0UnA/avg_916P:p@aiQq*ai$v}+J}@km#cwGvR?*GHxpdmuDA(JL0[Thc()dRFL8AR+ex{P=(XTyw_bFnkr6+%TX}K3wp7.=7+({pWm$LX56UVbMh!Z7AKFnECbP&9Uc*g3Qt9@LhP?L{=U*J42[kK2r2,ppF?CZ?;9XmB:]D:Z]Lu:*t$aBk{8c5A)$#6d(]7:XaGD@,_$eHWd8Mm#SYTkUy+cm4,+H]a(C1u90:=U5[?C+Bx]=PdXW&4G5623jq#DJ-t!*Kpya&k1rE3Ad,.T#9Q1kU&E/?767+7)xKD0NRJLMpek@)_tM]!+15z*QLfrSdXLx+[6W::VE=1H7Ugzvy#BS6VtnJtn@u#]6}{gpc7vZq*4=a0}ptPCq{0V87+Xdy4p3XA3]!wZ,}hffkGP}h:FdeAx!EP#j9!$e,8R@nN!!,ckRB+P?C;Ect[yanUC_b7fd&**v;zg.iiR;tqN!1wq+r8jz2J}-ZA@(R16gwh98?.q9&F+77S");
    // printf("Num of X's: %d", numX);
    // timeCheck(42933);
    int result = oddDivis5Sum();
    printf("%d", result);
    return 0;
}

