/*
 * Copyright (c) [2020] Huawei Technologies Co.,Ltd.All rights reserved.
 *
 * OpenArkCompiler is licensed under the Mulan PSL v1.
 * You can use this software according to the terms and conditions of the Mulan PSL v1.
 * You may obtain a copy of Mulan PSL v1 at:
 *
 *     http://license.coscl.org.cn/MulanPSL
 *
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY OR
 * FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PSL v1 for more details.
 * -@TestCaseID: StringValueOfBooleanTest.java
 * -@TestCaseName: Test String Method: public static String valueOf(boolean b).
 * -@TestCaseType: Function Test
 * -@RequirementName: Java字符串实现
 * -@Brief:
 * -#step1: Create boolean instance as parameter b.
 * -#step2: Test method valueOf(boolean b).
 * -#step3: Check the result get correctly.
 * -#step4: Change b as the boolean instance traversal true/false expression to repeat step2~3.
 * -@Expect: expected.txt
 * -@Priority: High
 * -@Source: StringValueOfBooleanTest.java
 * -@ExecuteClass: StringValueOfBooleanTest
 * -@ExecuteArgs:
 */

import java.io.PrintStream;

public class StringValueOfBooleanTest {
    private static int processResult = 99;

    public static void main(String[] argv) {
        System.out.println(run(argv, System.out));
    }

    public static int run(String[] argv, PrintStream out) {
        int result = 2; /* STATUS_Success */
        try {
            StringValueOfBooleanTest_1();
        } catch (Exception e) {
            processResult -= 10;
        }
        if (result == 2 && processResult == 99) {
            result = 0;
        }
        return result;
    }

    public static void StringValueOfBooleanTest_1() {
        boolean bo1_1 = 3 > 7;
        boolean bo1_2 = 9 > 7;

        test(bo1_1);
        test(bo1_2);
    }

    private static void test(boolean bo) {
        System.out.println(String.valueOf(bo));
    }
}

// EXEC:%maple  %f %build_option -o %n.so
// EXEC:%run %n.so %n %run_option | compare %f
// ASSERT: scan false\s*true\s*0