/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "text_test/test_rround.txt" instead.
 */

#include <check.h>

#include "../s21_decimal.h"
#include "test.h"

#line 1 "text_test/test_rround.txt"
START_TEST(s21_round1) {
#line 2

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 2;

  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  res.bits[0] = 0b00000000000000000000000000000010;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round2) {
#line 24

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = -2;

  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;

  res.bits[0] = 0b00000000000000000000000000000010;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b10000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round3) {
#line 46

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 2;

  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  res.bits[0] = 0b00000000000000000000000000000010;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round4) {
#line 68

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = -2;

  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;

  res.bits[0] = 0b00000000000000000000000000000010;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b10000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round5) {
#line 90

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 3;

  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  res.bits[0] = 0b00000000000000000000000000000011;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round6) {
#line 112

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = -3;

  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;

  res.bits[0] = 0b00000000000000000000000000000011;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b10000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round7) {
#line 134

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 3;

  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  res.bits[0] = 0b00000000000000000000000000000011;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round8) {
#line 156

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = -3;

  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;

  res.bits[0] = 0b00000000000000000000000000000011;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b10000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round9) {
#line 178

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 3;

  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  res.bits[0] = 0b00000000000000000000000000000011;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round10) {
#line 200

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = -3;

  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;

  res.bits[0] = 0b00000000000000000000000000000011;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b10000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round11) {
#line 222

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 3;

  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  res.bits[0] = 0b00000000000000000000000000000011;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round12) {
#line 244

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = -3;

  src1.bits[0] = 0b00000000000000000000000000000011;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000000000000000000000;

  res.bits[0] = 0b00000000000000000000000000000011;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b10000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round13) {
#line 266

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 0;

  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  res.bits[0] = 0b00000000000000000000000000000000;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round14) {
#line 288

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 0;

  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  res.bits[0] = 0b00000000000000000000000000000000;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round15) {
#line 310

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 3,2;

  src1.bits[0] = 0b00000000000000000000000000100000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000010000000000000000;

  res.bits[0] = 0b00000000000000000000000000000011;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round16) {
#line 332

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = -3,2;

  src1.bits[0] = 0b00000000000000000000000000100000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000010000000000000000;

  res.bits[0] = 0b00000000000000000000000000000011;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b10000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round17) {
#line 354

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = -3,2;

  src1.bits[0] = 0b00000000000000000000000000100000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000010000000000000000;

  res.bits[0] = 0b00000000000000000000000000000011;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b10000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round18) {
#line 376

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 3,2;

  src1.bits[0] = 0b00000000000000000000000000100000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000010000000000000000;

  res.bits[0] = 0b00000000000000000000000000000011;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round19) {
#line 398

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 12345677,987654345678987654346;

  src1.bits[0] = 0b10010001000010101111010011001010;
  src1.bits[1] = 0b11000000010001011101010111110010;
  src1.bits[2] = 0b00100111111001000001101100000000;
  src1.bits[3] = 0b00000000000101010000000000000000;

  res.bits[0] = 0b00000000101111000110000101001110;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round20) {
#line 420

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = -12345677,987654345678987654346;

  src1.bits[0] = 0b10010001000010101111010011001010;
  src1.bits[1] = 0b11000000010001011101010111110010;
  src1.bits[2] = 0b00100111111001000001101100000000;
  src1.bits[3] = 0b10000000000101010000000000000000;

  res.bits[0] = 0b00000000101111000110000101001110;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b10000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round21) {
#line 442

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 12345677,987654345678987654346;

  src1.bits[0] = 0b10010001000010101111010011001010;
  src1.bits[1] = 0b11000000010001011101010111110010;
  src1.bits[2] = 0b00100111111001000001101100000000;
  src1.bits[3] = 0b00000000000101010000000000000000;

  res.bits[0] = 0b00000000101111000110000101001110;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round22) {
#line 464

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = -12345677,987654345678987654346;

  src1.bits[0] = 0b10010001000010101111010011001010;
  src1.bits[1] = 0b11000000010001011101010111110010;
  src1.bits[2] = 0b00100111111001000001101100000000;
  src1.bits[3] = 0b10000000000101010000000000000000;

  res.bits[0] = 0b00000000101111000110000101001110;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b10000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round23) {
#line 486

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 79228162514264337593543950334;

  src1.bits[0] = 0b11111111111111111111111111111110;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b00000000000000000000000000000000;

  res.bits[0] = 0b11111111111111111111111111111110;
  res.bits[1] = 0b11111111111111111111111111111111;
  res.bits[2] = 0b11111111111111111111111111111111;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round24) {
#line 508

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = -79228162514264337593543950334;

  src1.bits[0] = 0b11111111111111111111111111111110;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b10000000000000000000000000000000;

  res.bits[0] = 0b11111111111111111111111111111110;
  res.bits[1] = 0b11111111111111111111111111111111;
  res.bits[2] = 0b11111111111111111111111111111111;
  res.bits[3] = 0b10000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round25) {
#line 530

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = -79228162514264337593543950334;

  src1.bits[0] = 0b11111111111111111111111111111110;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b10000000000000000000000000000000;

  res.bits[0] = 0b11111111111111111111111111111110;
  res.bits[1] = 0b11111111111111111111111111111111;
  res.bits[2] = 0b11111111111111111111111111111111;
  res.bits[3] = 0b10000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round26) {
#line 552

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 79228162514264337593543950334;

  src1.bits[0] = 0b11111111111111111111111111111110;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b00000000000000000000000000000000;

  res.bits[0] = 0b11111111111111111111111111111110;
  res.bits[1] = 0b11111111111111111111111111111111;
  res.bits[2] = 0b11111111111111111111111111111111;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round27) {
#line 574

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 7922816251427554395;

  src1.bits[0] = 0b01011111000010000000010001011011;
  src1.bits[1] = 0b01101101111100110111111101100111;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  res.bits[0] = 0b01011111000010000000010001011011;
  res.bits[1] = 0b01101101111100110111111101100111;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round28) {
#line 596

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 665464545;

  src1.bits[0] = 0b00100111101010100010111011100001;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  res.bits[0] = 0b00100111101010100010111011100001;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round29) {
#line 618

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 2,7986531268974139743;

  src1.bits[0] = 0b11111110100100001101100101011111;
  src1.bits[1] = 0b10000100011001000010000111101000;
  src1.bits[2] = 0b00000000000000000000000000000001;
  src1.bits[3] = 0b00000000000100110000000000000000;

  res.bits[0] = 0b00000000000000000000000000000011;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round30) {
#line 640

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = -9798956154578676,797564534156;

  src1.bits[0] = 0b01010100010000000011110110001100;
  src1.bits[1] = 0b10001011010100100000010101011001;
  src1.bits[2] = 0b00011111101010011000000110101101;
  src1.bits[3] = 0b10000000000011000000000000000000;

  res.bits[0] = 0b01000100110000110110011011110101;
  res.bits[1] = 0b00000000001000101101000000011001;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b10000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round31) {
#line 662

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 0,5456465465486476846545465485;

  src1.bits[0] = 0b00001011000011110111000010001101;
  src1.bits[1] = 0b10010110101100000101100101010001;
  src1.bits[2] = 0b00010001101000010111101110000001;
  src1.bits[3] = 0b00000000000111000000000000000000;

  res.bits[0] = 0b00000000000000000000000000000001;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round32) {
#line 684

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = -0,77545545454546589781;

  src1.bits[0] = 0b10101100001010000001100001010101;
  src1.bits[1] = 0b00110100001010010001111010111100;
  src1.bits[2] = 0b00000000000000000000000000000100;
  src1.bits[3] = 0b10000000000101000000000000000000;

  res.bits[0] = 0b00000000000000000000000000000001;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b10000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round33) {
#line 706

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = -79228162514264337593543950334;

  src1.bits[0] = 0b11111111111111111111111111111110;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b10000000000000000000000000000000;

  res.bits[0] = 0b11111111111111111111111111111110;
  res.bits[1] = 0b11111111111111111111111111111111;
  res.bits[2] = 0b11111111111111111111111111111111;
  res.bits[3] = 0b10000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round34) {
#line 728

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 32323465788987654;

  src1.bits[0] = 0b01011000010000110001100100000110;
  src1.bits[1] = 0b00000000011100101101011000000101;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  res.bits[0] = 0b01011000010000110001100100000110;
  res.bits[1] = 0b00000000011100101101011000000101;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round35) {
#line 750

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = -784515454,7989898652154545652;

  src1.bits[0] = 0b10110001001110110100010111110100;
  src1.bits[1] = 0b00111000100000111010110010000001;
  src1.bits[2] = 0b00011001010110010101110000011000;
  src1.bits[3] = 0b10000000000100110000000000000000;

  res.bits[0] = 0b00101110110000101100000101111111;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b10000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round36) {
#line 772

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 0;

  src1.bits[0] = 0b00000000000000000000000000000000;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  res.bits[0] = 0b00000000000000000000000000000000;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round37) {
#line 794

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 1,0;

  src1.bits[0] = 0b00000000000000000000000000001010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000010000000000000000;

  res.bits[0] = 0b00000000000000000000000000000001;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round38) {
#line 816

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = -1,0;

  src1.bits[0] = 0b00000000000000000000000000001010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000010000000000000000;

  res.bits[0] = 0b00000000000000000000000000000001;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b10000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round39) {
#line 838

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 1,0;

  src1.bits[0] = 0b00000000000000000000000000001010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000000010000000000000000;

  res.bits[0] = 0b00000000000000000000000000000001;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round40) {
#line 860

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = -1,0;

  src1.bits[0] = 0b00000000000000000000000000001010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000000010000000000000000;

  res.bits[0] = 0b00000000000000000000000000000001;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b10000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round41) {
#line 882

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 79228162514264337593543950335;

  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b00000000000000000000000000000000;

  res.bits[0] = 0b11111111111111111111111111111111;
  res.bits[1] = 0b11111111111111111111111111111111;
  res.bits[2] = 0b11111111111111111111111111111111;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round42) {
#line 904

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = -79228162514264337593543950335;

  src1.bits[0] = 0b11111111111111111111111111111111;
  src1.bits[1] = 0b11111111111111111111111111111111;
  src1.bits[2] = 0b11111111111111111111111111111111;
  src1.bits[3] = 0b10000000000000000000000000000000;

  res.bits[0] = 0b11111111111111111111111111111111;
  res.bits[1] = 0b11111111111111111111111111111111;
  res.bits[2] = 0b11111111111111111111111111111111;
  res.bits[3] = 0b10000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round43) {
#line 926

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 792281625142643375935439503;

  src1.bits[0] = 0b00101000111101011100001010001111;
  src1.bits[1] = 0b11110101110000101000111101011100;
  src1.bits[2] = 0b00000010100011110101110000101000;
  src1.bits[3] = 0b00000000000000000000000000000000;

  res.bits[0] = 0b00101000111101011100001010001111;
  res.bits[1] = 0b11110101110000101000111101011100;
  res.bits[2] = 0b00000010100011110101110000101000;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round44) {
#line 948

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = -7922816251426433759354395033;

  src1.bits[0] = 0b10011001100110011001100110011001;
  src1.bits[1] = 0b10011001100110011001100110011001;
  src1.bits[2] = 0b00011001100110011001100110011001;
  src1.bits[3] = 0b10000000000000000000000000000000;

  res.bits[0] = 0b10011001100110011001100110011001;
  res.bits[1] = 0b10011001100110011001100110011001;
  res.bits[2] = 0b00011001100110011001100110011001;
  res.bits[3] = 0b10000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round45) {
#line 970

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 0,0000000000000000000002;

  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000101100000000000000000;

  res.bits[0] = 0b00000000000000000000000000000000;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round46) {
#line 992

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = -0,0000000000000000000002;

  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b10000000000101100000000000000000;

  res.bits[0] = 0b00000000000000000000000000000000;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b10000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round47) {
#line 1014

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 0,0000000000000000000002;

  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000101100000000000000000;

  res.bits[0] = 0b00000000000000000000000000000000;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

START_TEST(s21_round48) {
#line 1036

  s21_decimal src1;
  s21_decimal res;
  s21_decimal our_res;

  // src1 = 0,0000000000000000000002;

  src1.bits[0] = 0b00000000000000000000000000000010;
  src1.bits[1] = 0b00000000000000000000000000000000;
  src1.bits[2] = 0b00000000000000000000000000000000;
  src1.bits[3] = 0b00000000000101100000000000000000;

  res.bits[0] = 0b00000000000000000000000000000000;
  res.bits[1] = 0b00000000000000000000000000000000;
  res.bits[2] = 0b00000000000000000000000000000000;
  res.bits[3] = 0b00000000000000000000000000000000;

  s21_round(src1, &our_res);

  ck_assert_int_eq(s21_is_equal(res, our_res), 1);
}
END_TEST

Suite *s21_s21_round() {
  Suite *s1 = suite_create("Core");
  TCase *tc1_1 = tcase_create("Core");

  suite_add_tcase(s1, tc1_1);
  tcase_add_test(tc1_1, s21_round1);
  tcase_add_test(tc1_1, s21_round2);
  tcase_add_test(tc1_1, s21_round3);
  tcase_add_test(tc1_1, s21_round4);
  tcase_add_test(tc1_1, s21_round5);
  tcase_add_test(tc1_1, s21_round6);
  tcase_add_test(tc1_1, s21_round7);
  tcase_add_test(tc1_1, s21_round8);
  tcase_add_test(tc1_1, s21_round9);
  tcase_add_test(tc1_1, s21_round10);
  tcase_add_test(tc1_1, s21_round11);
  tcase_add_test(tc1_1, s21_round12);
  tcase_add_test(tc1_1, s21_round13);
  tcase_add_test(tc1_1, s21_round14);
  tcase_add_test(tc1_1, s21_round15);
  tcase_add_test(tc1_1, s21_round16);
  tcase_add_test(tc1_1, s21_round17);
  tcase_add_test(tc1_1, s21_round18);
  tcase_add_test(tc1_1, s21_round19);
  tcase_add_test(tc1_1, s21_round20);
  tcase_add_test(tc1_1, s21_round21);
  tcase_add_test(tc1_1, s21_round22);
  tcase_add_test(tc1_1, s21_round23);
  tcase_add_test(tc1_1, s21_round24);
  tcase_add_test(tc1_1, s21_round25);
  tcase_add_test(tc1_1, s21_round26);
  tcase_add_test(tc1_1, s21_round27);
  tcase_add_test(tc1_1, s21_round28);
  tcase_add_test(tc1_1, s21_round29);
  tcase_add_test(tc1_1, s21_round30);
  tcase_add_test(tc1_1, s21_round31);
  tcase_add_test(tc1_1, s21_round32);
  tcase_add_test(tc1_1, s21_round33);
  tcase_add_test(tc1_1, s21_round34);
  tcase_add_test(tc1_1, s21_round35);
  tcase_add_test(tc1_1, s21_round36);
  tcase_add_test(tc1_1, s21_round37);
  tcase_add_test(tc1_1, s21_round38);
  tcase_add_test(tc1_1, s21_round39);
  tcase_add_test(tc1_1, s21_round40);
  tcase_add_test(tc1_1, s21_round41);
  tcase_add_test(tc1_1, s21_round42);
  tcase_add_test(tc1_1, s21_round43);
  tcase_add_test(tc1_1, s21_round44);
  tcase_add_test(tc1_1, s21_round45);
  tcase_add_test(tc1_1, s21_round46);
  tcase_add_test(tc1_1, s21_round47);
  tcase_add_test(tc1_1, s21_round48);

  return s1;
}
