# Write your MySQL query statement below
select * from Patients
where Patients.conditions like 'DIAB1%' or Patients.conditions like '% DIAB1%'