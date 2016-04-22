create table license (
    id varchar(20) not null, 
    primary key (id)
);

create table book (
    id varchar(20) not null,
    name varchar(45),
    count int,
    primary key (id)
);

create table lend (
    license_id varchar(20) not null,
    book_id varchar(20) not null,
    foreign key (license_id) references license (id) on delete cascade on update cascade,
    foreign key (book_id) references book (id) on delete cascade on update cascade 
);
