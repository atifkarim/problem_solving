#include <map>
#include <limits>
#include <ctime>
#include<iostream>
using namespace std;

template<typename K, typename V>
class interval_map {
	std::map<K,V> m_map;

public:
    // constructor associates whole range of K with val by inserting (K_min, val)
    // into the map
    interval_map( V const& val) {
        m_map.insert(m_map.end(),std::make_pair(std::numeric_limits<K>::lowest(),val));
    }

    // Assign value val to interval [keyBegin, keyEnd).
    // Overwrite previous values in this interval.
    // Conforming to the C++ Standard Library conventions, the interval
    // includes keyBegin, but excludes keyEnd.
    // If !( keyBegin < keyEnd ), this designates an empty interval,
    // and assign must do nothing.
    void assign( K const& keyBegin, K const& keyEnd, V const& val ) {

			if (!(keyBegin < keyEnd)) return;

			std::pair<K,V> beginExtra;
			std::pair<K,V> endExtra;
			bool beginHasExtra = false;
			bool endHasExtra = false;

			typename std::map<K,V>::const_iterator itBegin;
			itBegin = m_map.lower_bound(keyBegin);
			if ( itBegin!=m_map.end() && keyBegin < itBegin->first ) {
				if (itBegin != m_map.begin()) {
					beginHasExtra = true;
					--itBegin;
					beginExtra = std::make_pair(itBegin->first, itBegin->second);
				}
				// openRange for erase is prevIterator
				// insert (prevIterator->first, prevIterator->second) as well!
			}

			typename std::map<K,V>::const_iterator itEnd;
			itEnd = m_map.lower_bound(keyEnd);
			if ( itEnd!=m_map.end() && keyEnd < itEnd->first ) {
				endHasExtra = true;
				typename std::map<K,V>::const_iterator extraIt = itEnd;
				--extraIt;
				endExtra = std::make_pair(keyEnd, extraIt->second);
				// closeRange for erase is this iterator
				// insert (keyEnd, prevIterator->second) as well!
			}

			// 4 canonical conflicts:
			//	 beginExtra w/ mid
			//	 before-mid w/ mid (beginHasExtra==false)
			//	 mid w/ endExtra
			//	 mid w/ after-mid (endHasExtra==false)

			bool insertMid = true;
			if (beginHasExtra) {
				if (beginExtra.second == val)
					insertMid = false;
			} else {
				if (itBegin != m_map.begin()) {
					typename std::map<K,V>::const_iterator beforeMid = itBegin;
					--beforeMid;
					if (beforeMid->second == val)
						insertMid = false;
				}
			}


			if (endHasExtra) {
				if ( (insertMid && endExtra.second == val) || (!insertMid && endExtra.second == beginExtra.second) )
					endHasExtra = false;
			} else {
				if ( (insertMid && itEnd!=m_map.end() && itEnd->second == val) || (!insertMid && itEnd!=m_map.end() && itEnd->second == beginExtra.second) )
					itEnd = m_map.erase(itEnd);
			}

			itBegin = m_map.erase(itBegin, itEnd);
			if (beginHasExtra)
				itBegin = m_map.insert(itBegin, beginExtra);
			if (insertMid)
				itBegin = m_map.insert(itBegin, std::make_pair(keyBegin, val));
			if (endHasExtra)
									m_map.insert(itBegin, endExtra);

// INSERT YOUR SOLUTION HERE
    }

    void test_interval_map() {
		m_map.insert(std::make_pair(1, 'b'));
		m_map.insert(std::make_pair(4, 'c'));
		m_map.insert(std::make_pair(7, 'd'));
		m_map.insert(std::make_pair(10, 'e'));
		m_map.insert(std::make_pair(13, 'a'));
	}

	// a print function for debugging
	void show() {
		std::cout << "show" << std::endl;
		for(auto entry : m_map) {
			std::cout << entry.first << entry.second << std::endl;
		}
	}

    // look-up of the value associated with key
    V const& operator[]( K const& key ) const {
        return ( --m_map.upper_bound(key) )->second;
    }
};


int main() {
	interval_map<unsigned int, char> imap {'a'};
	imap.test_interval_map();
	// imap.show();
	//imap.assign(8, 10, 'k');
	//imap.assign(8, 12, 'k');
	//imap.assign(2, 12, 'k');
	//imap.assign(2, 12, 'b');
	imap.assign(12, 5, 'b');
	//imap.assign(4, 10, 'b');
	//imap.assign(4, 12, 'b');
	//imap.assign(7, 13, 'a');
	//imap.assign(0, 10, 'e');
	//imap.assign(0, 10, 'e');
	// imap.assign(1, 13, 'a');
	imap.show();
}