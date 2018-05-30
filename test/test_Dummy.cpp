#include <boost/test/unit_test.hpp>
#include <envire_visualizer/Dummy.hpp>

using namespace envire_visualizer;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    envire_visualizer::DummyClass dummy;
    dummy.welcome();
}
