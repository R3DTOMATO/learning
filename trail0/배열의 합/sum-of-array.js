const fs =require("fs");
let input = fs.readFileSync(0).toString().trim().split("\n");
const arr1 = input[0].split(" ").map(Number);
const arr2 = input[1].split(" ").map(Number);
const arr3 = input[2].split(" ").map(Number);
const arr4 = input[3].split(" ").map(Number);

let result1 = 0;
let result2 = 0;
let result3 = 0;
let result4 = 0;
for(let i = 0; i<4;i++){
    result1 +=arr1[i];
    result2 +=arr2[i];
    result3 +=arr3[i];
    result4 +=arr4[i];
}
console.log(result1);
console.log(result2);
console.log(result3);
console.log(result4);