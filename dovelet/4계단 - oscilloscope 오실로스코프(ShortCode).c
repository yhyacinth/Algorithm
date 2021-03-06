c,b,i;main(a){for(scanf("%d",&a);i<21;printf(++b>60?++i,b=0,"|%3dV\n":i<11+a&i>9-a&(i+c==10+a|!c)?"*":" ",10-i,c%=a*2))c=b+a;}

/*
 * code len: 126
 * 다중 반복문을 반복문 하나로 표현하기 위한 기법이 최대한 사용되었다.
 * 비교적 짧은 코드로 오실로스코프의 밀도 있는 정보를 출력하여 인상적인 결과를 보여준다.
 *
 * 예)
 * 입력:
 * 5
 * 출력:
 *                                                             | 10V
 *                                                             |  9V
 *                                                             |  8V
 *                                                             |  7V
 *                                                             |  6V
 *      *         *         *         *         *         *    |  5V
 *     **        **        **        **        **        **    |  4V
 *    * *       * *       * *       * *       * *       * *    |  3V
 *   *  *      *  *      *  *      *  *      *  *      *  *    |  2V
 *  *   *     *   *     *   *     *   *     *   *     *   *    |  1V
 * *    *    *    *    *    *    *    *    *    *    *    *    |  0V
 *      *   *     *   *     *   *     *   *     *   *     *   *| -1V
 *      *  *      *  *      *  *      *  *      *  *      *  * | -2V
 *      * *       * *       * *       * *       * *       * *  | -3V
 *      **        **        **        **        **        **   | -4V
 *      *         *         *         *         *         *    | -5V
 *                                                             | -6V
 *                                                             | -7V
 *                                                             | -8V
 *                                                             | -9V
 *                                                             |-10V
 */