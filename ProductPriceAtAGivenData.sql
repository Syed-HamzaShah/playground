WITH PriceHistory AS (
    SELECT 
        product_id, 
        new_price AS price, 
        change_date,
        RANK() OVER (PARTITION BY product_id ORDER BY change_date DESC) AS rnk
    FROM Products
    WHERE change_date <= '2019-08-16'
)
SELECT p.product_id, 
       COALESCE(ph.price, 10) AS price
FROM (SELECT DISTINCT product_id FROM Products) p
LEFT JOIN PriceHistory ph
ON p.product_id = ph.product_id AND ph.rnk = 1;
