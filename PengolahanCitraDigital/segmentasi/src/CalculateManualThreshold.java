public class CalculateManualThreshold
{
    public static int[][] calculate(int[][] citra, int thresholdManual)
    {
        int[][] citraHasil = new int[citra.length][citra[0].length];

        for (int i = 0; i < citra.length; i++)
        {
            for (int j = 0; j < citra[0].length; j++)
            {
                if (citra[i][j] >= thresholdManual)
                {
                    citraHasil[i][j] = 1;
                }
                else
                {
                    citraHasil[i][j] = 0;
                }
            }
        }

        return citraHasil;
    }
}

