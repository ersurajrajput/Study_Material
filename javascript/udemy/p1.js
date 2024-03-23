const age = 18;
let isOldEnough = age >= 18;
if (isOldEnough) {
    console.log("you can drive");

}
else{
    let diff = 18 - age;
    console.log(`wait another ${diff}`);
}
