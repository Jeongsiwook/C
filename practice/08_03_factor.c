#include "08_03_factor.h"

int factorize(int num, int factors[][2]) {
    int i = 1;
    int idx = 0;
    static int flag = 0;
    static int count = 0;    
    int res = 0;

    if (flag) {
        idx -= count;
    }

    if (num > 0) {
        while (i <= (num / 2)) {
            if (res == i) {
                break;
            }
            if ((num % i) != 0) {
                i++;
                continue;
            }
            else {
                res = num / i;
                factors[count][0] = i;
                factors[count][1] = res;
                count++;
                factors[count][0] = -i;
                factors[count][1] = -res;
                count++;
                i++;
            }
        }
    }

    else {
        while (i <= -(num / 2)) {
            if (res == i) {
                break;
            }
            if ((num % i) != 0) {
                i++;
                continue;
            }
            else {
                res = -(num / i);
                factors[count][0] = i;
                factors[count][1] = -res;
                count++;
                factors[count][0] = -i;
                factors[count][1] = res;
                count++;
                i++;
            }
        }
    }    
    flag++;   
    idx += count;

    return idx;
}