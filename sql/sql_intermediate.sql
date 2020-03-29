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

/*
limit, logic of sorting by desc and taking top most row
*/

select round(LONG_W, 4)
from STATION
where LAT_N < 137.2345
order by LAT_N desc
limit 1;

/*
Enter your query here.
*/
select round(LAT_N, 4)
from STATION
where LAT_N > 38.7780
order by LAT_N asc
limit 1;

/*
Enter your query here.
*/
select round(LONG_W, 4)
from STATION
where LAT_N > 38.7780
order by LAT_N asc
limit 1;

/*
Enter your query here.
*/
select round(max(LAT_N) + max(LONG_W) - min(LAT_N) - min(LONG_W), 4)
from STATION;

/*
Enter your query here.
*/
select round(sqrt(power(max(LAT_N) - min(LAT_N), 2) + power(max(LONG_W)  - min(LONG_W), 2)), 4)
from STATION;

set @row_index := -1;
select round(avg(stat.lat_n), 4)
from 
(select @row_index := @row_index +1 as row_index,
STATION.LAT_N as lat_n
from STATION
order by STATION.LAT_N) as stat
where stat.row_index in(floor(@row_index/2), ceil(@row_index/2));

/*
joins, finally.
*/
select sum(t.population)
from 
(select CITY.POPULATION as population, 
	CITY.COUNTRYCODE as country_code, 
	COUNTRY.CONTINENT as continent
from CITY
left join COUNTRY
on CITY.COUNTRYCODE = COUNTRY.CODE) as t
where t.continent = 'Asia';

/*
joins, finally.
*/
select (t.city)
from
(select CITY.NAME as city, COUNTRY.CONTINENT as continent
from CITY
inner join
COUNTRY
on CITY.COUNTRYCODE = COUNTRY.CODE) as t
group by t.continent = 'Africa';


/*
average population of each continent
*/
select t.continent, floor(avg(t.population))
from
(select COUNTRY.CONTINENT as continent, CITY.POPULATION as population, 
CITY.COUNTRYCODE as country_code
from COUNTRY
inner join
CITY
on COUNTRY.CODE = CITY.COUNTRYCODE) as t
group by t.continent;

/*
basic join/the-report
uses on - between and case, when --- then 
*/
select case 
when t.grade < 8 then 'NULL'
else t.name end, 
t.grade, t.marks from
(select Students.Name as name, 
Grades.Grade as grade,
Students.Marks as marks
from Students inner join Grades
on marks between Grades.Min_Mark and Grades.Max_mark) as t
order by t.grade desc, t.name;

/*
basic join/full-score
uses on - between and case, when --- then 
*/
select Hackers.hacker_id as h_id, Hackers.name as h_name,
Challenges.challenge_id as c_id, Challenges.difficulty_level as level,
Difficulty.score as max_score
from 
Hackers
left join Challenges
on Hackers.hacker_id = Challenges.hacker_id
inner join Difficulty
on Challenges.difficulty_level = Difficulty.difficulty_level;










