import logo from './logo.svg';
import './App.css';
import React, { useState } from 'react'

function App() {
  return ;
}

function Counter() {
	const [count, setCount] = useState(0);

	return (
		<div>
		  <p> You clicked {count} time</p>
		  <button onClick={() => setCount(count + 1)}>Click me</button>
		</div>
	);
}
export default App;
