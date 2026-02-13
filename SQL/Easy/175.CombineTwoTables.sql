# Write your MySQL query statement below
select p.firstName,p.lastName,a.city,a.state from Person P left join Address A on p.personId = a.personId;