

class Student implements Cloneable
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
    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
    
}
class ObjectDemo4
{
    public static void main(String A[])
    {
        try
       { Student obj=new Student("Atharva",21,89);
        System.out.println("name is: "+obj.name);
        System.out.println("age is: "+obj.age);
        System.out.println("ma is: "+obj.Marks);
        
        Student xobj= (Student)obj.clone();
        System.out.println("name is: "+xobj.name);
        System.out.println("age is: "+xobj.age);
        System.out.println("ma is: "+xobj.Marks);}
        
        catch(Exception ob)
        {}

    }
    
}