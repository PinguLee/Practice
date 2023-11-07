function mul_table(num) {
  if(typeof(num) !== "number") {
    console.log("숫자를 입력해주세요.");
    return "~_~";
  } else {
    for(let i = 1; i <= 9; i++) {
      console.log(`${num} * ${i} = ${num * i}`);
    }
    return `${num}단 출력 완료`;
  }
}

for(let i = 1; i <= 9; i++) {
  console.log(mul_table(i));
}
