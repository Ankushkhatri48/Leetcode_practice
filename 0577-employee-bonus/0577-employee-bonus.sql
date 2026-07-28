# Write your MySQL query statement below
select e.name, eu.bonus from employee e left join bonus eu on e.empId = eu.empId where eu.bonus <1000 or eu.bonus is NULL;