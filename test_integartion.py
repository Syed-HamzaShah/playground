import unittest
import service
import math_utils

class TestIntegration(unittest.TestCase):
    def test_total_price(self):
        self.assertEqual(service.calculate_total_price(100, 3), 300)
    def test_discount_workflow(self):
        self.assertEqual(service.apply_discount(200, 2), 198)