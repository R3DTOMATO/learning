const fs =require('fs');
let input = fs.readFileSync(0).toString().trim();
let N = Number(input);
for(let i =0; i<N;i++){
    let arr = [];
    let cnt = 1;
   
    for(let j = 0; j<N;j++){
        arr.push(cnt);
        cnt++
    }

    let result = "";
    if(i%2 !==0){
        for(let j = N-1; j >=0; j--){
            result +=arr[j];
        }
    }else{
        for(let j =0; j<N;j++){
            result +=arr[j];
        }
    }
    console.log(result);
}

