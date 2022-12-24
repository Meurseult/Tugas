/*

 */



public class Main
{
    public static void main(String[] args)
    {
        final int CITRA [][] = {
                {80,80,100,200,180},
                {200,10,30,25,130},
                {250,251,250,200,80},
                {255,255,110,100,120},
                {255,100,180,200,80}
        };
        
        final int THRESHOLD_MANUAL_VALUE = 80;
        final int T0 = 100;
        final int T_AWAL = 130;

        int citraHasilThresholdManual[][] = CalculateManualThreshold.calculate(CITRA, THRESHOLD_MANUAL_VALUE);

        System.out.println("Hasil Segmentasi Citra dengan Threshold Manual " + THRESHOLD_MANUAL_VALUE);
        for (int i = 0; i < citraHasilThresholdManual.length; i++)
        {
            for (int j = 0; j < citraHasilThresholdManual[0].length; j++)
            {
                System.out.print(citraHasilThresholdManual[i][j] + " ");
            }
            System.out.println();
        }

        System.out.println("\nHasil Segmentasi Citra dengan Threshold Iteratif T0 = " + T0 + " T_AWAL = " + T_AWAL);
        CalculateIterativeThreshold.calculate(CITRA, T0, T_AWAL);

    }

}