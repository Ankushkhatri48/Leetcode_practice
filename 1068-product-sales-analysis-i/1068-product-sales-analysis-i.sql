# Write your MySQL query statement below
select eu.product_name, e.year,e.price from sales e left join product eu on e.product_id = eu.product_id;