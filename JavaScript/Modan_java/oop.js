#!/usr/bin/node
class Polygon {

	constructor(height, width) {
		this.name = 'Polygon';
		this.height = height;
		this.width = width;
	}

	getHelloPhrase () {
		return `Hi, i am ${this.name}`;
	}
}

class Square extends Polygon {
	constructor(lenght) {
		super(lenght, lenght);
		this.name = 'square'
		this.lenght = lenght;
	}

	getCustomHelloPhrase () {
		const polygonPhrase = super.getHelloPhrase();
		return `${polygonPhrase} with a lenght of ${this.lenght}`;
	}

	get area() {
		return this.height * this.width;
	}
}

const mySquare = new Square(10);
console.log(mySquare.area);
console.log(mySquare.getHelloPhrase())
console.log(mySquare.getCustomHelloPhrase())

const poly = new Polygon();
console.log(poly.name)
console.log(poly.getHelloPhrase())
