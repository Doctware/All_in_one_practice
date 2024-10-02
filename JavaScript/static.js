#!/usr/bin/node
class point {

	constructor(x, y){
		this.x = x;
		this.y = y;
	}

	static displayName = "point";

	static distance(a, b) {
		const dx = a.x - b.x;
		const dy = a.y - b.y;

		return Math.hypot(dx, dy);
	}
}

const p1 = new point(5, 5);
const p2 = new point(10, 10);

p1.displayName;
p1.distance;
p2.displayName;
p2.distance;

console.log(point.displayName);
console.log(point.distance(p1, p2));

