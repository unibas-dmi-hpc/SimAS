/*********************************************************************************
 * Copyright (c) 2018                                                            *
 * Ali Mohammed and Florina M. Ciorba                                            *
 * <ali.mohammed@unibas.ch>, <florina.ciorba@unibas.ch>                          *
 * University of Basel, Switzerland                                              *
 * All rights reserved.                                                          *
 *                                                                               *
 *                                                                               *
 * This program is free software; you can redistribute it and/or modify it       *
 * under the terms of the license MIT which comes with this package.             *
 *********************************************************************************/

#ifndef SimAS_H
#define SimAS_H

#include <stdio.h>
#include "mpi.h"
#include "DLS.h"



typedef struct
{

 int SimAS_flag;
 double SimAS_t1, SimAS_t2;
 char *tasks_file;
 char *platform;
 int SimAS_last_t;
 int sim_finished;
 char *sim_path;
 double last_check;
 int default_DLS; // default DLS
 double period; // simulation period
} infoSimAS;


void SimAS_sim(char *sim_path, char *platform, int nhosts,int ntasks,char *flops_file,double h, double sigma,int start_task, double start_time, double period, int id);
int SimAS_select(char *platform, int nhosts,int ntasks, int id);
//void SimAS_setup(infoDLS *info, infoSimAS *SimAS_data, char *plaformfile, char *task_file);
int SimAS_setup(infoSimAS *SimAS_data, char *sim_path, char *plaformfile, char *task_file, int method, int P, int N, double h, double sigma);
int SimAS_setup_full(infoSimAS *SimAS_data, char *sim_path, char *plaform_file, char *tasks_file, int method, int P, int N, double h, double sigma, int default_DLS, double period);
void SimAS_update(infoDLS *iInfo, infoSimAS *SimAS_data);


#endif
