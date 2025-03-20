WITH FirstLogin AS (
    -- Get the first login date for each player
    SELECT player_id, MIN(event_date) AS first_login_date
    FROM Activity
    GROUP BY player_id
),
NextDayLogin AS (
    -- Check if the player logged in on the day after their first login
    SELECT DISTINCT A.player_id
    FROM Activity A
    JOIN FirstLogin F 
    ON A.player_id = F.player_id 
    AND A.event_date = DATE_ADD(F.first_login_date, INTERVAL 1 DAY)
)
-- Calculate the fraction
SELECT ROUND(COUNT(DISTINCT N.player_id) / COUNT(DISTINCT F.player_id), 2) AS fraction
FROM FirstLogin F
LEFT JOIN NextDayLogin N ON F.player_id = N.player_id;
