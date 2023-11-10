using System;

class Modify {
    static void Main (String [] args){
        int a =20;
        Console.WriteLine(a);
        modify(ref a);
        Console.WriteLine(a);
        
        
    }
    
    static void  modify(ref int a ){
        a = a+1;
    }
}

//in java 
// the dedault behaivour is pass by value so the  value of a is not changed

//we can achieve the same behavior with wrapper classses for Primitive types like <Integer>


/*
class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
        int variable =20;
        System.out.print(variable  +  " " +  "\n");
        mymethod (variable);
        System.out.print(variable);
    }
    
    
    
    public  static int mymethod (int a){
        a=a+1;
        return a;
        
    }
}
*/
