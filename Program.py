def calculate_sum(array):
    sum = 0
    for i in range(len(array)):
        sum += array[i]
    return sum

numbers = [1, 2, 3, 4, 5]
sum = calculate_sum(numbers)
print("The sum of the numbers is", sum)

if sum % 2 == 0:
    print("The sum is even")
else:
    print("The sum is odd")
