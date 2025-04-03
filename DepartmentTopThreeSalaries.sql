WITH RankedSalaries AS (
    SELECT e.id, e.name AS Employee, e.salary AS Salary, e.departmentId, 
           DENSE_RANK() OVER (PARTITION BY e.departmentId ORDER BY e.salary DESC) AS rnk
    FROM Employee e
)
SELECT d.name AS Department, rs.Employee, rs.Salary
FROM RankedSalaries rs
JOIN Department d ON rs.departmentId = d.id
WHERE rs.rnk <= 3;
