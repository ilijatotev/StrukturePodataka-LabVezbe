#include"OpenScatterTable.h"

void main()
{
	OpenScatterTable tablica(64);
	tablica.insert(*new ScatterObject("a@a.com", "a", "a", "www.a.rs"));
	tablica.insert(*new ScatterObject("b@b.com", "b", "b", "www.b.rs"));
	tablica.insert(*new ScatterObject("s@s.com", "s", "s", "www.s.rs"));
	tablica.insert(*new ScatterObject("n@n.com", "n", "n", "www.n.rs"));
	tablica.insert(*new ScatterObject("m@m.com", "m", "m", "www.m.rs"));
	tablica.insert(*new ScatterObject("g@g.com", "g", "g", "www.g.rs"));
	tablica.insert(*new ScatterObject("r@r.com", "r", "r", "www.r.rs"));
	tablica.insert(*new ScatterObject("zlj@zlj.com", "zlj", "zlj", "www.zlj.rs"));
	tablica.insert(*new ScatterObject("c@c.com", "c", "c", "www.c.rs"));
	tablica.insert(*new ScatterObject("h@h.com", "h", "h", "www.h.rs"));
	tablica.print();
	cout << endl;
	(tablica.find("zlj@zlj.com")).print();
}