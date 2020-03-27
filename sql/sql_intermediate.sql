/*
 simple application of inner join, group by and order
*/

select
    C.company_code, C.founder,
    count(distinct E.lead_manager_code),
    count(distinct E.senior_manager_code),
    count(distinct E.manager_code),
    count(distinct E.employee_code)
from Company C
join Employee E on
C.company_code = E.company_code
group by C.company_code, C.founder
order by C.company_code asc;


/*
case when and then
*/
select case 
    when A + B > C and B + C > A and C + A > B
    then case
        when A = B and B = C then 'Equilateral' 
        when A = B or B = C or C = A then 'Isosceles'
        when A != B and B != C and A != C then 'Scalene'
    end
    else 'Not A Triangle'
end from TRIANGLES;


/*
applications of when, then and concat, group by, order by
*/
select case
    when Occupation = 'Doctor' then concat(Name, '(D)')
    when Occupation = 'Professor' then concat(Name, '(P)')
    when Occupation = 'Singer' then concat(Name, '(S)')
    when Occupation = 'Actor' then concat(Name, '(A)')
end
from OCCUPATIONS order by Name asc;

select "There are a total of ", count(Name) t, 
concat(lower(Occupation), "s.")
from OCCUPATIONS
group by Occupation
order by t asc, Occupation asc;


select sum(POPULATION)
from CITY
where DISTRICT = 'California';

select sum(POPULATION)
from CITY
where DISTRICT = 'California';

/*
Enter your query here.
*/
select ceil(avg(Salary) - avg(replace(Salary, '0', '')))
from EMPLOYEES;















