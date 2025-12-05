import unittest
import string_utils

class TestStringUtilsRegression(unittest.TestCase):
    def test_upper(self):
        self.assertEqual(string_utils.to_upper("hello"), "HELLO")
    def test_lower(self):
        self.assertEqual(string_utils.to_lower("HELLO"), "hello")
    def test_length(self):
        self.assertEqual(string_utils.get_length("hello"), 5)
    def test_reverse(self):
        self.assertEqual(string_utils.reverse_string("abc"), "cba")
    def test_capitalize(self):
        self.assertEqual(string_utils.capitalize_words("hello world"), "Hello World")
    def test_palindrome_true(self):
        self.assertTrue(string_utils.is_palindrome("A man a plan a canal Panama"))        