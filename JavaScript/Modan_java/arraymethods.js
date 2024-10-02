#!/usr/bin/node
const numbers = [0, 1, 2, 3, 4, 5, 6];
const doubleNumbers = numbers.map(n => n * 2);
// console.log(doubleNumbers)
const evenNumber = numbers.filter(n => n % 2 === 0);
// console.log(evenNumber);
const sum = numbers.reduce((prev, next) => prev + next,);
// console.log(sum)
const greaterThanFour = numbers.find((n) => n>4);
// console.log(greaterThanFour);


// compute total grade of student with grades 10
const students = [
	{name: "Nick", grade: 10},
	{name: "John", grade: 15},
	{name: "Julia", grade: 19},
	{name: "Nathalia", grade: 9},
];

const aboveTenSum = students
 .map(student => student.grade)
 .filter(grade => grade >= 10)
 .reduce((prev, next) => prev + next, 0)
console.log(aboveTenSum)

// spread separator
const ar1 = ["a", "b", "c"];
const ar2 = [...ar1, "d", "e"];
console.log(ar2)
