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

# def form():
#     name = input("What is your name: ")
#     age = int(input("What is your age: "))
#     locat = input("Enter Your Location: ")
#     return name, age, locat  # Return the values as a tuple

# def result():
#     name, age, locat = form()  # Unpack the returned values
#     print(f"Your name is {name}.")
#     print(f"Your age is {age}.")
#     print(f"Your Location is {locat}.")  # Fixed variable name

# result()