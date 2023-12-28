
    // TODO: Computer randomly selects move
    // TODO: Compare the player move and computer move to see the result
    // TODO: Display the result in the popup
const game = document.querySelector('.game');
let compMove = '';
let result = '';
        //TODO: if 0 to UNTIL 1/3 ROCK
        //TODO: if 1/3 to UNTIL 2/3 PAPER
        //TODO: if 2/3 to 1 UNTIL SCISSOR
    function gameRock(){
        randomNumber = Math.random();
        //TODO: ROCK MOVE BY THE COMPUTER
        if (randomNumber >= 0 && randomNumber < 1/3){
            compMove = 'Rock';
        }
        else if (randomNumber >= 1/3 && randomNumber < 2/3){
            compMove = 'Paper';
        }
        else {
            compMove = 'Scissors';
        }

        //? Compare 
        if (compMove === 'Rock'){
            result = 'Tie';
        }
        else if (compMove === 'Paper'){
            result = 'Lose';
        }
        else {
            result = 'Win';
        }
    alert(`You've picked Rock. Computer picked ${compMove}. The battle is ${result}.`)
    }

    function gamePaper(){
        randomNumber = Math.random();
        //TODO: MOVE BY THE COMPUTER
        if (randomNumber >=0 && randomNumber < 1/3){
            compMove = 'Rock';
        }
        else if (randomNumber >= 1/3 && randomNumber < 2/3){
            compMove = 'Paper';
        }
        else{
            compMove = 'Scissor';
        }    
        //? Compare
        if (compMove === 'Rock'){
            result = 'Win';
        }
        else if (compMove === 'Paper'){
            result = 'Tie';
        }
        else {
            result = 'Lose';
        }
    alert(`You've picked Paper. Computer picked ${compMove}. The battle is ${result}`);
        }

    function gameScissors(){
        randomNumber = Math.random();
        if (randomNumber >= 0 && randomNumber < 1/3){
            compMove = 'Rock';
        }
        else if (randomNumber >= 1/3 && randomNumber < 2/3){
            compMove = 'Paper';
        }
        else if (randomNumber >= 2/3 && randomNumber < 1){
            compMove = 'Scissors';
        }
        //? Compare
        if (compMove === 'Rock'){
            result = 'Lost';
        }
        else if (compMove === 'Paper'){
            result = 'Won';
        }
        else{
            result = 'Tie';
        }
    alert(`You've picked Scissor. Computer picked ${compMove}. The battle is ${result}.`);
    }
