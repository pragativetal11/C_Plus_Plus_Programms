//OOP syntax
import java.util.*;


class ArrayX
{
    private int Arr[], iSize;

    public ArrayX(int x)
    {
        iSize = x;
        Arr = new int[iSize];
    }

    public void Accept()
    {
    int iCnt = 0;

        System.out.println("Enter the elements :");
        Scanner sobj = new Scanner(System.in);

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
        {
            int iCnt = 0;

            System.out.println("Array elements are: ");

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                System.out.println(Arr[iCnt]);
            }
        }
    
    public int Summation()
        {
            int iSum = 0, iCnt  =0;

            for(iCnt = 0; iCnt < Arr.length; iCnt++) 
            {
                iSum = iSum + Arr[iCnt];
            }

            return iSum;
        }
}

class program170
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iLength = 0;
        int iRet = 0;

        System.out.println("Enter Number of Elements : ");
        iLength = sobj.nextInt();

        int Brr[] = new int[iLength];

        ArrayX aobj = new ArrayX(Brr.length);

        aobj.Accept();

        iRet = aobj.Summation();
        System.out.println("Summation is:" + iRet);

    }
}
