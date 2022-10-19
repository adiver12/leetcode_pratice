# Write your MySQL query statement below

# SELECT firstName,lastName, city, state 
# FROM Person
# LEFT JOIN Address
# ON Person.PersonId = Address.PersonId
# ORDER BY firstName;

SELECT firstName, lastName, city, state
FROM Person
LEFT JOIN Address
ON Person.personId=Address.personId;