# Write your MySQL query statement below

SELECT CLASS FROM Courses
GROUP BY class
having COUNT(student) > 4;
