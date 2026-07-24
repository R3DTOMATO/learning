const fs = require("fs");
let input = fs.readFileSync(0).toString().trim();
let number = input.split(" ");
number[0] = Number(number[0]);
number[1] = Number(number[1]);

let result = 0;

for (let i = number[0]; i <= number[1]; i++) {
    if (i % 2 != 0) {
        continue;
    }
    result = result + i;

}
console.log(result);