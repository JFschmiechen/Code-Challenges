using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace codeChallenges
{
    class Program
    {
        static void rotateArray(List<int> list, int r ) // Shifts all values to the right (wrapped)
        {
            for (int i = 1; i <= r; i++) // r = amount of rotations
            {

             list.Insert(0, list.ElementAt(list.Count()-i));

            }
        }
        static void Main(string[] args) // Function tester
        {

            List<int> numbers = new List<int>(5) { 1, 2, 3, 4, 5 }; // Sample
            rotateArray(numbers, 3);

            for (int i = 0; i < 5; i++)
            {

                Console.WriteLine(numbers.ElementAt(i));

            }
        }
    }
}
