const fs =require("fs");
let input = fs.readFileSync(0).toString().trim().split("\n");

let arr = [];

for(let i =0; i<4; i++){
    arr.push(input[i].split(" ").map(Number));
}

let cnt = 0;
for(let i = 0; i<4; i++){
    for(let j =0; j<4;j++){
        if(arr[i][j]%5===0){
            cnt++;
        }
    }
}
console.log(cnt);