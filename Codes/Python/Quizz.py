# Asking for name
print("Welcome to the quiz game\n")
print("Before we start, may I please have your name?\n")
name = input("Name: ")
print(f"Good luck, {name.capitalize()}!")
print("Now let's start the quiz.")
# Define the score
score = 0
# Function to check the answer.
def check(answer, answerCheck):
    if answer.upper() == answerCheck:
        return True
    else:
        return False
# Check if the user input is within in choices
# def choices():

# Main body
print("Question #1")
print("What is the largest country in the world by land area?")
print("\nA. United States\nB. Canada\nC. Russia\nD. China")
# Store the answer of user
answer = input("Answer: ")
# Condition using function, check if the user input is correct
if check(answer, 'C'):
    print("Correct!")
    score += 1;
else:
    print("Wrong!")

print("Question #2")
print("What is the chemical symbol for the element oxygen?")
print("\nA. O2\nB. Ox\nC. Om\nD. O")
answer = input("Answer: ")

if check(answer, 'D'):
    print("Correct!")
    score += 1;
else:
    print("Wrong!")

print("Question #3")
print("Who was the first President of the United States?")
print("\nA. Thomas Jefferson\nB. John Adams\nC. George Washington\nD. Benjamin Franklin")
answer = input("Answer: ")
if check(answer, 'C'):
    print("Correct!")
    score += 1;
else:
    print("Wrong!")

print("Question #4")
print("Which film features the character Jack Dawson and Rose DeWitt Bukater?")
print("\nA. Titanic\nB. Inception\nC. The Revenant\nD. Avatar")
answer = input("Answer: ")
if check(answer, 'A'):
    print("Correct!")
    score += 1;
else:
    print("Wrong!")

print("Question #5")
print("Who wrote the novel ""Pride and Prejudice""?")
print("\nA. Charles Dickens\nB. Jane Austen\nC. Leo Tolstoy\nD. F. Scott Fitzgerald")
answer = input("Answer: ")
if check(answer, 'B'):
    print("Correct!")
    score += 1;
else:
    print("Wrong!")

print("Congratulation!, you've finished the short quiz!")
print(f"You got {score}/ 5")
print(f"Thank you for participating {name} have a nice day!")