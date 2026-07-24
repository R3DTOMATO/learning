const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split('\n');
let cdx = 0;

while(true){
    let str = input[cdx];
    if(input[cdx] == 0){
        break;
    }
    console.log(str);
    cdx++
}