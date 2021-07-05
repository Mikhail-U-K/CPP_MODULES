#include <algorithm>
#include "span.hpp"

Span::Span(unsigned int N) { m_num = N;}

Span::~Span() {}

Span &Span::operator= (const Span &span) {
	if (this == &span)
		return (*this);
	if (!span_array.empty())
		span_array.erase(span_array.begin(), span_array.end());
	m_num = span.m_num;
	span_array = span.span_array;
	return (*this);
}

Span::Span(const Span &copy) { *this = copy; }

void Span::addNumber(const int &number) {
	if (span_array.size() >= m_num)
		throw ArrayIsFull();
	span_array.push_back(number);
	std::sort(span_array.begin(), span_array.end());
}

int Span::longestSpan() {
	if (span_array.empty() || (span_array.size() == 1))
		throw ArrayIsEmpty();
	int	max = *std::max_element(span_array.begin(), span_array.end());
	int min = *std::min_element(span_array.begin(), span_array.end());
	return (max - min);
}

int Span::shortestSpan() {
	if (span_array.empty() || (span_array.size() == 1))
		throw ArrayIsEmpty();
	std::sort(span_array.begin(), span_array.end());
	return (span_array[1] - span_array[0]);
}
