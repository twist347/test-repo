#include "criterion/criterion.h"

#include "my_math.h"

Test(my_math, add) {
    cr_assert_eq(add(2, 3), 5);
}
