
class Student 
{
    public String name;
    public int age;
    public int Marks;
    
    public Student(String a,int b,int c)
    {
        this.name=a;
        this.age=b;
        this.Marks=c;
    }
    public String toString()
    {
         System.out.println("toString");
        return name+" "+age+" "+Marks;
    }
}
class ObjectDemo5
{
    public static void main(String A[])
    {
         Student obj=new Student("Atharva",21,89);
        // System.out.println("name is: "+obj.name);
        // System.out.println("age is: "+obj.age);
        // System.out.println("ma is: "+obj.Marks);
        
        System.out.println(obj);
        
    
      
    }
    
}