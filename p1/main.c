#include <stdio.h>

int main(void)
{
    int N = 0, A_max = 0, B_max = 0, C_max = 0, cnt = 0, i, j, k;
    scanf("%d", &N);
    A_max = N/900;    ///for문에 들어갈 A의 최대값을 제한
    B_max = N/750;    ///위와 동일하게 for문에 들어갈 B의 최대값을 제한
    C_max = N/200;    ///위와 동일
    
    for(i = 1; i <= A_max; i++){            ///A가 가능한 모든 경우에 대한 for문
        for(j = 2; j <= B_max; j += 2){     ///B가 가능한 모든 경우에 대한 for문, B는 짝수 단위로 구매하기에 2로 시작해서 2씩 증가한다.
            for(k = 1; k <= C_max; k++){    ///C가 가능한 모든 경우에 대한 for문
                if(k < i || k < j){         ///C가 B 혹은 A보다 구매 수량이 작은지를 판별하는 조건문
                    if(((i * 900) + (j * 750) + (k * 200)) == N){    ///구별된 경우의 수 중에서 입력된 금액과 맞아 떨어지는지를 판별하는 조건문
                        printf("%d %d %d\n", i, j, k);               
                        cnt += 1;           ///else로 none을 출력하려면 모든 불가능한 경우에서 none이 출력되므로 가능한 경우에만 변수에 값을 받는다. 
                    }    
                }    
            }
        }
    }
    if(cnt == 0)       ///none을 출력하기위한 조건문, 가능한 경우에 한 해 1이 증감되므로, 0은 가능한 경우가 없음을 의미한다.
        printf("none");
    return 0;
}
