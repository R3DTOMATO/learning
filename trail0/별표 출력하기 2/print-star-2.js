const fs = require("fs");
let input = fs.readFileSync(0).toString().trim();
let N = Number(input);

for(let i = N; i>=1; i--){
    let star = "";
    for(let j = 0; j<i;j++){
        star += "* ";
    }
    console.log(star);
}