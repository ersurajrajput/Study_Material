console.log("hello world");
// let a =23;  // blocked scoped 
// var b = 43; // wored as globle var;
let a = 10;
var b = 12;
const  author = "suraj"; // const can't be changed 
{
    let a = 1; // new value a will only valid till it block
    var b = 1; // will chabge the value of b in global
    console.log(a);
    console.log(b);
    console.log(author);
}
console.log(a);
console.log(b);