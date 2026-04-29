#include <stdio.h>

int main(void)
{
    int N = 0, net_money = 0, A_max = 0, B_max = 0, cnt = 0, i, j, k;
    scanf("%d", &N);
    net_money = N - 2600;
    B_max = net_money/1500;
    
    for(i = 0; i <= B_max; i++){
        
        A_max = (net_money - (i * 1500))/900;
        
        for(j = 0; j <= A_max; j++){
            
            
            for(k = 0; (k <= j) || (k <= (i * 2)); k++){
                
                    if(((j * 900) + (i * 1500) + (k * 200)) == net_money)
                        printf("%d %d %d\n", j + 1, (i * 2) + 2, k + 1);
                        cnt += 1;
            }
        }
    }
    if(cnt == 0)
        printf("none");
    return 0;
}
