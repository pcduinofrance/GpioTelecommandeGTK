#include <stdlib.h>
#include <gtk/gtk.h>

/*Fonction de callback pour le switch*/
// -----------------------------------------------------------------------
static void activate_cb0 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
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
static void activate_cb1 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
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
static void activate_cb2 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
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
static void activate_cb3 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
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
static void activate_cb4 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
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
static void activate_cb5 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
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
static void activate_cb6 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
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
static void activate_cb7 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
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
static void activate_cb8 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
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
static void activate_cb9 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
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
static void activate_cb10 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
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
static void activate_cb11 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
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
static void activate_cb12 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
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
static void activate_cb13 (GObject *switcher, GParamSpec *pspec, gpointer user_data)            
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







/* ----------------------------- */
/* Fin des fonctions de callback */
/* ----------------------------- */


static void activate (GtkApplication *app, gpointer user_data)         
{
	GtkWidget *window;
	GtkWidget *grid;
	GtkWidget *switcher;
	GtkWidget *label;

  /* création de la fenetre  */
	window = gtk_application_window_new (app);
	gtk_window_set_position (GTK_WINDOW(window), GTK_WIN_POS_CENTER);
	gtk_window_set_title (GTK_WINDOW (window), "Telecommande-Pcduino");
	gtk_container_set_border_width (GTK_CONTAINER (window), 10);

  /* construction du conteneur type grid */
	grid = gtk_grid_new ();
	gtk_grid_set_row_homogeneous (GTK_GRID (grid), TRUE);
	gtk_grid_set_column_homogeneous (GTK_GRID (grid), TRUE);                 
	gtk_grid_set_column_spacing (GTK_GRID (grid), 10);
	gtk_grid_set_row_spacing (GTK_GRID (grid), 10);

  /* Placement du conteneur dans la fenetre */
	gtk_container_add (GTK_CONTAINER (window), grid);


// ---------------------------------------------------------------------
	/*Creer un label*/
	label = gtk_label_new ("Gpio 0");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 0, 1, 1);

	/*Creer un switch avec pour valeur de defaut desactive*/
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	
	/*placement du switch*/
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 0, 1, 1);
	
	/*Connecter le signal clique a la fonction de callback*/
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb0), window);

	// ---------------------------------------------------------------------------
	label = gtk_label_new ("Gpio 1");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 1, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 1, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb1), window);

	// ---------------------------------------------------------------------------

	label = gtk_label_new ("Gpio 2");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 2, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 2, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb2), window);

	// ---------------------------------------------------------------------------

	label = gtk_label_new ("Gpio 3");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 3, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 3, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb3), window);

	// ---------------------------------------------------------------------------

	label = gtk_label_new ("Gpio 4");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 4, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 4, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb4), window);

	// ---------------------------------------------------------------------------

	label = gtk_label_new ("Gpio 5");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 5, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 5, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb5), window);

	// ---------------------------------------------------------------------------
	
	label = gtk_label_new ("Gpio 6");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 6, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 6, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb6), window);

	// ---------------------------------------------------------------------------

	label = gtk_label_new ("Gpio 7");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 7, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 7, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb7), window);

	// ---------------------------------------------------------------------------

	label = gtk_label_new ("Gpio 8");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 8, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 8, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb8), window);

	// ---------------------------------------------------------------------------

	label = gtk_label_new ("Gpio 9");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 9, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 9, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb9), window);

	// ---------------------------------------------------------------------------

	label = gtk_label_new ("Gpio 10");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 10, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 10, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb10), window);

	// ---------------------------------------------------------------------------

	label = gtk_label_new ("Gpio 11");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 11, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 11, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb11), window);

	// ---------------------------------------------------------------------------

	label = gtk_label_new ("Gpio 12");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 12, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 12, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb12), window);

	// ---------------------------------------------------------------------------
	
	label = gtk_label_new ("Gpio 13");
	gtk_grid_attach (GTK_GRID (grid), label, 0, 13, 1, 1);
	switcher = gtk_switch_new ();
	gtk_switch_set_active (GTK_SWITCH (switcher), FALSE);
	gtk_grid_attach (GTK_GRID (grid), switcher, 1, 13, 1, 1);
	g_signal_connect (GTK_SWITCH (switcher), "notify::active", G_CALLBACK (activate_cb13), window);

	// ---------------------------------------------------------------------------


gtk_widget_show_all (window);

}

int main (int    argc, char **argv)
{
  GtkApplication *app;
  int status;

  app = gtk_application_new ("Pc.Duino.France", G_APPLICATION_FLAGS_NONE);
  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
  status = g_application_run (G_APPLICATION (app), argc, argv);
  g_object_unref (app);

  return status;
}