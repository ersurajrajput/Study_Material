// let student = "suraj";
// // let name = "suraj ' // don't do this
// console.log(student);
// console.log(student.length)
// console.log(student[2]);

// // template litrals
//   let boy1 = "suraj"
//   let boy2 = "ankit"
//   let sentence = `${boy1} is friend of ${boy2}`; // string interpulation
//   console.log(sentence);
//   console.log(`${boy1} is friend of ${boy2}`);



//   // Escape sequnce character 
// //   console.log('it's a good thing');  wrong
//      console.log('it\'s a good thing'); // write way to use single quate in side a single quates
// //       \n -> new line
// //       \t -> tab
// //        and there are many other .



/*******************Strig manipulation*****************/
// strings are immutable you cant change it . but you can can 
let a = "hello suraj ";
a[0] = "x"; // it will not work (becouse here you are altering string "hello")
a = "hi"; // that will also work // while here your are assigning new value to variable a
a = a + "how"; // will make a = hello suraj how. ()
console.log(a)
// let sms = "today";
// console.log(a.length); // it dose not count escape sequence as seprate ex:- \'  will be count as ' (only 1).
// console.log(a.toUpperCase());
// console.log(a.toLowerCase());
// console.log(a[4]);
// console.log(a.slice(2,4));   // only will include 2,3 only . 
// console.log(a.slice(2)); // will give index 2 and after 2
// console.log(a.replace("hello","hi"));
// console.log(a.concat("how are you "+sms));
// console.log(a.trim());
// for(let i = 0; i< a.length; i++){
//     console.log(a[i]);
// }
// console.log(sms.length);
// // notes ;- when you are using any method on string . it will not change the string it will only return new string
