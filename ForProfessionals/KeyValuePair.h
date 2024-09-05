#pragma once

template <typename K = int, typename V = int> 
class KeyValuePair
{
private:
	K key;
	V value;
public:
	explicit KeyValuePair(const K& key, const V& value);
	K getKey() const { return key; }
	V getValue() const { return value; }
	void setKey(const K& key) { this->key = key; }
	void setValue(const K& value) { this->value = value; }
};

template<typename K, typename V>
KeyValuePair<K, V>::KeyValuePair(const K& key, const V& value) : key{ key }, value{ value }
{
}

