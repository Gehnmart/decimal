#include <check.h>

#include "../s21_decimal.h"
#include "test.h"

#line 1
START_TEST(s21_s21_is_greater_or_equal1) {
#line 2
  s21_decimal src1, src2;

  // src1 = 2;
  // src2 = 3;

  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 0;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal2) {
#line 24

  s21_decimal src1, src2;

  // src1 = -2;
  // src2 = -3;

  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 1;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal3) {
#line 47

  s21_decimal src1, src2;

  // src1 = 2;
  // src2 = -3;

  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 1;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal4) {
#line 70

  s21_decimal src1, src2;

  // src1 = -2;
  // src2 = 3;

  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 0;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal5) {
#line 93

  s21_decimal src1, src2;

  // src1 = 3;
  // src2 = 2;

  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000010;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 1;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal6) {
#line 116

  s21_decimal src1, src2;

  // src1 = -3;
  // src2 = -2;

  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000010;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 0;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal7) {
#line 139

  s21_decimal src1, src2;

  // src1 = 3;
  // src2 = -2;

  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000010;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 1;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal8) {
#line 162

  s21_decimal src1, src2;

  // src1 = -3;
  // src2 = 2;

  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000010;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 0;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal9) {
#line 185

  s21_decimal src1, src2;

  // src1 = 3;
  // src2 = 3;

  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 1;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal10) {
#line 208

  s21_decimal src1, src2;

  // src1 = -3;
  // src2 = -3;

  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 1;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal11) {
#line 231

  s21_decimal src1, src2;

  // src1 = 3;
  // src2 = -3;

  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 1;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal12) {
#line 254

  s21_decimal src1, src2;

  // src1 = -3;
  // src2 = 3;

  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000011;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 0;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal13) {
#line 277

  s21_decimal src1, src2;

  // src1 = 0;
  // src2 = 0;

  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 1;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal14) {
#line 300

  s21_decimal src1, src2;

  // src1 = 0;
  // src2 = 0;

  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 1;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal15) {
#line 323

  s21_decimal src1, src2;

  // src1 = 3.2;
  // src2 = 3.3;

  src1.bits[0] = 0b00000000000000000000000000100000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000010000000000000000;

  src2.bits[0] = 0b00000000000000000000000000100001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000010000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 0;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal16) {
#line 346

  s21_decimal src1, src2;

  // src1 = -3.2;
  // src2 = -3.3;

  src1.bits[0] = 0b00000000000000000000000000100000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000010000000000000000;

  src2.bits[0] = 0b00000000000000000000000000100001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000000010000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 1;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal17) {
#line 369

  s21_decimal src1, src2;

  // src1 = -3.2;
  // src2 = 3.3;

  src1.bits[0] = 0b00000000000000000000000000100000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000010000000000000000;

  src2.bits[0] = 0b00000000000000000000000000100001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000010000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 0;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal18) {
#line 392

  s21_decimal src1, src2;

  // src1 = 3.2;
  // src2 = -3.3;

  src1.bits[0] = 0b00000000000000000000000000100000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000010000000000000000;

  src2.bits[0] = 0b00000000000000000000000000100001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000000010000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 1;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal19) {
#line 415

  s21_decimal src1, src2;

  // src1 = 12345677.987654345678987654346;
  // src2 = 87654323456.9876545678987653;

  src1.bits[0] = 0b10010001000010101111010011001010;
  src1.bits[1] = 0b11000000010001011101010111110010;
  src1.bits[2] = 0b00100111111001000001101100000000;
  src1.bits[3] = 0b00000000000101010000000000000000;

  src2.bits[0] = 0b00010001110011011101000110000101;
  src2.bits[1] = 0b11110101101111000110111111000000;
  src2.bits[2] = 0b00000010110101010000111100111111;
  src2.bits[3] = 0b00000000000100000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 0;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal20) {
#line 438

  s21_decimal src1, src2;

  // src1 = -12345677.987654345678987654346;
  // src2 = -87654323456.9876545678987653;

  src1.bits[0] = 0b10010001000010101111010011001010;
  src1.bits[1] = 0b11000000010001011101010111110010;
  src1.bits[2] = 0b00100111111001000001101100000000;
  src1.bits[3] = 0b10000000000101010000000000000000;

  src2.bits[0] = 0b00010001110011011101000110000101;
  src2.bits[1] = 0b11110101101111000110111111000000;
  src2.bits[2] = 0b00000010110101010000111100111111;
  src2.bits[3] = 0b10000000000100000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 1;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal21) {
#line 461

  s21_decimal src1, src2;

  // src1 = 12345677.987654345678987654346;
  // src2 = -87654323456.9876545678987653;

  src1.bits[0] = 0b10010001000010101111010011001010;
  src1.bits[1] = 0b11000000010001011101010111110010;
  src1.bits[2] = 0b00100111111001000001101100000000;
  src1.bits[3] = 0b00000000000101010000000000000000;

  src2.bits[0] = 0b00010001110011011101000110000101;
  src2.bits[1] = 0b11110101101111000110111111000000;
  src2.bits[2] = 0b00000010110101010000111100111111;
  src2.bits[3] = 0b10000000000100000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 1;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal22) {
#line 484

  s21_decimal src1, src2;

  // src1 = -12345677.987654345678987654346;
  // src2 = 87654323456.9876545678987653;

  src1.bits[0] = 0b10010001000010101111010011001010;
  src1.bits[1] = 0b11000000010001011101010111110010;
  src1.bits[2] = 0b00100111111001000001101100000000;
  src1.bits[3] = 0b10000000000101010000000000000000;

  src2.bits[0] = 0b00010001110011011101000110000101;
  src2.bits[1] = 0b11110101101111000110111111000000;
  src2.bits[2] = 0b00000010110101010000111100111111;
  src2.bits[3] = 0b00000000000100000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 0;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal23) {
#line 507

  s21_decimal src1, src2;

  // src1 = 79228162514264337593543950335;
  // src2 = 1;

  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 1;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal24) {
#line 530

  s21_decimal src1, src2;

  // src1 = -79228162514264337593543950335;
  // src2 = -1;

  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b10000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 0;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal25) {
#line 553

  s21_decimal src1, src2;

  // src1 = -79228162514264337593543950335;
  // src2 = 1;

  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b10000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 0;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal26) {
#line 576

  s21_decimal src1, src2;

  // src1 = 79228162514264337593543950335;
  // src2 = -1;

  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 1;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal27) {
#line 599

  s21_decimal src1, src2;

  // src1 = 7922816251427554395;
  // src2 = 65645646;

  src1.bits[0] = 0b01011111000010000000010001011011;
  src1.bits[1] = 0b01101101111100110111111101100111;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00000011111010011010110001001110;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 1;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal28) {
#line 622

  s21_decimal src1, src2;

  // src1 = 665464545;
  // src2 = 8798232189789785;

  src1.bits[0] = 0b00100111101010100010111011100001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b00010000010100101110011001011001;
  src2.bits[1] = 0b00000000000111110100000111110010;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 0;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal29) {
#line 645

  s21_decimal src1, src2;

  // src1 = 2.7986531268974139743;
  // src2 = 9.979623121254565121244554;

  src1.bits[0] = 0b11111110100100001101100101011111;
  src1.bits[1] = 0b10000100011001000010000111101000;
  src1.bits[2] = 0b00000000000000000000000000000001;
  src1.bits[3] = 0b00000000000100110000000000000000;

  src2.bits[0] = 0b11010100101011100011110110001010;
  src2.bits[1] = 0b01110100000101000010011110100011;
  src2.bits[2] = 0b00000000000010000100000101000100;
  src2.bits[3] = 0b00000000000110000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 0;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal30) {
#line 668

  s21_decimal src1, src2;

  // src1 = -9798956154578676.797564534156;
  // src2 = -2156878451.854764;

  src1.bits[0] = 0b01010100010000000011110110001100;
  src1.bits[1] = 0b10001011010100100000010101011001;
  src1.bits[2] = 0b00011111101010011000000110101101;
  src1.bits[3] = 0b10000000000011000000000000000000;

  src2.bits[0] = 0b01100101111100100100110110101100;
  src2.bits[1] = 0b00000000000001111010100110101011;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000001100000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 0;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal31) {
#line 691

  s21_decimal src1, src2;

  // src1 = 0.5456465465486476846545465485;
  // src2 = 0.68985125146545154;

  src1.bits[0] = 0b00001011000011110111000010001101;
  src1.bits[1] = 0b10010110101100000101100101010001;
  src1.bits[2] = 0b00010001101000010111101110000001;
  src1.bits[3] = 0b00000000000111000000000000000000;

  src2.bits[0] = 0b00010111001001010100110000000010;
  src2.bits[1] = 0b00000000111101010001010110011011;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000100010000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 0;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal32) {
#line 714

  s21_decimal src1, src2;

  // src1 = -0.77545545454546589781;
  // src2 = 87894515154546456456;

  src1.bits[0] = 0b10101100001010000001100001010101;
  src1.bits[1] = 0b00110100001010010001111010111100;
  src1.bits[2] = 0b00000000000000000000000000000100;
  src1.bits[3] = 0b10000000000101000000000000000000;

  src2.bits[0] = 0b00010011111011011111011110001000;
  src2.bits[1] = 0b11000011110010000000101111011001;
  src2.bits[2] = 0b00000000000000000000000000000100;
  src2.bits[3] = 0b00000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 0;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal33) {
#line 737

  s21_decimal src1, src2;

  // src1 = -79228162514264337593543950335;
  // src2 = 1;

  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b10000000000000000000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000001;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 0;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal34) {
#line 760

  s21_decimal src1, src2;

  // src1 = 32323465788987654;
  // src2 = 67543278.89765424354657687;

  src1.bits[0] = 0b01011000010000110001100100000110;
  src1.bits[1] = 0b00000000011100101101011000000101;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b10111110000100011000010110010111;
  src2.bits[1] = 0b11011001001111010001001011000110;
  src2.bits[2] = 0b00000000000001011001011001001000;
  src2.bits[3] = 0b00000000000100010000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 1;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal35) {
#line 783

  s21_decimal src1, src2;

  // src1 = -784515454.7989898652154545652;
  // src2 = -579895323215489956.67897455465;

  src1.bits[0] = 0b10110001001110110100010111110100;
  src1.bits[1] = 0b00111000100000111010110010000001;
  src1.bits[2] = 0b00011001010110010101110000011000;
  src1.bits[3] = 0b10000000000100110000000000000000;

  src2.bits[0] = 0b11100110001001011001001101101001;
  src2.bits[1] = 0b00111000110110101110001010110100;
  src2.bits[2] = 0b10111011010111111101000100011110;
  src2.bits[3] = 0b10000000000010110000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 1;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal36) {
#line 806

  s21_decimal src1, src2;

  // src1 = 0;
  // src2 = -37986322154988653.784354545765;

  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b01001111101101000110000001100101;
  src2.bits[1] = 0b01000010001101101011011001100001;
  src2.bits[2] = 0b01111010101111011000110010011010;
  src2.bits[3] = 0b10000000000011000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 1;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal37) {
#line 829

  s21_decimal src1, src2;

  // src1 = 1.0;
  // src2 = 0.0;

  src1.bits[0] = 0b00000000000000000000000000001010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000010000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000010000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 1;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal38) {
#line 852

  s21_decimal src1, src2;

  // src1 = -1.0;
  // src2 = 0.0;

  src1.bits[0] = 0b00000000000000000000000000001010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000010000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000000010000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 0;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal39) {
#line 875

  s21_decimal src1, src2;

  // src1 = 1.0;
  // src2 = 0.0;

  src1.bits[0] = 0b00000000000000000000000000001010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000010000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b10000000000000010000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 1;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal40) {
#line 898

  s21_decimal src1, src2;

  // src1 = -1.0;
  // src2 = 0.0;

  src1.bits[0] = 0b00000000000000000000000000001010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000010000000000000000;

  src2.bits[0] = 0b00000000000000000000000000000000;
  src2.bits[1] = 0b00000000000000000000000000000000;
  src2.bits[2] = 0b00000000000000000000000000000000;
  src2.bits[3] = 0b00000000000000010000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 0;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal41) {
#line 921

  s21_decimal src1, src2;

  // src1 = 79228162514264337593543950335;
  // src2 = 79228162514264337593543950335;

  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b11111111111111111111111111111111;
  src2.bits[1] = 0b11111111111111111111111111111111;
  src2.bits[2] = 0b11111111111111111111111111111111;
  src2.bits[3] = 0b00000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 1;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal42) {
#line 944

  s21_decimal src1, src2;

  // src1 = -79228162514264337593543950335;
  // src2 = -79228162514264337593543950335;

  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b10000000000000000000000000000000;

  src2.bits[0] = 0b11111111111111111111111111111111;
  src2.bits[1] = 0b11111111111111111111111111111111;
  src2.bits[2] = 0b11111111111111111111111111111111;
  src2.bits[3] = 0b10000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 1;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal43) {
#line 967

  s21_decimal src1, src2;

  // src1 = 79228162514264337593543950335;
  // src2 = -79228162514264337593543950335;

  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b00000000000000000000000000000000;

  src2.bits[0] = 0b11111111111111111111111111111111;
  src2.bits[1] = 0b11111111111111111111111111111111;
  src2.bits[2] = 0b11111111111111111111111111111111;
  src2.bits[3] = 0b10000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 1;

  ck_assert_int_eq(origin, result);
}
END_TEST

START_TEST(s21_s21_is_greater_or_equal44) {
#line 990

  s21_decimal src1, src2;

  // src1 = -79228162514264337593543950335;
  // src2 = 79228162514264337593543950335;

  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b10000000000000000000000000000000;

  src2.bits[0] = 0b11111111111111111111111111111111;
  src2.bits[1] = 0b11111111111111111111111111111111;
  src2.bits[2] = 0b11111111111111111111111111111111;
  src2.bits[3] = 0b00000000000000000000000000000000;

  int result = s21_is_greater_or_equal(src1, src2);

  int origin = 0;

  ck_assert_int_eq(origin, result);
}
END_TEST

Suite *s21_s21_is_greater_or_equal(void) {
  Suite *s1 = suite_create("Core");
  TCase *tc1_1 = tcase_create("Core");

  suite_add_tcase(s1, tc1_1);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal1);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal2);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal3);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal4);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal5);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal6);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal7);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal8);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal9);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal10);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal11);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal12);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal13);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal14);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal15);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal16);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal17);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal18);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal19);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal20);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal21);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal22);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal23);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal24);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal25);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal26);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal27);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal28);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal29);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal30);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal31);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal32);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal33);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal34);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal35);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal36);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal37);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal38);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal39);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal40);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal41);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal42);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal43);
  tcase_add_test(tc1_1, s21_s21_is_greater_or_equal44);

  return s1;
}
