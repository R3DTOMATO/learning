// 변수 선언 및 입력
const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split("\n");

// 2차원 배열을 구현합니다.
let arr2d = [];
for (let i = 0; i < 4; i++) {
    arr2d.push(input[i].split(" ").map(Number));
}

// 각 줄의 합을 출력합니다.
for (let i = 0; i < 4; i++) {
    let sum = 0;
    for (let j = 0; j < 4; j++) {
        sum += arr2d[i][j];
    }
    console.log(sum);
}
