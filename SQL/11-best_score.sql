-- get best score from the given table

SELECT score, name FROM second_table
WHERE score >= 95
ORDER BY score DESC;
