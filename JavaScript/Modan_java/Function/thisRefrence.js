#!/usr/bin/node
function myFunc () {
  this.myVar = 0;
  const that = this;
  setTimeout(
    function () {
      that.myVar++;
      console.log(tha.myVar);

      console.log(this.myVar);
    },
    0
  );
}
