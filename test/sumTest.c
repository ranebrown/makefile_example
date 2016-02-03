/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "sumTest.check" instead.
 */

#include <check.h>

#line 1 "sumTest.check"
#include "sum.h"

START_TEST(sum2test)
{
#line 4
	fail_unless(sum(3, 2) == 5, "sum function borked");
	fail_unless(sum(-3, 2) == -1, "sum function borked");
	fail_unless(sum(3, -2) == 1, "sum function borked");
	fail_unless(sum(-3, -2) == -5, "sum function borked");
}
END_TEST

int main(void)
{
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, sum2test);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}