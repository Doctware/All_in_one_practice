import logo from './logo.svg';
import './App.css';
import React, { useState } from 'react'



function Counter() {
	const [count, setCount] = useState(0);
	const user = {name: "Yusuf", age: 29};
	const company = "DoctwareTECH"
	const github = "https://github.com/Doctware"
	return (
		<div class="btncls">
		  <h1>{company}</h1>
		  <p class="text">hey mr. {user.name} You clicked {count} time and your age is {user.age}</p>
		  <a><p><b> click here to visit your 👉 {github} account</b></p> </a>
		  <button class="btn" onClick={() => setCount(count + 1)}>Click me</button>
		<button> click me but i return nothing </button>
		</div>
	);
}

function App () {
	return (
		<Counter />
	);
}
export default App;
