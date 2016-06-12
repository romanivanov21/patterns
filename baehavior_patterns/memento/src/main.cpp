#include "memento.h"
#include "caretaker.h"
#include "originator.h"

int main(void)
{
	game_satae *game_st = new game_satae();
	plyer *ply0 = new plyer();
	game_st->save_state(ply0);
	game_st->load_state(ply0);
	ply0->print_pulse();
	plyer *ply1 = new plyer();
	ply1->get_hurt(20);
	ply1->get_hurt(30);
	ply1->get_hurt(20);
	game_st->save_state(ply1);
	game_st->load_state(ply1);
	ply1->print_pulse();
	ply1->get_cure(30);
	ply1->print_pulse();
	game_st->load_state(ply0);
	ply0->print_pulse();
	delete game_st;
	delete ply0;
	delete ply1;
	return 0;
}