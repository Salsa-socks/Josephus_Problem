def is_power_of_two(n):
    return (n != 0) and (n & (n-1) == 0)

def highest_poweroftwo(n):
    result = 0
    
    for i in range(n, 0, -1):
        if is_power_of_two(i):
            result = i
            break
    return result
    
def josephus(n):
    if n == 0:
        print("No seats, winning seat cant be found.")
    if n < 0:
        print("You cannot have a negative number of seats")
    if is_power_of_two(n):
        print("Winning seat is 1.")
    else:    
    # where n = 2a(highest power of 2 less than n) - l    
        l = n - highest_poweroftwo(n)
    # winning seat is 2(l) + 1
        l = 2 * l  + 1
        print("The winning seat number is: ", l)
    
    
josephus(90) 