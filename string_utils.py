def to_upper(text):
    return text.upper()
def to_lower(text):
    return text.lower()
def get_length(text):
    return len(text)
def reverse_string(text):
    return text[::-1]
def capitalize_words(text):
    words = text.split()
    capitalized_words = [word.capitalize() for word in words]
    return ' '.join(capitalized_words)
def is_palindrome(text):
    cleaned = ''.join(text.split())
    cleaned = cleaned.lower()
    reversed_text = cleaned[::-1]
    return cleaned == reversed_text