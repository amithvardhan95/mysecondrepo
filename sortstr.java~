import java.io.*;
class sortstr
{
     static void clear(int i)
     {
         System.out.print("\033[H\033[2J");
         System.out.flush();
     }
     public static void main(String args[]) throws IOException
     {
          BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
          sortstr.clear(0);
          System.out.println("Enter the number of strings that you want      :   ");
          int n;
          n=Integer.valueOf(br.readLine());
          String str[]=new String[n];
          String st="";
          System.out.println("");
          int i,j;int p,q;
          for(i=0;i<n;i++)
          {
               if((i+1)<10)
               {System.out.print("Enter string  "+(i+1)+"     :   ");}
               else
               {System.out.print("Enter string "+(i+1)+"      :   ");}
               str[i]=br.readLine();
               
          }

          for(i=0;i<n-1;i++)
          {
               p=i;
               for(j=i+1;j<n;j++)
               {
                   if(str[i].compareTo(str[j])>0)
                   {p=j;}
               }
               st=str[i];
               str[i]=str[p];
               str[p]=st;
          }

          for(i=0;i<n;i++)
          {
               if((i+1)<10)
               {System.out.println("String  "+(i+1)+"     :   "+str[i]);}
               else
               {System.out.println("String "+(i+1)+"      :   "+str[i]);}
               
          }       
     }
}
