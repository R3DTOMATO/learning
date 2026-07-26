const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split("\n");
let row = Number(input[0].split(" ")[0]);
let col = Number(input[0].split(" ")[1]);

let first_arr = [];
let second_arr = [];
let result_arr = new Array(row);

for(let i = 0; i < row; i++){
    first_arr[i] = input[i+1].split(" ").map(Number);
}

for(let i = 0; i < row; i++){
    second_arr[i] = input[i+row+1].split(" ").map(Number);
}

for(let i = 0; i<row;i++){
    result_arr[i]=new Array(col);
    for(let j = 0; j < col; j++){
        if(first_arr[i][j]!==second_arr[i][j]){
            result_arr[i][j]=1;
        }else{
            result_arr[i][j]=0;
        }
    }
}

for(let i = 0; i<row;i++){
    let output = "";
    for(let j = 0; j <col; j++){
        output += result_arr[i][j] + " ";
    }
    console.log(output);
}