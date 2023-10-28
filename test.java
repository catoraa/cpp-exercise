public class test {
    public class dog{
        int age;
        String color;
        String gender;
        void setage(int a){age=a;}
        void setcolor(char c){
            if (c=='r')color="red";
            if (c=='g')color="green";
            if (c=='b')color="blue";
        }
        void setgender(int a){
            if (a==0)gender="male";
            if (a==1)gender="female";
        }

        public dog(){}
        public dog(int age){setage(age);}
        public dog(int age,char c){setage(age);setcolor(c);}
        public dog(int age,char c,String gender){setage(age);setcolor(c);setgender(a);}
    }

    public static void main(String[] args) {
        System.out.println("hello world");
    }
}