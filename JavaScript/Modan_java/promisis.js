#!/usr/bin/node
/* const fetchingPost = new Promise((res, rej) => {
	$.get("/posts")
	 .done(posts => res(posts))
	 .fail(err => rej(err));
}); */

//template literal
const name = "Nick";
console.log(`Hello ${name}`);

// tagged template literal
function highlight(strings, ...values) {
	const interpolation = strings.reduce((prev, current) => {
		return prev + current + (values.lenght ? "<mark>" + values.shift() + "</mark>" : "");
	}, "");

	return interpolation;
}

const condiment = 'jam';
const meal = 'toast';

console.log(highlight(`I like ${condiment} on ${meal}`));
