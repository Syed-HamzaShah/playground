WITH DailyRevenue AS (
    SELECT visited_on, SUM(amount) AS total_amount
    FROM Customer
    GROUP BY visited_on
),
MovingAverage AS (
    SELECT dr1.visited_on, 
           SUM(dr2.total_amount) AS amount,
           ROUND(AVG(dr2.total_amount), 2) AS average_amount
    FROM DailyRevenue dr1
    JOIN DailyRevenue dr2 
    ON dr2.visited_on BETWEEN dr1.visited_on - INTERVAL 6 DAY AND dr1.visited_on
    GROUP BY dr1.visited_on
)
SELECT visited_on, amount, average_amount
FROM MovingAverage
WHERE visited_on >= (SELECT MIN(visited_on) + INTERVAL 6 DAY FROM Customer)
ORDER BY visited_on;
