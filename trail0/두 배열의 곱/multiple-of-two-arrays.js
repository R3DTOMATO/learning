const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split("\n");
let first_arr = [];
let second_arr = [];
let result_arr = new Array(3);

let output = "";

for(let i = 0;i<3;i++){
    first_arr[i] = input[i].split(" ").map(Number);
}

for(let i = 0;i<3;i++){
    second_arr[i] = input[i+4].split(" ").map(Number);
}

for(let i = 0; i<3;i++){
    result_arr[i] = new Array(3);
    for(let j = 0; j <3; j++){
        result_arr[i][j] = first_arr[i][j] * second_arr[i][j];
    }
}

for(let i =0; i<3;i++){
    output = "";
    for(let j = 0; j<3;j++){
        output += result_arr[i][j] + " ";
    }
    console.log(output);
}