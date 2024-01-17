// array is collection of data. (data not  need to be same data data type unlike c)
// array in js are mutable (it means you can change the vlue of array in js)
// data type of array is object
// let a = [1,2,34,22,33,null,"not prasent",45.2,false];
// console.log(a[0]);
// console.log(a.length);
// console.log(typeof a)
// for(let i =0; i<a.length; i++){
//     console.log(a[i]);
// }
// for(let i in a){
//     console.log(a[i]);
// }   
// /**********************************Array methods************************** */
// most of the methods changes the actual array ex:- push,pop,sort,reverse,shift,unshift,splice
//some of the methods returns new arry ex:- concat,to string,join,slice
// let compare =(a,b) =>{
//     return a-b
// }
// let compare2 =(a,b) =>{
//     return b-a
// }
// // let a = [1,2,4,5,2]
let b = [1,2,3,4,55,6]
// let c = [2,1,12,1,2,121,121,2];
// let x = a.concat(b,c); // can also conect more than two arrays
// console.log(x)
// console.log(b.sort()) // it modifies original array // sorts alfabeticaly output will be:- 1,2,3,4,55,6 (DOSE NOT sorts numericaly)
// console.log(b.sort(compare)); /// now it will sort the arry in numbericaly  accending order
// console.log(b.sort(compare2)); /// now it will sort the arry in numbericaly  decending  order
// console.log(b.reverse()); // it also modiies an array
// console.log(b)
// let z = b.splice(2,3,101,102,103,104,105,106) // returns the array of deleted items// it means :- start from index 2(included) delete 3 items(it means3,4,55) and after index 2 (incuded) add (101,102,103,104,105,106)
// console.log(b);
// let tepm = b.slice(2,4) // returns a sub array :- slice(from(included)  to(excluded))
console.log(tepm);
// console.log(z)


// // let b = a.toString(); // now b has value of a in string
// // let c = a.join("_");
// // a.push(54); // adds element to end of array and returns the new size of array;
// // a.pop(); // pops the element from array from last  and returns the poped element
// // a.shift(); // deletes an element from bigining of array and returns the element
// // a.unshift(89); adds a element at the bigining of array and returns the new lenght of that array


// console.log(a)
// console.log(a.length)
// // console.log(a.pop());
// // console.log(a.unshift(10));
// console.log(a)
// console.log(a.length)

// console.log(a.push(90),a);
// console.log(a.pop(),a);
// console.log(b);
// console.log(c);
