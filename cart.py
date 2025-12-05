def add_item(cart, item):
    cart.append(item)
    return cart

def remove_item(cart, item):
    cart.remove(item)
    return cart

def get_total_items(cart):
    return len(cart)

def clear_cart(cart):
    cart.clear()
    return cart

def is_in_cart(cart, item):
    return item in cart

