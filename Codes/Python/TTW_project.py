import random;

# Collect user input
# Deposit of user and taking the bet
MAX_LINE = 3;
MAX_BET = 100;
MIN_BET = 1;

ROWS = 3;
COLS = 3;

symbolCount = 
{
    # Dictionary
    "A": 2,
    "B": 4,
    "C": 6,
    "D": 8
}
def getSlotMachineSpin(rows, cols, symbols):
    allSymbols = []
    # Use could use this in dictionary
    for symbol, symbolCount in symbol.items():
        for _ in range(symbolCount):
            allSymbols.append(symbol)
    column = [[], [], []]

def deposit():
    while True:
        amount = input("Deposit: $ ");
        if amount.isdigit():
            amount = int(amount);
            if amount > 0:
                break;
            else:
                print("Deposit must be higher than 0.")
        else:
            print("Please, deposit must be a number.");
    return amount;

# Collect the be from the user.
def getNumberOfLine():
    while True:
        lines = input("Line to bet on from 1 - " + str(MAX_LINE) + ") ? ");

        if lines.isdigit():
            lines = int(lines);
            if 1 <= lines <= MAX_LINE:
                break;
            else:
                print("Enter valid number of lines.")
        else:
            print("Please, enter a number.");
    return lines;

# Collect the amount of bet.
def getBet():
    while True:
        amount = input("How much would you like to bet: $ ");
        if amount.isdigit():
            amount = int(amount);
            if MIN_BET <= amount <= MAX_BET:
                break;
            else:
                print(f"Bet must between ${MIN_BET} - ${MAX_BET}.")
        else:
            print("Please, deposit must be a number.");
    return amount;

# Main function
def main():
    balance = deposit(); 
    lines = getNumberOfLine();
    # Check if the balance is sufficient in order to bet.
    while True:
        bet = getBet();
        totalBet = bet * lines

        if totalBet >= balance:
            print(f"You don't have enough balance to bet, your current balance is: ${balance}");
        else:
            break;
    
    print(f"You're betting ${bet} on {lines} lines. Total bet is equal to: ${totalBet}")
main() 