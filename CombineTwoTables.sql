# Write your MySQL query statement below
select Person.firstName as firstName, Person.lastName as lastName, Address.city as city, Address.state as state
from Person
left join Address
on Person.personId = Address.personId