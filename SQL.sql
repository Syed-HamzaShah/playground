create table student (student_id int, name varchar(20), major varchar(20), primary key (student_id));

alter table student add gpa decimal(3,2);

alter table student drop column gpa;

describe student;

insert into student values(4665, 'Hamza Shah', 'Software Engineer');
insert into student values(4669, 'Umar Afridi', 'Software Engineer');
insert into student values(4670, 'Faiz Farhar', 'Software Engineer');
insert into student(student_id, name) values(4235, 'Hassan Farooq');

select * from student;

drop table student;

create table class (class_id int auto_increment, name varchar(20) unique, major varchar(20) default 'Not Specified', primary key(class_id));

describe class;

-- insert into class values(3, 'Hamza Shah', 'Software Engineer');
-- insert into class values(4, 'Umar Afridi', 'Software Engineer');
-- insert into class values(5, 'Faiz Farhar', 'Software Engineer');

insert into class(name, major) values('Hassan Farooq', 'SE');
insert into class(name, major) values('Hassan Khan', 'Biology');
insert into class(name , major) values('Saad Farooq', 'CS');

select * from class;

update class 
set major = 'Bio'
where major = 'Biology';

select * from class;

update class
set major = 'Computer Science'
where major = 'CS';

update class
set major = 'Trade King'
where class_id = 1;

select * from class;

update class
set major = 'NeuroByte'
where major = 'Computer Science' or major = 'Bio';

select * from class;

update class
set name = 'Gey', major = 'Gayness'
where class_id = 1;

select * from class;

-- update class
-- set major = 'Undecided';

select * from class;

-- delete from class
-- where name = 'Gey';

-- delete from class;

-- select name from class order by class_id desc;

select * 
from class
order by major, class_id desc;

select * from class limit 2;

select *
from class
order by class_id desc
limit 2;

select * 
from class
where major = 'NeuroByte'
order by class_id desc;

-- <, >, >=, <=, =, <>, AND, OR

select * from class where major <> 'NeuroByte';

update class
set major = 'Undefined'
where major = 'Gayness';

select * from class where major = 'Undefined';

select * from class;

select * from class
where class_id in (2,3);

