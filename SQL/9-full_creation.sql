-- create the given table
CREATE TABLE IF NOT EXISTS second_table (
	id INT,
	name VARCHAR(256),
	score INT
);

-- insert value into the given table

INSERT INTO second_table (id, name, score) VALUE
	(1, "Doctware", 100),
	(2, "Alani", 75),
	(3, "TutuBioye", 200),
	(4, "AbduRasheed", 95);
