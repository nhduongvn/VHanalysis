import sys

def fibonacci(n):
    fib_sequence = [0, 1]
    while len(fib_sequence) < n:
        fib_sequence.append(fib_sequence[-1] + fib_sequence[-2])
    return fib_sequence

def main():
    try:
        num_terms = int(input("Enter the number of Fibonacci terms: "))
        if num_terms <= 0:
            print("Number of terms must be greater than 0.")
            sys.exit(1)
    except ValueError:
        print("Invalid input. Please enter a valid number.")
        sys.exit(1)

    fib_sequence = fibonacci(num_terms)
    print(f"Fibonacci sequence up to {num_terms} terms:")
    print(fib_sequence)

    for i in range(0, 1000): 
      num_str = str(i+1) + "th"
      print("The", num_str, "number is", str(i))

if __name__ == "__main__":
    main()
