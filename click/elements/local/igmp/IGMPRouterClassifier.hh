#ifndef CLICK_IGMPROUTERCLASSIFIER_HH
#define CLICK_IGMPROUTERCLASSIFIER_HH

#include <click/element.hh>
#include "IGMPRouterDB.hh"

CLICK_DECLS

/*
=c

Classifies packets, IGMP reports are set on output 1 and all other trafic on port 0

IGMPRouterClassifier(TODO)

=s

TODO: Summary

=d

TODO: Complete description

*/
class IGMPRouterClassifier : public Element {
	//TODO: Add private attributes

	public:
		IGMPRouterClassifier();
		~IGMPRouterClassifier();

		int configure(Vector<String>&, ErrorHandler*);

		const char *class_name() const { return "IGMPRouterClassifier"; }
		const char *port_count() const { return "1/2"; }
		const char *processing() const { return PUSH; }

		Packet * simple_action(Packet *p);

	private:
		IGMPRouterDB* db;
};

CLICK_ENDDECLS

#endif
