def total_marks(m1, m2, m3):
    return m1 + m2 + m3
def average_marks(m1, m2, m3):
    return (m1 + m2 + m3) / 3
def calculate_grade(avg):
    if avg > 80:
        return "A"
    elif avg > 60:
        return "B"
    return "C"
def is_passed(avg):
    return avg >= 40
def highest_mark(m1, m2, m3):
    return max(m1, m2, m3)
