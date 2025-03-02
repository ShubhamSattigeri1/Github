def form():
    name = input("What is your name : ")
    age  = int(input("What is your age : "))
    locat = input("Enter Your Location : ")
    return name, age, locat

def result():
    name, age, locat = form()   
    print(f"Your name is {name}.") 
    print(f"Your age is {age}.") 
    print(f"Your Location is {locat}.")     

result()   
