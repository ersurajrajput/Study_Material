/* 
1.  create  a array of numbers and take input from users to add number to this;
2. keep adding numbers to array until -1 added
3. find avrage of array
4. find squre of array








*/
// problem 1 and problem 2 and problem 3 and problem 4
let a=[];
let i = 0;
let n;
while(true){
    n =prompt("enter value of array["+i+"]:->");
    n = Number.parseInt(n);
    if(n == -1){
        break;
    }
    else{
        a[i] = n;
        i++;
    }

}
const sum = (a,b)=>{
    return a+b;

}
i =a.reduce(sum);
i = i/a.length;
console.log("the avrage of numbers is -> "+i)
let new_a = a.map((a => {
        return (a*a);
    }))
    console.log("squer of all given numbers are as follow ->" +new_a);
console.log(a)
