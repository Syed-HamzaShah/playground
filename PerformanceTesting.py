import time

def sum_of_squares(n):
    total = 0
    for i in range(n):
        total += i * i
    return total


iterations = 5
before_times = []
after_times = []

for run in range(iterations):
    start_before = time.time()
    sum_of_squares(10000)
    end_before = time.time()

    start_after = time.time()
    sum_of_squares(300000)
    end_after = time.time()
    
    before_times.append(end_before - start_before)
    after_times.append(end_after - start_after)


avg_before = sum(before_times) / len(before_times)
avg_after = sum(after_times) / len(after_times)

print("Average Execution Time BEFORE (10K): ", avg_before, "seconds")
print("Average Execution Time AFTER (300K): ", avg_after, "seconds")
print("All BEFORE times: ", before_times)
print("All AFTER times:  ", after_times)