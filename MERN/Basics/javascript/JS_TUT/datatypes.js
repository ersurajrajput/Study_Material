/*******************************Primitive Data types ******************************/
// 7 primitive data types data types 
// Null
// Number
// Symbol
// String
// Boolean
// Bigint 
// Undefined
let a= null;
let b =345;
let c = true;
let d = BigInt("567") +BigInt("3");
let e = "suraj";
let f = Symbol("i am a nice symbol");
let g = undefined ;
console.log(a,b,c,d,e,f,g);
console.log(typeof(b));
/*******************************non Primitive Data types (objects) ******************************/
// objects (used make maping/key pair)
const students = {
    "harry" :true,
    "suraj" :false
}


console.log(students);
console.log(students["suraj"]);

