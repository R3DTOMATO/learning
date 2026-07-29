const fs =require("fs");
let input = fs.readFileSync(0).toString().trim();

let N = Number(input);

let n = N;
let cnt = 1;
for(let i = 0; i<N;i++){
    let arr = [];
    
    for(let j = 0; j<N;j++){
        if(j%2==0){
            arr.push(cnt);
            
        }else{
            arr.push(n);
        }
        
    }
    cnt++;
    n--;
    let result = "";
    for(let j = 0; j<N;j++){
        result+=arr[j];
    }
    console.log(result);
}