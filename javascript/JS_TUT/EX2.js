// 1. use a logical operator to find whether the age of a 
// person lies btw 10 and 20
//2. demonstrate the use of switch case statements in js
//3. write a javascript program to find whether a number is 
// divisible 2 and 3 .
//4. write a javascript program to find whether a number is 
// divisible either 2 or 3 .
// 6. use ternary oprator to print you can dive or can't 
// based on age

let a = 18;
if (a<=10 && a>=20) {
    console.log("you age is btw 10 and 20")
    
}
switch (a) {
    case 10:
        console.log("your age is 10")
        break;
    case 15:
        console.log("your age is 15")
        break
    case 20:
        console.log("your age is 20")
        break
    default:
        console.log("match not found")
        break;
}

if ((a%2 == 0)&&(a%3 == 0)) {
    console.log("number can be divide by both 3 & 2")
}
if ((a%2==0 ) || (a%3 == 0) ) {
    console.log("number either divisible by 2 or 3")
    
}
console.log("you can ",(a<18 ? "not drive" : "drive"))