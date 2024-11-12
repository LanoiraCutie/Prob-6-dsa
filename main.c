#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//credits to Maru/> sa power method
int main()
{
    int serie;
    printf("What series to show?\n");
    scanf("%d", &serie);

    switch(serie) {
    case 1:
        {
            double init = 1;
            printf("S = 1");
            for (int i = 2; i <= 10; i++){
                printf(" + 1/%d", i);
                init +=(double) 1/(i);
            }
            printf("\nS = %lf", init);
        }
        break;
    case 2:
        {
            double init = 0;
            int i = 1;
            for (i; i < 10; i++){
                if(i == 1){
                    printf("P = (%d*%d)", i, i+1);
                }
                else {
                    printf(" + (%d*%d)", i, i+1);
                }
                init +=(double) i * (i + 1);
            }
            printf("\nP = %lf", init);
        }
        break;
    case 3:
        {
            double init = 0;
            int i = 1;
            for (i; i < 14; i+=2){
                    if(i == 1){
                            printf("Q = (%d/%d)", i, i+1);
                    } else {
                        printf(" + (%d/%d)", i, i+1);
                    }

                init += (double) i / (i + 1);
            }
            printf("\nQ = %lf", init);
        }
        break;
    case 4:
        {
            double init = 0;
            int i = 0, n;
            printf("How many terms: ");
            scanf("%d", &n);
            for (i; i <= n; i++){
                    if(i == 0){
                        printf("S = (%d/%d)", i+2, i+5);
                        init += (double)(i+ 2) / (i + 5);
                    } else {
                        printf(" + (%d/%d)", 2 + (3*i), 5 + (4*i));
                        init += (double)(2 + (3*i)) / (5 + (4*i));
                    }
            }
            printf("\nS = %lf", init);
        }
        break;
    case 5:
        {
            int num, power, sum, i = 1;
            printf("Input a number: ");
            scanf("%d", &num);
            for(i; i <= 10; i++){
                    if(i == 1){
                        printf("%d^%d", num, i);
                    } else {
                        printf(" + %d^%d", num, i);
                    }
                power = pow(num, i);
                sum += power;
            }
            printf("\nS = %d\n", sum);
        }
        break;
    case 6:
        {
            int num, limit, i = 1;
            double sum, power;
            printf("Input a number: ");
            scanf("%d", &num);
            printf("Input a limit: ");
            scanf("%d", &limit);
            for(i; i <= limit*2 ; i+=2){
                if (i == 1 ){
                    printf("P = %d^%d/%d ", num, i, i);
                }else{
                    printf("+ %d^%d/%d",num, i, i);
                }
                power = (double)(pow(num, i));
                sum += (double)sum +(power/i);
            }
            printf("\nP = %lf\n", sum);
        }
        break;
    case 7:
        {
            double sum;
            for(int i = 1; i <= 13 ; i++){
                if (i == 1 ){
                    printf("S = (%d * %d) ", 14 - i, i);
                }else{
                    printf("+ (%d * %d) ", 14 - i, i);
                }
                sum += (double)(14 - i) * i;
            }
            printf("\nS = %lf\n", sum);
        }
        break;
    case 8:
        {
            int i = 1;
            double sum, power;
            for(i; i <= 5 ; i++){
                if (i == 1 ){
                    printf("S = %d ", i);
                }else{
                    printf("+ %d/%d^%d ", i, i, i);
                }
                power = (double)(pow(i, i));
                sum += (double)sum +(i/power);
            }
            printf("\nS = %lf\n", sum);
        }
        break;
    case 9:
        {
            int limit, i = 1;
            double sum, factorial;
            printf("Input a limit: ");
            scanf("%d", &limit);
            for(i; i <= limit ; i++){
                factorial = 1;
                if (i == 1 ){
                    printf("S = %d/%d! ", 1, i);
                }else{
                    printf("+ %d/%d! ", 1, i);
                }
                for (int j = 1; j <= i; j++){
                    factorial *= j;
                }
                sum += (double)1/factorial;
            }
            printf("\nS = %lf\n", sum);
        }
        break;
    case 10:
        {
            int limit, i = 1, increment = 1;
            double sum, factorial;
            printf("Input a limit: ");
            scanf("%d", &limit);
            for(i; i <= limit ; i++){
                factorial = 1;
                if (i == 1 ){
                    printf("S = %d/%d! ", 1, increment);
                }else{
                    printf("+ %d/%d! ", 1, increment);
                }
                for (int j = 1; j <= increment; j++){
                    factorial *= j;
                }
                sum += (double)1/factorial;
                increment += 2;
            }
            printf("\nS = %lf\n", sum);
        }
        break;
    case 11:
        {
                double sum;
                for(int i = 1; i <= 20 ; i++){
                if (i == 1 ){
                    printf("S = 1");
                    sum = 1;
                }else{
                    for(int j = 1; j <= i; j++){
                        if (j == 1){
                        printf("(%d", j);
                        } else if (j == i) {
                        printf("+%d)", j);
                        } else {
                        printf("+%d", j);
                        }
                        sum += j;
                    }
                }
                if (i < 20)
                printf(" + ");
            }
            printf("\nS = %lf\n", sum);
        }
        break;
    case 12:
        {
            int num, i = 1;
            double sum, power, factorial;
            printf("Input a number: ");
            scanf("%d", &num);
            for(i; i <= 10 ; i++){
                factorial = 1;
                if (i == 1 ){
                    printf("S = %d ", num);
                }else{
                    printf("+ %d^%d/%d! ", num, i, i);
                }
                for (int j = 1; j <= i; j++){
                    factorial *= j;
                }
                power = (double)(pow(num, i));
                sum += (double)power/factorial;
            }
            printf("\nS = %lf\n", sum);
        }
        break;
    case 13:
        {
            int num, i = 1;
            double sum, power, factorial;
            printf("Input a number: ");
            scanf("%d", &num);
            for(i; i <= 10 ; i++){
                factorial = 1;
                if (i == 1 ){
                    printf("P = %d/%d! ", num, i+1);
                }else{
                    printf("+ %d^%d/%d! ", num, i, i+1);
                }
                for (int j = 1; j <= i+1; j++){
                    factorial *= j;
                }
                power = (double)(pow(num, i));
                sum += (double)power/factorial;
            }
            printf("\nP = %lf\n", sum);
        }
        break;
    case 14:
        {
            int result = 0;
            for(int i = 1; i <= 10; i++){
                if (i == 1 ){
                printf("S = %d ", i);
                result =+ i;
                } else {
                    if (i % 2 == 1){
                    printf("+ %d ", i);
                    result += i;
                    } else {
                    printf("- %d ", i);
                    result -= i;
                    }
                }
            }
            printf("\nS = %d\n", result);
        }
        break;
    case 15:
        {
            int result = 0, power;
            for(int i = 1; i <= 10; i++){
                if (i == 1){
                printf("S = %d ", i);
                result =+ i;
                } else {
                    if (i % 2 == 1){
                    printf("+ %d^%d ", i, 2);
                    power = (pow(i, 2));
                    result += power;
                    } else {
                    printf("- %d^%d ", i, 2);
                    power = (pow(i, 2));
                    result -= power;
                    }
                }
            }
            printf("\nS = %d\n", result);
        }
        break;
    case 16:
        {
            int i = 1, term = 1;
            double sum = 0;
            for(i; i <= 15; i+=2){
                if (term == 1 ){
                    printf("S = %d/(%d+%d) ", i, i, i+1);
                    sum += (double)i/(i+(i+1));
                }else{
                    if (term % 2 == 0){
                    printf("+ %d/(%d+%d) ", i, i, i+1);
                    sum += (double)i/(i+(i+1));
                    } else {
                    printf("+ %d/(%d+%d) ", i, i, i+2);
                    sum += (double)i/(i+(i+2));
                    }
                }
                term++;
            }
            printf("\nS = %lf\n", sum);
        }
        break;
    case 17:
        {
            int limit, num, i = 0;
            double sum, power, factorial;
            printf("Input a number: ");
            scanf("%d", &num);
            printf("Input a limit: ");
            scanf("%d", &limit);
            for(i; i <= limit ; i++){
                factorial = 1;
                if (i == 0 ){
                    printf("S = %d ", 1);
                    sum += 1;
                }else{
                    for (int j = 1; j <= i*2; j++){
                    factorial *= j;
                    }
                    power = (double)(pow(num, i*2));
                    if (i % 2 == 1){
                    printf("+ %d^%d/%d! ", num, i*2, i*2);
                    sum += (double)(power/factorial);
                    } else {
                    printf("- %d^%d/%d! ", num, i*2, i*2);
                    sum -= (double)(power/factorial);
                    }
                }
            }
            printf("\nS = %lf\n", sum);
        }
        break;
    case 18:
        {
            double sum;
                for(int i = 1; i <= 20 ; i++){
                if (i == 1 ){
                    printf("S = 1");
                    sum = 1;
                }else{
                    for(int j = 1; j <= i; j++){
                        if (j == 1){
                        printf("(%d", j);
                        } else if (j == i) {
                        printf("+%d)", j);
                        } else {
                        printf("+%d", j);
                        }
                        sum += j;
                    }
                }
                if (i < 20)
                printf(" + ");
            }
            printf("\nS = %lf\n", sum);
        }
        break;
    case 19:
        {
            int limit, num, i = 0;
            double sum, power;
            printf("Input a number: ");
            scanf("%d", &num);
            printf("Input a limit: ");
            scanf("%d", &limit);
            for(i; i <= limit ; i++){
                if (i == 0 ){
                    printf("S = %d ", 1);
                    sum += 1;
                }else{
                    printf("+ %d^%d/%d ", num, i, i);
                    power = (double)(pow(num, i));
                    sum += (double)(power/i);
                }
            }
            printf("\nS = %lf\n", sum);
        }
        break;
    case 20:
        {
            int limit, i = 1;
            double sum;
            printf("Input a limit: ");
            scanf("%d", &limit);
            for(i; i <= limit ; i++){
                if (i == 1){
                    printf("S = %d*%d/%d*%d*%d ", i, i+2, i+1, i+3, i+4);
                }else{
                    printf("+ %d*%d/%d*%d*%d ", i, i+2, i+1, i+3, i+4);
                }
                    sum += (double)(i*(i+2))/((i+1)*(i+3)*(i+4));
            }
            printf("\nS = %lf\n", sum);
        }

    }
    return 0;
}

