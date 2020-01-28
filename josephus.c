#include<stdio.h> 
#include<stdbool.h> 
#include<math.h> 

bool is_power_of_two(int n){
    if (n ==0)
        return false;
    while (n != 1){
        if (n % 2 == 0)
            return false;
        n = n/2;
    }
    return true;
}

int highest_poweroftwo(int n){
    int result = 0;

    for (int i = n; i >= 1; i--){
        if ((i & (i - 1)) == 0){
            result = i;
            break;
        }
    }
    return result;
}

int josephus(int n){

    if (n == 0){
        printf("No seats, winning seat cant be found.\n");
        return 0;
    }
    if (n < 0){
        printf("You cannot have a negative number of seats.\n");
        return 0;
    }
    if (is_power_of_two(n))
        return 1;
    else
    {
        int l;
        l = n - highest_poweroftwo(n);
        l = 2 * l + 1;
        return (l);
    }
}

int main(){
    int ans;
    ans = josephus(90); //change the number you want to solve for here
    printf("%s %i\n", "The winning seat is\n", ans);

    return 0;
}