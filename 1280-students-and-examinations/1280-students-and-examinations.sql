# Write your MySQL query statement below
select e.student_id,e.student_name, eu.subject_name, count(ab.student_id) as attended_exams from students e cross join subjects eu left join examinations ab on e.student_id = ab.student_id and eu.subject_name = ab.subject_name 
group by e.student_id, e.student_name, eu.subject_name order by e.student_id, eu.subject_name;