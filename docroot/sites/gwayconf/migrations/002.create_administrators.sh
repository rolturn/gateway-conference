#!/bin/bash

echo "Creating administrators ..."
drush user-create amy --mail="amy.haberzettle@gatewaypeople.com" --password="password1"
drush user-create dacia --mail="dacia.milner@gatewaypeople.com" --password="password1"
drush user-create dino --mail="dino.gilley@gatewaypeople.com" --password="password1"
drush user-create gabriel --mail="gabriel.lopez@gatewaypeople.com" --password="password1"
drush user-create rolturn --mail="roland.turner@gatewaypeople.com" --password="password1"
drush user-create stan --mail="stan.carver@gatewaypeople.com" --password="password1"
drush user-create zac --mail="zachary.carver@gatewaypeople.com" --password="password1"
drush user-create darren --mail="darren.ladner@gatewaypeople.com" --password="password1"

echo "Adding administrators to administrator role ..."
drush user-add-role "administrator" --mail="amy.haberzettle@gatewaypeople.com"
drush user-add-role "administrator" --mail="dacia.milner@gatewaypeople.com"
drush user-add-role "administrator" --mail="dino.gilley@gatewaypeople.com"
drush user-add-role "administrator" --mail="gabriel.lopez@gatewaypeople.com"
drush user-add-role "administrator" --mail="roland.turner@gatewaypeople.com"
drush user-add-role "administrator" --mail="stan.carver@gatewaypeople.com"
drush user-add-role "administrator" --mail="zachary.carver@gatewaypeople.com"
drush user-add-role "administrator" --mail="darren.ladner@gatewaypeople.com"
