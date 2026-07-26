const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split(" ");
let start = Number(input[0]);
let end = Number(input[1]);
let  N = 0;
let cnt = 0;
for(let i = start; i<=end;i++){
    N=0;
    for(let j = 1; j <= i; j++){
        if(i%j===0){
            N++;
        }
    }
    if(N==3){
        cnt++;
    }
}
console.log(cnt);