Mocking Student Data Generator

# Learning objectives:
* Practice creating simple classes 

# Requirements

Read all students saved in the file "students.txt" back into a vector of Student. You can hard-code this file as follow

```C++
Student: 2127831 - Tran Huu Minh
    GPA=7.30, Telephone=0909-888-773
    Email=thminh@student.hcmus.edu.vn
    DOB=17/12/2003
    Address=8 Nguyen Dinh Chieu, Ward 5, District 3, Ho Chi Minh city
Student: 2127832 - Nguyen Dieu Linh
    GPA=9.22, Telephone=0912-351-718
    Email=thminh@student.hcmus.edu.vn
    DOB=23/09/2003
    Address=22 Ngo Thoi Nhiem, Ward 2, District 1, Ho Chi Minh city 
Student: 2127833 - Ngo Thoi Chanh
    GPA=8.12, Telephone=0977-161-237
    Email=ntchanh@student.hcmus.edu.vn
    DOB=12/06/2003
    Address=8 Binh Long, Binh Hung Hoa Ward, Bin Tan District, Ho Chi Minh city
```

- [ ]  Generate randomly a number n in the range of [5, 10]
- [ ]  Generate randomly n Students and add to the previous vector
- [ ]  Overwrite and save and the students in the current vector back to the file "students.txt"
- [ ]  Print out the average GPA of all students
- [ ]  Print out all the students that have a GPA greater than the average GPA

For example, if the average GPA is 7.1, the list of students that have greater than 7.1 GPA is:

```C++
2127831 - Tran Huu Minh, GPA:7.30
2127832 - Nguyen Dieu Linh, GPA:9.22
2127833 - Ngo Thoi Chanh, GPA:8.12
```
