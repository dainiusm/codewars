#include <criterion/criterion.h>
#include <stdlib.h>

char *accum(const char *source);

Test(MumblingTests, ShouldPassAllTheTestsProvided) {

  // Test #00
  {
    const char *source = "ZpglnRxqenU";
    const char *expected = "Z-Pp-Ggg-Llll-Nnnnn-Rrrrrr-Xxxxxxx-Qqqqqqqq-Eeeeeeeee-Nnnnnnnnnn-Uuuuuuuuuuu";
    char *actual = accum(source);
    cr_assert_str_eq(expected, actual, "Source: \"%s\" Expected: \"%s\" Actual: \"%s\"", source, expected, actual);
    free(actual); actual = NULL;
  }
  
  
  // Test #01
  {
    const char *source = "NyffsGeyylB";
    const char *expected = "N-Yy-Fff-Ffff-Sssss-Gggggg-Eeeeeee-Yyyyyyyy-Yyyyyyyyy-Llllllllll-Bbbbbbbbbbb";
    char *actual = accum(source);
    cr_assert_str_eq(expected, actual, "Source: \"%s\" Expected: \"%s\" Actual: \"%s\"", source, expected, actual);
    free(actual); actual = NULL;
  }
  
  // Test #02
  {
    const char *source = "MjtkuBovqrU";
    const char *expected = "M-Jj-Ttt-Kkkk-Uuuuu-Bbbbbb-Ooooooo-Vvvvvvvv-Qqqqqqqqq-Rrrrrrrrrr-Uuuuuuuuuuu";
    char *actual = accum(source);
    cr_assert_str_eq(expected, actual, "Source: \"%s\" Expected: \"%s\" Actual: \"%s\"", source, expected, actual);
    free(actual); actual = NULL;
  }
  
  // Test #03
  {
    const char *source = "EvidjUnokmM";
    const char *expected = "E-Vv-Iii-Dddd-Jjjjj-Uuuuuu-Nnnnnnn-Oooooooo-Kkkkkkkkk-Mmmmmmmmmm-Mmmmmmmmmmm";
    char *actual = accum(source);
    cr_assert_str_eq(expected, actual, "Source: \"%s\" Expected: \"%s\" Actual: \"%s\"", source, expected, actual);
    free(actual); actual = NULL;
  }
  
  // Test #04
  {
    const char *source = "HbideVbxncC";
    const char *expected = "H-Bb-Iii-Dddd-Eeeee-Vvvvvv-Bbbbbbb-Xxxxxxxx-Nnnnnnnnn-Cccccccccc-Ccccccccccc";
    char *actual = accum(source);
    cr_assert_str_eq(expected, actual, "Source: \"%s\" Expected: \"%s\" Actual: \"%s\"", source, expected, actual);
    free(actual); actual = NULL;
  }
}

