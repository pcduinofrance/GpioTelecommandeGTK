#include <stdlib.h>
#include <gtk/gtk.h>
// -----------------------------------------------------------------------
/*Fonction de callback pour le switch*/
// -----------------------------------------------------------------------


void activate_cb0 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{
		

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio0", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio0", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb1 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio1", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio1", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb2 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio2", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio2", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb3 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio3", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio3", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb4 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio4", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio4", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb5 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio5", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio5", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb6 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio6", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio6", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb7 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio7", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio7", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb8 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio8", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio8", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb9 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio9", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio9", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb10 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio10", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio10", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb11 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio11", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio11", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb12 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio12", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio12", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
void activate_cb13 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
{


	if(gtk_switch_get_active (GTK_SWITCH (switcher)))// Passage a 1

		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio13", "w");
	
			if (gpio != NULL)
				{	
					fputc('1', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}

	else  // Passage a 0


		{

			FILE* gpio = NULL;
			gpio = fopen("/sys/devices/virtual/misc/gpio/pin/gpio13", "w");
	
			if (gpio != NULL)
				{	
					fputc('0', gpio);	
    				fclose(gpio), gpio = NULL;
				}
	  
			else
				{
    				printf("erreur");
				}
		}
	
}
// -----------------------------------------------------------------------
