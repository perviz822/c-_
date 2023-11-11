using System;

class Program
{
    static void Main()
    {
        // Create instances of the delegate using different methods.
        MathOperation add = Add;
        MathOperation subtract = Subtract;
        MathOperation multiply = Multiply;

        // Use the delegates to perform operations.
        Console.WriteLine("Addition: " + PerformOperation(5, 3, add));
        Console.WriteLine("Subtraction: " + PerformOperation(5, 3, subtract));
        Console.WriteLine("Multiplication: " + PerformOperation(5, 3, multiply));
    }

    // Methods that match the delegate signature.
    static int Add(int a, int b)
    {
        return a + b;
    }

    static int Subtract(int a, int b)
    {
        return a - b;
    }

    static int Multiply(int a, int b)
    {
        return a * b;
    }

    // Method that takes a delegate and performs an operation.
    static int PerformOperation(int a, int b, MathOperation operation)
    {
        return operation(a, b);
    }

    // Define a delegate type that represents a method taking two integers and returning an integer.
    delegate int MathOperation(int a, int b);
}
