using System;

class Program
{
    static void Main()
    {
        int count = 0;

        // Loop with a condition
        while (count < 10)
        {
            Console.WriteLine($"Count is {count}");

            // Check a condition
            if (count == 5)
            {
                Console.WriteLine("Breaking the loop early!");
                // Use goto to jump to the label
                goto EndLoop;
            }

            count++;
        }

        // Label indicating the end of the loop
        EndLoop:
        Console.WriteLine("End of the loop");
    }
}
