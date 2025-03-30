WITH TotalUsers AS (
    SELECT COUNT(*) AS total_users FROM Users
)
SELECT 
    r.contest_id,
    ROUND(COUNT(DISTINCT r.user_id) * 100.0 / (SELECT total_users FROM TotalUsers), 2) AS percentage
FROM Register r
GROUP BY r.contest_id
ORDER BY percentage DESC, contest_id ASC;
