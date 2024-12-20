#include <Geode/Geode.hpp>

using namespace geode::prelude;

#include <Geode/modify/GJGarageLayer.hpp>
class $modify(MyLayer, GJGarageLayer) {
	bool init() {
		if (!GJGarageLayer::init()) {
			return false;
		}

		getChildByID("player-icon") -> setScaleX(6);

		return true;
	}
};