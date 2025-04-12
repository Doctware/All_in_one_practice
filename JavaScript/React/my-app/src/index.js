import React from 'react';
import ReactDOM from 'react-dom';
import './index.css';

class App extends React.Component {
	render() {
		return (
			<div>
			 <h1>Hello Doctware </h1>
			</div>
		)
	}
}


ReactDOM.render(<App />, document.getElementById('root'))
