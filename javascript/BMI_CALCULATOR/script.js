function bmi(){


let Waight  = document.getElementById("Waight").value;
let height  = document.getElementById("Waight").value;
height /= 100
let BMI =  Waight / (height * height)
document.getElementById("BMI").value = BMI;
console.log(Waight+height)
}

