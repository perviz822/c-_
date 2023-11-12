using System;
using System.IO;

class Test {

	static void Main() {
		FileStream s = new FileStream("output.txt", FileMode.Create);
		StreamWriter w = new StreamWriter(s);

		w.WriteLine("Table of sqares:");
		for (int i = 0; i < 10; i++)
			w.WriteLine("{0,3}: {1,5}", i, i*i);

		w.Close();
	}

}
