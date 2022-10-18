# Write your MySQL query statement below

SELECT DISTINCT MAX(salary) AS SecondHighestSalary 
  FROM Employee
WHERE salary NOT IN (SELECT MAX(salary) FROM Employee)