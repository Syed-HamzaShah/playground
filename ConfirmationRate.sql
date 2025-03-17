WITH ConfirmationCounts AS (
    SELECT 
        user_id,
        COUNT(*) AS total_requests,
        SUM(CASE WHEN action = 'confirmed' THEN 1 ELSE 0 END) AS confirmed_count
    FROM Confirmations
    GROUP BY user_id
)

SELECT 
    s.user_id,
    COALESCE(ROUND(c.confirmed_count / NULLIF(c.total_requests, 0), 2), 0) AS confirmation_rate
FROM Signups s
LEFT JOIN ConfirmationCounts c
ON s.user_id = c.user_id;