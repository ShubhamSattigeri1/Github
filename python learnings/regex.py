#let's learn regular expressions
#validation of things like email, phone numbers, etc
# email = input("Enter your email: ").strip() #removes any white spaces
# if "@" in email and ".com" in email:
#     print("Email is valid")
# else:
#     print("Email is invalid")


#Better version
# email = input("Enter your email: ").strip() #removes any white spaces
# username, domain = email.split("@") #splits the email at the @ symbol
# if username and domain.endswith(".edu"):
#     print('valid')
# else:
#     print('invalid')

#more better version
#re.search(pattern, string, flag=0) is a function that searches for a pattern in a string


    # .  - Any Character Except New Line
    # * - 0 or More repetitions of the preceding character
    # + - 1 or More repetitions of the preceding character
    # ? - 0 or 1 repetitions of the preceding character
    # {n} - n repetitions of the preceding character
    # {n,m} - n to m repetitions of the preceding character
    # {n,} - n or more repetitions of the preceding character
    # \d - Any digit
    # \D - Any non-digit
    # \w - Any word character (a-z, A-Z, 0-9, _)
    # \W - Any non-word character
    # \s - Any whitespace character
    # \S - Any non-whitespace character
    # ^ - Beginning of a string
    # $ - End of a string
    # [] - A set of characters
    # [a-z] - Any lowercase letter
    # [A-Z] - Any uppercase letter
    # [0-9] - Any digit
    # [^a] - Any character except a
    # | - Either or
    # ( ) - Group
    # \ - Escape character
    # \b - Word boundary

import re

email = input("Enter your email: ").strip()
if re.search("@", email):
    print("valid")
else:
    print("invalid") 
    