/*
 * heuristic2.h
 *
 *  Created on: Feb 15, 2015
 *      Author: gbillig
 */

#ifndef HEURISTIC2_H_
#define HEURISTIC2_H_

#include "definitions.h"

int heuristic2(gridType grid);
int calc_lines2(gridType grid);

int searchVertical(gridType grid);
void searchHorizontal(gridType grid, int maxHeight);

#endif /* HEURISTIC2_H_ */