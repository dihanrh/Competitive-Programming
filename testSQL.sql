CREATE DATABASE library_management_system ;
 
/*SuperAdmin */
CREATE TABLE SuperAdmin (
    Login_ID VARCHAR (8) ,
 Passward  VARCHAR (8)
 );
INSERT INTO SuperAdmin (Login_ID , Passward)
VALUES ('Adminlms' , '741963') ;
 
 
/*Staff*/
CREATE TABLE Staff (
    Staff_ID VARCHAR (8) NOT NULL,
    Passward VARCHAR (8) ,
    S_Name VARCHAR (30) ,
    PRIMARY KEY (Staff_ID)
    ) ;
INSERT INTO Staff (Staff_ID , Passward , S_Name )
VALUES ('2195' ,'fgu845','Abdur Rahman'),
       ('2196' ,'gufdf9','Mahmud Hossain'),
       ('2197' ,'89dfsa','Anika Aktar'),
       ('2198' ,'sdfgh4','Lutfor Rahman'),
       ('2199' ,'asdh69','Shoriful Islam'),
       ('2200' ,'waqsh9',' Aminul Islam'),
       ('2201' ,'kijkj4','Aesha Begum') ,
       ('2202' ,'jjhgk8','Shoriful Islam'),
       ('2203' ,'hhhdh6','Abdul Haque'),
       ('2204' ,'yuro09','Ariful Islam'),
       ('2205' ,'tnzr51','Fatema Raihan');
 
/*Readers*/
CREATE TABLE Readers (
    Reader_ID VARCHAR (8) NOT NULL ,
    R_Name VARCHAR (30) ,
    Email VARCHAR (20) ,
    Phone VARCHAR (20) ,
    Address VARCHAR (50)  ,
    PRIMARY KEY (Reader_ID)
     ) ;
INSERT INTO Readers (Reader_ID , R_Name , Email , Phone , Address)
VALUES ('3038' , 'Rakibul Hasan Dihan' , 'abcd123@gmail.com' , '+88012222222' , 'Sector 10 , Uttara'),
('3039' , 'Abidul Islam Abid' , 'efgh123@gmail.com' , '+8801123456789' , 'Sector 11 , Uttara'),
('3036' , 'Tanvir Ahmed Khan' , 'mostlytanvir@gmail.com' , '+88012345222' , 'Road 4 , Savar') ,   
('3001' , 'Mithila Mahzabin' , 'mithila123@gmail.com' , '+88012227896' , 'Sector 12 , Uttara'),
('3002' , 'Sabrin Islam' , 'sabrind123@gmail.com' , '+880122890187' , 'Mohammadpur , Dhaka'),
('3049' , 'Sadia Islam Khushbo' , 'sadiakhusi@gmail.com' , '+880122776542' , 'Azimpur , Dhaka'),
('3047' , 'Razia Sultana Ritu' , 'razia123@gmail.com' , '+880122222912' , 'College gate , Gazipur'),
('3051' , 'Tanzer Raihan' , 'raihan123@gmail.com' , '+880138922907' , 'Farmgate , Dhaka'),
('3053' , 'Israt Jahan Mim' , 'isratmim53@gmail.com' , '+880156742957' , 'College gate , Gazipur'),
('3054' , 'Ayrin Satabdi Tonney' , 'tonney123@gmail.com' , '+880172222989' , 'Banasri , Dhaka'),
 
('3028' , 'Rebeka Sultana Remo' , 'rebeka123@gmail.com' , '+880142226765' , 'Sector 10 , Uttara'),
('3005' , 'Rahat Rahman' , 'rahat23@gmail.com' , '+88017862342' , 'Banani , Dhaka'),
('3007' , 'Maria Reza' , 'maria123@gmail.com' , '+8801289143' , 'Mirpur , Dhaka'),
('3021' , 'Samiha Maisha Jeba' , 'jebam123@gmail.com' , '+88019878999' , 'Ajompur , Uttara'),
('3025' , 'Mahedi Hassan Saju' ,' saju123@gmail.com' , '+88010022876' , 'Sector 10 , Uttara'),
('3015' , 'Redwan Hossain' , 'redwan3@gmail.com' , '+880198512966' , 'Sector 10 , Uttara'),
('3017' , 'Ashiqur Rahman' , 'ashiq23@gmail.com' , '+88019922913' , 'Sector 11 , Uttara')
;
 
 
 
/*Publisher*/
CREATE TABLE Publisher (
    Publisher_ID VARCHAR (8) NOT NULL  ,
    Year INT (4) ,
    Author_Name VARCHAR (30) ,
    PRIMARY KEY (Publisher_ID)
    );
INSERT INTO Publisher (Publisher_ID , Year , Author_Name)
VALUES ('5050' , '2021' , 'Abul Fazal'),
('4123' , '2021' , 'Abul Al Mamun'),
('8765' , '2019' , 'Abul Fazal'),
('5059' , '2020' , 'Abdul Hakim'),
('5023' , '2007' , 'Amir Hossain'),
('3453' , '2021' , 'Kibria Fazal'),
('9050' , '2021' , 'Golam Kibria'),
('3459' , '2021' , 'Abul Fazal'),
('7654' , '2009' , 'Thomas Arther'),
('3051' , '2020' , 'Golam Kibria'),
('5987' , '2019' , 'Amir Hossain'),
('1277' , '2018' , 'Robert Pittenson'),
('8280' , '2021' , 'Amir Hossain'),
('1178' , '2021' , 'Rohit Mehta'),
('1313' , '2021' , 'Sofia Kamal'),
('7777' , '2011' , 'JK Rawling'),
('1204' , '2021' , 'Amir Hossain'),
('9808' , '2021' , 'Golam Kibria'),
('3451' , '2021' , 'Tom Riddleson'),
('5099' , '2021' , 'Amir Hossain') ;
 
 
/*Books*/
CREATE TABLE Books (
    Book_No VARCHAR (8) NOT NULL  ,
    Tittle VARCHAR (50) ,
    Book_Edition VARCHAR (10) ,
    Category VARCHAR (30) ,
    Price INT (5) ,
    PRIMARY KEY (Book_No)
        );
INSERT INTO Books (Book_No , Tittle , Book_Edition , Category , Price )
VALUES ('1010' , 'Principles Of Electronics' , '9th' , 'Electronics' , '220') ;
 
 
/*Report*/
CREATE TABLE Report (
    Ref_No VARCHAR(30) NOT NULL ,
    Reader_ID VARCHAR (8) ,
    Book_No VARCHAR (8)  ,
    Issue_Date VARCHAR (10) ,
    Return_Date VARCHAR (10) ,
     PRIMARY KEY (Ref_No)
     );
INSERT INTO Report (Ref_No ,  Reader_ID , Book_No , Issue_Date , Return_Date )
VALUES ('1050' ,  '3038' , '1010' , '20-05-2021' , '07-12-2021' ) ;
 
 
 
/*  DROP DATABASE library_management_system ; */
 
/*
SELECT Readers.R_Name , Report.Reader_ID
FROM Readers
RIGHT JOIN Report ON Readers.Reader_ID = Report.Reader_ID ;
*/