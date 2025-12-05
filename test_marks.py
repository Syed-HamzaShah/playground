import unittest
import marks
class TestMarksRegression(unittest.TestCase):
    def test_total(self):
        self.assertEqual(marks.total_marks(30, 40, 50), 120)
    def test_average(self):
        self.assertEqual(marks.average_marks(30, 40, 50), 40)
    def test_grade(self):
        avg = marks.average_marks(80, 40, 60)
        self.assertEqual(marks.calculate_grade(avg), "C")
    def test_grade_a(self):
        avg = marks.average_marks(90, 85, 88)
        self.assertEqual(marks.calculate_grade(avg), "A")
    def test_grade_b(self):
        avg = marks.average_marks(70, 65, 75)
        self.assertEqual(marks.calculate_grade(avg), "B")
    def test_passed(self):
        avg = marks.average_marks(30, 50, 60)
        self.assertTrue(marks.is_passed(avg))
    def test_highest(self):
        self.assertEqual(marks.highest_mark(30, 70, 50), 70)