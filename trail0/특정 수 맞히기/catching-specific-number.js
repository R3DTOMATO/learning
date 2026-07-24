const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split("\n");
let idx = 0;
while(true){
    let number = Number(input[idx]);
    if(number >25)
    {
        console.log("Lower");
        idx++;
    }else if(number < 25){
        console.log("Higher");
        idx++;
    }else{
        console.log("Good");
        break;
    }
}