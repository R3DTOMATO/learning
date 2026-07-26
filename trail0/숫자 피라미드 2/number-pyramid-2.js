const fs = require("fs");
let input = fs.readFileSync(0).toString().trim();
let N = Number(input);
let cnt = 1;
let result = "";

for(let i = 1; i<=N;i++){
    result = ""
    for(let j = 0; j<i;j++){
        result += cnt + " ";
        cnt++
    }
    console.log(result);
}