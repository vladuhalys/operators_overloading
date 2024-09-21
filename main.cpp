#include "queue.h"

bool Logger::is_print_logs = true;

int main()
{
	Queue * human_queue = new Queue(3);

	human_queue->push(new Human("John Doe"));
	human_queue->push(new Human("Jane Doe"));
	human_queue->push(new Human("Alex Smith"));
	human_queue->push(new Human("Michael Johnson"));
	human_queue->push(new Human("Samantha Johnson"));

	human_queue->print_all();

	delete human_queue;
}