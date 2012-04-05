#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "pool.h"

class PoolTest : public ::testing::Test
{
protected:
	void SetUp()
	{
	}

	void TearDown()
	{
	}
};

TEST_F(PoolTest, PoolBuilds)
{
	Pool<int> p;
}
