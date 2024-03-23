function bmi(){


let time  = document.getElementById("time").value;
let amount  = document.getElementById("amount").value;
let dar  = document.getElementById("dar").value;
dar = Number.parseInt(dar);
amount = Number.parseInt(amount);
time = Number.parseInt(time);
let intrest = (time*dar*amount)/100;
let total = intrest + amount;
let c = amount *( 1+ ( dar/100))

document.getElementById("intrest").value = intrest;
document.getElementById("total").value = total;


console.log(total);
console.log(intrest);
}

