select * 
from students
where marks >= (select AVG(marks);
