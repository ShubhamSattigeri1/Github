import random
import os
count = 0
for _ in range(1, 11):
    a = random.randint(1, 10)
    b = int(input("Enter a number: "))
    if a == b:
        print("You win!")
        count += 1
    else:
        print("You lose! the correc")
    

print(f"Your Score is {count}......")
     