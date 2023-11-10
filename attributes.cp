
using System;

// Custom attribute to describe the purpose of a method
[AttributeUsage(AttributeTargets.Method)] // Attribute can be applied to methods
public class DescriptionAttribute : Attribute
{
    public string Description { get; }

    public DescriptionAttribute(string description)
    {
        Description = description;
    }
}

class Program
{
    // Applying the custom attribute to a method
    [Description("This method adds two numbers.")]
    static int Add(int a, int b)
    {
        return a + b;
    }

    static void Main()
    {
        // Accessing the custom attribute
        var method = typeof(Program).GetMethod("Add");
        var attribute = (DescriptionAttribute)Attribute.GetCustomAttribute(method, typeof(DescriptionAttribute));

        if (attribute != null)
        {
            Console.WriteLine($"Method Description: {attribute.Description}");
        }

        // Calling the method
        int result = Add(3, 4);
        Console.WriteLine($"Result: {result}");
    }
}
