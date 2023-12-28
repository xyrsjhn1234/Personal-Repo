const containeri4 = document.querySelector('.i4');

const cartContainer = containeri4.querySelector('.i4__cart');
const buyContainer = containeri4.querySelector('.i4__buy');
    function alertCart(){
        alert('Added to cart');
    }
    function alertBuy(){
        console.log('Loading');
        alert('Bought');
    }

let cartQuantity = document.querySelector('cartQuantity');

    cartQuantity = 0;

    function showQuantity(){
        console.log(`Your cart: ${cartQuantity}`);
    }
    function addToCart(){
        console.log(`Cart Quantity: ${cartQuantity+=1}`);
    }
    function addToCart_2(){
        console.log(`Cart Quantity: ${cartQuantity+=2}`);
    }
    function addToCart_3(){
        console.log(`Cart Quantity: ${cartQuantity+=3}`);
    }
    function resetCart(){
        cartQuantity = 0;
        console.log(`Cart was reset`);
    }

const priceCoffee = 5, bagels = 3*2, soup = 9;
let newPriceCoffee = 0, newPriceBagels = 0, newPriceSoup = 0;


newPriceCoffee = priceCoffee * .1;
console.log(`Cost of food(Coffee): $${priceCoffee}`);
console.log(`Taxed price food(Coffee): $${priceCoffee - newPriceCoffee}`);

newPriceBagels = bagels/100;
console.log(`Cost of food(Bagels): $${(bagels)}`);
console.log(`Taxed of food(Bagels): $${(bagels - newPriceBagels)}`);

newPriceSoup = soup*.10;
console.log(`Cost of food(Soup): $${soup}`);
console.log(`Taxed of food(Soup): $${(soup - newPriceSoup)}`);

// //Calculator Declaration in container
// //Calling the class ".calculator" container/parent in html
// const calculatorContainer = document.querySelector('.calculator');
// //Calling the ".calculator" children in html
// const calcuOne = calculatorContainer.querySelector('.calculatorOne');
// const calcuTwo = calculatorContainer.querySelector('.calculatorTwo');
// const calcuThree = calculatorContainer.querySelector('.calculatorThree');
// const calcuPlus = calculatorContainer.querySelector('.calculatorPlus');
// const calcuEqual = calculatorContainer.querySelector('.calculatorEqual');

//     //Declaring a variable for
//     let calculation = 0;
//     //Using the declaration, this function is for the button to be interactive
//         function buttonOne(){
//             calculation = 1;
//             console.log(calculation);
//         }
//         function buttonTwo(){
//             calculation = 2;
//             console.log(calculation);
//         }

//         function buttonThree(){
//             calculation = 3;
//             console.log(calculation);
//         }
//         function buttonPlus(){
//             calculation = '+';
//             console.log(calculation);
//         }
//         function buttonPlus(){
//             calculation = '+';
//             console.log(calculation);
//         }

//6a
let hour = 13;
let name = 'Xyrus';

    //hour is between 6 and 12 morning
    if(hour >= 6 && hour <= 12){
        console.log(`Good morning! ${name}`);
    }
    //hour is 12 and 17 afternoon
    else if (hour >= 13 && hour <= 17){
        console.log(`Good afternoon! ${name}`);
    }
    //hour is 0 and 23 evening
    else{
        console.log(`Good evening! ${name}`);
    }
//6d
let age = 65;
const Holiday = true;

    if ((age <= 6 || age >= 65) && Holiday){
        console.log('Discounted');
    }
    else{
        console.log('No discount');
    }
//6f
const flipCoin = document.querySelector('.flip');

    function flipHeads(){
        randomNumber = Math.random();
        if(randomNumber < 0.5){
            console.log('Heads');
        }
        else{
            console.log('Tails');
        }
    }




        