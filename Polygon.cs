using System;

namespace RegularPolygonAreaCalculator
{
    class Program
    {
);        static void Main(string[] args)
        {
            Console.Write("Enter the number of sides (n): ");
            int n = int.Parse(Console.ReadLine());

            Console.Write("Enter the length of each side (s): ");
            double s = double.Parse(Console.ReadLine());

            // Calculate the area
            double area = (n * s * s) / (4 * Math.Tan(Math.PI / n));

            Console.WriteLine($"The area of the regular polygon with {n} sides is: {area}");
        }
    }
}
