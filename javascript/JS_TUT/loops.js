// for  loop
// for in loop // loops through the keys of an object
// for of loop // loops through the values of an object
//while  loop
// do while loop


let a =10;
for (let i = 0; i < 10; i++) {
    console.log(i);
}
let obj = {
    suraj: 12,
    ved : 13,
    shivang:10,
    ankit: 32,
    arun : 45
}
for (let a in obj){
    console.log("marks of "+ a+ " are "+ obj[a]);
}
for(let a of "suraj"){
    console.log(a)
}
