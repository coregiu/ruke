/**
  ******************************************************************************
  *
  * main controller
  * author: coregiu
  *
  *
  ******************************************************************************
**/

#ifndef PS2_CONTROLLER_H
#define PS2_CONTROLLER_H

#include <mcs51/8051.h>
#include <ps2_receiver.h>
#include <motor_driver.h>
#include <pwm_manager.h>
#include <command_receiver.h>

/**
 * init uart and all receive modules
 *
 */
void init_modules();

/**
 * execute commands;
 *
 */
void execute_commands(struct command_key *command_key);

/**
 * notify modules to execute the commands.
 * car_module: the module of car, such as motor, music, led
 * car_cmd: the command
 *
 */
void notify_all(struct command_key *command_key);

#endif