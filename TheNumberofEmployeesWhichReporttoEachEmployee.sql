WITH ReportCounts AS (
    SELECT 
        reports_to AS manager_id, 
        COUNT(employee_id) AS reports_count,
        ROUND(AVG(age)) AS average_age
    FROM Employees
    WHERE reports_to IS NOT NULL
    GROUP BY reports_to
)

SELECT 
    e.employee_id, 
    e.name, 
    rc.reports_count, 
    rc.average_age
FROM Employees e
JOIN ReportCounts rc ON e.employee_id = rc.manager_id
ORDER BY e.employee_id;
