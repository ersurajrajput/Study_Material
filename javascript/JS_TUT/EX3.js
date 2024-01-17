// // 1. write a program to print marks of student in a object









// const marks ={
//     suraj   : 21,
//     ved     : 22,
//     subham  : 20,
//     monika  : 5,
// }

// for(let i in marks){
//     console.log("makrs of "+i+" are "+marks[i]);
// }
// console.log()
// for(let i = 0;i<Object.keys(marks).length;i++){
// console.log(marks[Object.keys(marks)[i]]);
// }


// for(let i in marks){
//     console.log(i);
// }
// console.log()
// for(let i = 0;i<Object.keys(marks).length;i++){
//     console.log(Object.keys(marks)[i]);
// }

let a = 0;
let i = 0;
const myobj = {


}
while (true) {
    a = prompt("enter marks" + i + " and -1 if you want to stop");
    if (a == -1) {
        break;
    } else {
        myobj['marks' + i] = [Number.parseInt(a)];
        i++;

    }


}
for (let i in myobj) {
    console.log(i + ":=" + myobj[i]);
}
const avg = (myobj) => {
    let sum = 0;
    for (let i = 0; i <= Object.keys(myobj).length; i++) {
        sum = sum + myobj[Object.keys(myobj)[i]]

    }
    return (sum/Object.keys(myobj).length);


}
console.log("avrage marks are",avg(myobj));
