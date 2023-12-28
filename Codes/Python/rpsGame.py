import random
score = 0
while True:
    def userInput():   
        print("Moves:\nR - Rock\nP - Paper\nS - Scissors")
        while True:
            user = input("Your move: ").upper()
            computer = random.choice(['R', 'P', 'S'])
            if user != 'R' and user != 'P' and user != 'S':
                print("Invalid input, Please try again...")
            else:
                break;
        if user == computer:
            return "It's a tie."

        if isWin(user, computer):
            return "You've won!"
        
        return "You've lost :("
    
    def isWin(player, opponent):
        if (player == 'R' and opponent == 'S') or (player == 'S' and opponent == 'P') or (player == 'P' and opponent == 'R'):
            score += 1
            return True
        
    print(userInput())
    # Loop to ask the user to play again incase user faced any error
    while True:
        # ISSUE: in conditional 
        playAgain = input("Play again: [y/n]: ").lower()
        if playAgain == 'n':
        # Solve tby replacing 'break' with 'exit()' in line 34
           exit()
        elif playAgain == 'y':
            break
        else:
            print("Invalid input")


