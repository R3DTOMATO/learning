const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split("\n");
let N = Number(input[0]);
let result = 0;
for(let i = 1; i <= N; i++){
    result = 0;
    let arr = input[i].split(" ");
    for(let j = Number(arr[0]); j <= Number(arr[1]); j++){
        if(j % 2===0){
            result += j;
            
        }
    }
    console.log(result);
}