# Write your MySQL query statement below

# FASTER
# SELECT Name AS Customers
# FROM Customers
# LEFT JOIN Orders
# ON Customers.id=Orders.customerId
# WHERE Orders.id IS NULL


SELECT Name as Customers from Customers
WHERE Id NOT IN (SELECT CustomerId from Orders);