select *
from CITY
where COUNTRYCODE = 'USA'
and
POPULATION > 120000;


/*
Enter your query here.
*/
select CITY
from STATION;

select distinct CITY
from STATION;

/*
Enter your query here.
*/
select CITY, length(CITY)
from STATION
order by length(CITY) asc,
CITY asc
limit 1;

select CITY, length(CITY)
from STATION
order by length(CITY) desc,
CITY asc
limit 1;

/*
Enter your query here.
*/
select distinct CITY
from STATION
where CITY rlike '^[aeiouAEIOU]'

select distinct CITY
from STATION
where
CITY rlike '^[^aeiouAEIOU].*[^aeiouAEIOU]$';



select distinct CITY
from STATION
where
CITY rlike '[^aeiouAEIOU]$';
