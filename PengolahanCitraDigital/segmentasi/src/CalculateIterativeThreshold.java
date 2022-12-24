import java.util.LinkedList;

public class CalculateIterativeThreshold
{
    public static void calculate(int[][] citra, int T0, int T_AWAL)
    {
        LinkedList<Integer> listT1 = new LinkedList<Integer>();
        LinkedList<Integer> listT2 = new LinkedList<Integer>();

        int thresholdSekarang = T_AWAL;
        int rataRataThreshold = 0;
        int iterasi = 1;

        while (thresholdSekarang > T0)
        {
            System.out.println("Iterasi ke-" + iterasi);
            iterasi++;

            listT1.clear();
            listT2.clear();

            for (int i = 0; i < citra.length; i++)
            {
                for (int j = 0; j < citra[0].length; j++)
                {
                    if (citra[i][j] <= thresholdSekarang)
                    {
                        listT1.add(citra[i][j]);
                    }
                    else
                    {
                        listT2.add(citra[i][j]);
                    }
                }
            }

            int jumlahT1 = 0;
            for (int i = 0; i < listT1.size(); i++)
            {
                jumlahT1 += listT1.get(i);
            }

            int jumlahT2 = 0;
            for (int i = 0; i < listT2.size(); i++)
            {
                jumlahT2 += listT2.get(i);
            }

            rataRataThreshold = (jumlahT1 / listT1.size() + jumlahT2 / listT2.size()) / 2;

            System.out.println("Jumlah T1: " + jumlahT1);
            System.out.println("Jumlah T2: " + jumlahT2);
            System.out.println("Rata-rata T1: " + jumlahT1 / listT1.size());
            System.out.println("Rata-rata T2: " + jumlahT2 / listT2.size());
            System.out.println("Rata-rata Threshold: " + rataRataThreshold);
            System.out.println();
            System.out.println();

            if (rataRataThreshold == thresholdSekarang)
            {
                break;
            }
            else
            {
                thresholdSekarang = rataRataThreshold;
            }
        }
        ;

    }
}
