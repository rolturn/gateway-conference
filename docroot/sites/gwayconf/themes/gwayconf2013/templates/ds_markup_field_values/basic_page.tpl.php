


<?php
	//dsm($entity);
?>  

<hgroup>
	<h2 class="title">
		<?php print render($entity->title); ?>
	</h2>
</hgroup>
<div class="content">
	<?php print render($entity->body['und'][0]['value']); ?>
</div>
