// sync returns result while async dosent


const fs =  require("fs")
// fs.writeFileSync("test.txt","hey there")
// fs.writeFile("test.txt","hey there asnc", function (err) {
//     if (err) throw err;
    
// })
// const result = fs.readFileSync("test.txt","utf-8")
// console.log(result)
fs.readFile("test.txt","utf-8",function (err,result){
    if(err) throw err;
    console.log (result)
})
fs.readFileSync("test.txt")