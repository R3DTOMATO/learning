const fs = require("fs");
let input = fs.readFileSync(0).toString().trim();
let arr = ["apple", "banana", "grape", "blueberry", "orange"];
let cnt = 0;
for(let i = 0 ; i<5;i++){
    if(arr[i][2] == input){
        console.log(arr[i])
        cnt++;
        continue;
    }
    else if(arr[i][3] == input){
        console.log(arr[i]);
        cnt++;
        continue;
    }
}
console.log(cnt);