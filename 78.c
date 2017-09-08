import java.util.*;
public class DistictSubstrings {
public static void main(String args[]) {
Scanner in = new Scanner(System.in);
System.out.print("Enter The string");
String s = in.nextLine();
int L = s.length();
Set<String> hs = new HashSet<String>
for (int i = 0; i < L; ++i) {
for (int j = 0; j < L-i ; ++j) {
    if(s.charAt(j)=='1'&&s.charAt(j+i)=='1')
    {
    hs.add(s.substring(j, j+i + 1));
    }
 }
}
Iterator it=hs.iterator();
    System.out.println("the string starts and endswith 1");
    System.out.println(hs.size());
while(it.hasNext())
{
System.out.println(it.next()+" ");
}
