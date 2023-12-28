print("Welcome to the computer quiz game!")

# Ask for the user input
name = input("What is your name? ");
playing = input(f"Do you want to play {name}? [y/n] ")
if playing.lower() != 'y':
    quit()

def answerCap(question):
    while True:
        answer = input(question)
        if answer.isdigit():
            break
        else:
            print("Please, put numbers only.")
    return answer


while True:
    print("Okay! Let's play.")
    score = 0

    answer = answerCap("1 + 1 = ")
    if answer == '2':
        print("Correct!")
        score += 1
    else:
        print("Wrong!")

    answer = answerCap("2 + 2 = ")
    if answer == '4':
        print("Correct!")
        score += 1
    else:
        print("Wrong!")

    answer = answerCap("10 / 2 = ")
    if answer == '5':
        print("Correct!")
        score += 1
    else:
        print("Wrong!")

    answer = answerCap("5 - 3 = ")
    if answer == '2':
        print("Correct!")
        score += 1
    else:
        print("Wrong!")

    print(f"Congratulations {name}! Your score is {score} out of 4")
    playing = input("Do you want to keep playing? [y/n] ")
    if playing.lower() != 'y':
        break;
