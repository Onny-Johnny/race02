#include "minilibmx.h"

void mx_multi(char *s1, char *s2, char *res) {
    if((check(s1) == 0 && check(s2) == 1)){
        if(check(res) == 1){
            for(int i = mx_pow_rec(10, mx_strlen(res) - 1); i < mx_pow_rec(10, mx_strlen(res)); i++){
                if(digit_count(i / mx_atoi(s1)) == mx_strlen(s2) && i % mx_atoi(s1) == 0){
                    print_l(mx_atoi(s1), '*',i / mx_atoi(s1), i);
                }
            }
        }
        else if(check(res) == 0) {
            if(digit_count(mx_atoi(res) / mx_atoi(s1)) == mx_strlen(s2)){
                print_l(mx_atoi(s1), '*',mx_atoi(s1) / mx_atoi(res), mx_atoi(res));
            }
        }
    }
    else if ((check(s1) == 1 && check(s2) == 0)){
        if(check(res) == 1){
            for(int i = mx_pow_rec(10, mx_strlen(res) - 1) - 1; i < mx_pow_rec(10, mx_strlen(res)); i++){
                if(digit_count(i / mx_atoi(s2)) == mx_strlen(s1) && i % mx_atoi(s2) == 0){
                    print_l(i / mx_atoi(s2), '*', mx_atoi(s2), i);
                }
            }
        }
        else if(check(res) == 0) {
            if(digit_count(mx_atoi(res) / mx_atoi(s2)) == mx_strlen(s1)){
                print_l(mx_atoi(res) / mx_atoi(s2), '*',mx_atoi(s2) , mx_atoi(res));
            }
        }
    }
    else if ((check(s1) == 1 && check(s2) == 1) && check(res) == 0){
        for (int i = mx_pow_rec(10, mx_strlen(s1) - 1); i < (mx_pow_rec(10, mx_strlen(s1))); i++) {
            for (int j = mx_pow_rec(10, mx_strlen(s2) - 1); j < (mx_pow_rec(10, mx_strlen(s2))); j++) {
                if(i * j == mx_atoi(res) && digit_count(i) == mx_strlen(s1) && digit_count(j) == mx_strlen(s2))
                    print_l(i ,'*', j, mx_atoi(res));
            }
        }
    }
    else if ((check(s1) == 0 && check(s2) == 0) && check(res) == 1){
        if(digit_count(mx_atoi(s1) * mx_atoi(s2)) == mx_strlen(res) || mx_atoi(s1) == 0 || mx_atoi(s2) == 0)
            print_l(mx_atoi(s1), '*',mx_atoi(s2) , mx_atoi(s1) * mx_atoi(s2));
    }
}
