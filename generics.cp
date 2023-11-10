using System;

public class GenericExample
{
    // Generic method that works with both reference and value types
    public static void DisplayTypeAndValue<T>(T value)
    {
        Console.WriteLine($"Type: {typeof(T)}, Value: {value}");
    }

    public static void Main()
    {
        // Reference type example
        DisplayTypeAndValue("Hello, C#!");

        // Value type example
        DisplayTypeAndValue(42);
    }
}



//but in java

/* public class GenericExample {
    // Generic method that works with objects (reference types)
    public static <T> void displayTypeAndValue(T value) {
        System.out.println("Type: " + value.getClass().getSimpleName() + ", Value: " + value);
    }

    public static void main(String[] args) {
        // Reference type example
        displayTypeAndValue("Hello, Java!");

        // Note: Java does not support generics with primitive types directly
        // Wrapper classes, such as Integer, can be used for value types
        displayTypeAndValue(42);
    }
}
*/
