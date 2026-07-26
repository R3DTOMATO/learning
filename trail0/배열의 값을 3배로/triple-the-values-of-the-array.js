const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split("\n");
let arr = new Array(3);
let result = "";
for(let i=0;i<3;i++){
    arr[i] = new Array(3);
    for(let j =0; j<3;j++){
        arr[i][j] = Number(input[i].split(" ")[j]);
        let three_time = arr[i][j]*3;
        arr[i][j] = three_time;
    }
}

for(let i = 0;i<3;i++){
    result = ""
    for(let j =0; j<3; j++){
        result+= arr[i][j] + " ";
    }
    console.log(result);
}
