#!/usr/bin/node
/* const */
const person = "Doctware";
// uncomment to verified
// person = "Software" // Will raise error, person can be reassigned :|
console.log(person)

/* let.  Note!! i used person2 as we have person as an constant varaible */
let person2 = "Doctware";
person2 = "harware"; // Succes print as let can be reassignable
console.log(person2) // "hardware"
