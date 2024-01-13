// create a variable of type srting and add a number to it
// use typeof to find data type of q1.
// create a const object in js , can you change it to hold a number later 
// try to add a new key to object in q3 , were you able  to do that 
// write a js program to create a x of word 5.

let a  = "suraj"
let b = 2 + a;
const x = {
    name : "suraj",
    age : 21,
    education : "B.Tech",
   
}
const Dictionary = {
    good : "nice thing",
    hello : "that's used for grating"
}
// x = 5; //  will give an error //  you cant assign a new value to it because it's a const,  BUT YOU CAN CHANGES ITS OBJECTS;

console.log(x);
x['age'] = 18;
x['skills'] = "CSS";
console.log(x);

console.log(b);
console.log(Dictionary.good);

console.log(typeof(a));
