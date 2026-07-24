const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split(" ");
let start_num = Number(input[0]);
let end_num = Number(input[1]);
let result = "";
while(true){
    if(start_num <= end_num){
        result = result + start_num + " ";
        if(start_num % 2==0){
            start_num = start_num + 3;
        }else if(start_num%2!=0){
            start_num = start_num*2;
        }
    }else{
        break;
    }
    
}
 console.log(result);