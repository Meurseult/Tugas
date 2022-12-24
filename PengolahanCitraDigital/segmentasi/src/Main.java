/*
    author : anggra alhera nasmita utomo
    email : anggraalheranasmitautomo@gmail.com

    Soal : Diketahui citra berukuran 5 x 5 dengan nilai piksel sebagai berikut:
    80 80 100 200 180
    200 10 30 25 130
    250 251 250 200 80
    255 255 110 100 120
    255 100 180 200 80

    1. Gambarkan citra hasil Manual Thresholding dengan nilai threshold 80
    2. Gambarkan citra hasil Iterative Thresholding dengan nilai T0 = 100
    dan T awal = 130. lakukan proses iteratif sampai dengan iteratif ke 5
    jika proses iteratif belum selesai

    output program :

        Hasil Segmentasi Citra dengan Threshold Manual 80
        1 1 1 1 1
        1 0 0 0 1
        1 1 1 1 1
        1 1 1 1 1
        1 1 1 1 1

        Hasil Segmentasi Citra dengan Threshold Iteratif T0 = 100 T_AWAL = 130
        Iterasi ke-1
        T1 = [80, 80, 100, 10, 30, 25, 130, 80, 110, 100, 120, 100, 80]
        T2 = [200, 180, 200, 250, 251, 250, 200, 255, 255, 255, 180, 200]
        Jumlah T1: 1045
        Jumlah T2: 2676
        Rata-rata T1: 80
        Rata-rata T2: 223
        Rata-rata Threshold: 151


        Iterasi ke-2
        T1 = [80, 80, 100, 10, 30, 25, 130, 80, 110, 100, 120, 100, 80]
        T2 = [200, 180, 200, 250, 251, 250, 200, 255, 255, 255, 180, 200]
        Jumlah T1: 1045
        Jumlah T2: 2676
        Rata-rata T1: 80
        Rata-rata T2: 223
        Rata-rata Threshold: 151

        Process finished with exit code 0
 */


public class Main
{
    public static void main(String[] args)
    {
        final int CITRA[][] = {
                {80, 80, 100, 200, 180},
                {200, 10, 30, 25, 130},
                {250, 251, 250, 200, 80},
                {255, 255, 110, 100, 120},
                {255, 100, 180, 200, 80}
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