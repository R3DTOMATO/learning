const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split(" ");
let N = Number(input[0]);
let M = Number(input[1]);

for(let i =0; i<N;i++){
    let star = "";
    for(let k = 0; k<M;k++){
        star += "* ";
    }
    console.log(star);
}