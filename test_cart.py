import unittest
import cart

class TestCartRegression(unittest.TestCase):
    def test_add_item(self):
        c = []
        result = cart.add_item(c, "apple")
        self.assertEqual(result, ["apple"])
    def test_total_items(self):
        self.assertEqual(cart.get_total_items(["apple", "banana"]), 2)
    def test_remove_item(self):
        c = ["apple", "banana"]
        result = cart.remove_item(c, "apple")
        self.assertEqual(result, ["banana"])
    def test_clear_cart(self):
        c = ["apple", "banana"]
        result = cart.clear_cart(c)
        self.assertEqual(result, [])
    def test_is_in_cart(self):
        c = ["apple", "banana"]
        self.assertTrue(cart.is_in_cart(c, "banana"))
        self.assertFalse(cart.is_in_cart(c, "orange"))    
        