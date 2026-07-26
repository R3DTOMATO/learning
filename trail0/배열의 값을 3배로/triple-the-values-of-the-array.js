const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split("\n");

let arr = [
    [0, 0, 0], 
    [0, 0, 0], 
    [0, 0, 0]
];

for (let i = 0; i < 3; i++) {
    arr[i] = input[i].split(" ").map(Number);
}

for (let i = 0; i < 3; i++) {
    for (let j = 0; j < 3; j++) {
        arr[i][j] *= 3;
    }
}

for(let i = 0; i < 3; i++) {
    let str = "";
    for(let j = 0; j < 3; j++) {
        str += arr[i][j] + " ";
    }
    console.log(str);
}