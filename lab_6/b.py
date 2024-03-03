import threading
import math
import time

def calculate_square_root(number):
    return math.sqrt(number)

def invoke_square_root_after_milliseconds(milliseconds, number):
    # Convert milliseconds to seconds
    seconds = milliseconds / 1000
    # Pause the execution for the specified duration
    time.sleep(seconds)
    # Calculate and return the square root of the number
    result = calculate_square_root(number)
    print(f"Square root of {number} after {milliseconds} milliseconds is {result}")

# Example usage
milliseconds = int(input("Enter the number of milliseconds to wait: "))
number = float(input("Enter a number to find its square root: "))

# Create a thread to invoke the square root function after the specified milliseconds
thread = threading.Thread(target=invoke_square_root_after_milliseconds, args=(milliseconds, number))
thread.start()
