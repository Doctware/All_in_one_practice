#!/usr/bin/node
function myFunc () {
  this.myVar = 10;
  setTimeout(() => {
    this.myVar++;
    console.log(this.myVar);
  }, 0);
}
myFunc();

const Func = (x) => {
  return x * 10;
};
console.log(Func(20));

const plus = (x) => x * 40; y = 50; y++;
console.log(plus(5));
