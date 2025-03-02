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

insert into class(name) values('Hassan Farooq');
insert into class(name) values('Hassan Khan');
insert into class(name) values('Saad Farooq');

select * from class


