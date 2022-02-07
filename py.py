age = input("What is your age? ")

try:
    if int(age) < 15:
        print("Sorry, you cannot watch this film")
    else:
        print("You are old enough to watch this film!")
except:
    print("Input must be a number")