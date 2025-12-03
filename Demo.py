def calculate_operations(num1, num2):
    sum_result = num1 + num2
    difference_result = num1 - num2
    product_result = num1 * num2
    return sum_result, difference_result, product_result

number1 = 10
number2 = 5
sum_res, diff_res, prod_res = calculate_operations(number1, number2)
print(f"Sum: {sum_res}, Difference: {diff_res}, Product: {prod_res}")