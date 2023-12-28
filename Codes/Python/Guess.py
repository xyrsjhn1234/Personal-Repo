secret = 8
tries = 3
while tries > 0:
    guess = int(input("Guess: "))
    if guess != 8:
        print(f"Sorry, Wrong {tries} tries / try left")
        if guess > 8:
            print("High")
        elif guess < 8:
            print("Low")
    else:
        print("Congratulation, you've guess it right")
    tries -= 1
    
    


     