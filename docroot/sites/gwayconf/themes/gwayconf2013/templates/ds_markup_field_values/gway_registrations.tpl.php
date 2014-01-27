


<?php if (!empty($entity->field_registrations_early_title) || !empty($entity->field_registrations_title) || !empty($entity->field_registrations_child_title)  || !empty($entity->field_registrations_stdnt_title)  || !empty($entity->field_registrations_vol_title) || !empty($entity->field_registrations_late_title) || !empty($entity->field_registrations_grp_title)): ?>
    <div class="registration-table">
    <?php if (!empty($entity->field_registrations_early_title)): ?>
        <div class="registration-list-row regular-registration <?php if($entity->field_registrations_early_sold['und'][0]['value']=='1'): print 'soldout'; else: print ''; endif; ?>">
          <div class="registration-title">
            [node:field_registrations_early_title] <?php if (!empty($entity->field_registrations_early_spec)): ?><span class="registration-spec">([node:field_registrations_early_spec])</span><?php endif; ?>
          </div>
          <div class="registration-cost">
            <?php if($entity->field_registrations_early_sold['und'][0]['value']=='1'): ?>
              <span>Free</span>
            <?php else: ?>
              <?php if (!empty($entity->field_registrations_early_cost)): ?>$ [node:field_registrations_early_cost]<?php endif; ?>
            <?php endif; ?>
          </div>
          <div class="registration-link">
            <?php if($entity->field_registrations_early_sold['und'][0]['value']=='1'): ?>
              <span class="not-available">Sold Out</span>
            <?php else: ?>
              <?php if (!empty($entity->field_registrations_early_link)): ?>
                <a href="[node:field_registrations_early_link]" target="_blank"><span>Register Now</span></a>
              <?php endif; ?>
            <?php endif; ?>
          </div>
        </div>
    <?php endif; ?>
    <?php if (!empty($entity->field_registrations_title)): ?>
        <div class="registration-list-row regular-registration <?php if($entity->field_registrations_soldout['und'][0]['value']=='1'): print 'soldout'; ?><?php else: print ''; ?> <?php endif; ?>">
          <div class="registration-title">
            [node:field_registrations_title] <?php if (!empty($entity->field_registrations_spec)): ?><span class="registration-spec">([node:field_registrations_spec])</span><?php endif; ?>
          </div>
          <div class="registration-cost">
            <?php if($entity->field_registrations_free['und'][0]['value']=='1'): ?>
              <span>Free</span>
            <?php else: ?>
              <?php if (!empty($entity->field_registrations_cost)): ?>$ [node:field_registrations_cost]<?php endif; ?>
            <?php endif; ?>
          </div>
          <div class="registration-link">
            <?php if($entity->field_registrations_soldout['und'][0]['value']=='1'): ?>
              <span class="not-available">Sold Out</span>
            <?php else: ?>
              <?php if (!empty($entity->field_registrations_link)): ?>
                <a href="[node:field_registrations_link]" target="_blank"><span>Register Now</span></a>
              <?php endif; ?>
            <?php endif; ?>
          </div>
        </div>
    <?php endif; ?>
    <?php if (!empty($entity->field_registrations_vol_title)): ?>
        <div class="registration-list-row regular-registration <?php if($entity->field_registrations_vol_soldout['und'][0]['value']=='1'): print 'soldout'; ?><?php else: print ''; ?> <?php endif; ?>">
          <div class="registration-title">
            [node:field_registrations_vol_title] <?php if (!empty($entity->field_registrations_vol_spec)): ?><span class="registration-spec">([node:field_registrations_vol_spec])</span><?php endif; ?>
          </div>
          <div class="registration-cost">
            <?php if($entity->field_registrations_vol_free['und'][0]['value']=='1'): ?>
              <span>Free</span>
            <?php else: ?>
              <?php if (!empty($entity->field_registrations_vol_cost)): ?>$ [node:field_registrations_vol_cost]<?php endif; ?>
            <?php endif; ?>
          </div>
          <div class="registration-link">
            <?php if(($entity->field_registrations_vol_free['und'][0]['value']=='1') && ($entity->field_registrations_vol_soldout['und'][0]['value']=='1')): ?>
              <span class="not-available">Not Available</span>
            <?php elseif($entity->field_registrations_vol_soldout['und'][0]['value']=='1'): ?>
              <span class="not-available">Sold Out</span>
            <?php else: ?>
              <?php if (!empty($entity->field_registrations_vol_link)): ?>
                <a href="[node:field_registrations_vol_link]" target="_blank"><span>Register Now</span></a>
              <?php endif; ?>
            <?php endif; ?>
          </div>
        </div>
    <?php endif; ?>
    <?php if (!empty($entity->field_registrations_stdnt_title)): ?>
        <div class="registration-list-row regular-registration <?php if($entity->field_registrations_stdnt_sold['und'][0]['value']=='1'): print 'soldout'; ?><?php else: print ''; ?> <?php endif; ?>">
          <div class="registration-title">
            [node:field_registrations_stdnt_title] <?php if (!empty($entity->field_registrations_stdnt_spec)): ?><span class="registration-spec">([node:field_registrations_stdnt_spec])</span><?php endif; ?>
          </div>
          <div class="registration-cost">
              <?php if (!empty($entity->field_registrations_stdnt_cost)): ?>$ [node:field_registrations_stdnt_cost]<?php endif; ?>
          </div>
          <div class="registration-link">
            <?php if($entity->field_registrations_stdnt_sold['und'][0]['value']=='1'): ?>
              <span class="not-available">Sold Out</span>
            <?php else: ?>
              <?php if (!empty($entity->field_registrations_stdnt_link)): ?>
                <a href="[node:field_registrations_stdnt_link]" target="_blank"><span>Register Now</span></a>
              <?php endif; ?>
            <?php endif; ?>
          </div>
        </div>
    <?php endif; ?>
    <?php if (!empty($entity->field_registrations_grp_title)): ?>
        <div class="registration-list-row regular-registration <?php if($entity->field_registrations_grp_soldout['und'][0]['value']=='1'): print 'soldout'; ?><?php else: print ''; ?> <?php endif; ?>">
          <div class="registration-title">
            [node:field_registrations_grp_title] <?php if (!empty($entity->field_registrations_grp_spec)): ?><span class="registration-spec">([node:field_registrations_grp_spec])</span><?php endif; ?>
          </div>
          <div class="registration-cost">
              <?php if (!empty($entity->field_registrations_grp_cost)): ?>$ [node:field_registrations_grp_cost]<?php endif; ?>
          </div>
          <div class="registration-link">
            <?php if($entity->field_registrations_grp_soldout['und'][0]['value']=='1'): ?>
              <span class="not-available">Sold Out</span>
            <?php else: ?>
              <?php if (!empty($entity->field_registrations_grp_link)): ?>
                <a href="[node:field_registrations_grp_link]" target="_blank"><span>Register Now</span></a>
              <?php endif; ?>
            <?php endif; ?>
          </div>
        </div>
    <?php endif; ?>
    <?php if (!empty($entity->field_registrations_late_title)): ?>
        <div class="registration-list-row regular-registration <?php if($entity->field_registrations_late_soldout['und'][0]['value']=='1'): print 'soldout'; ?><?php else: print ''; ?> <?php endif; ?>">
          <div class="registration-title">
            [node:field_registrations_late_title] <?php if (!empty($entity->field_registrations_late_spec)): ?><span class="registration-spec">([node:field_registrations_late_spec])</span><?php endif; ?>
          </div>
          <div class="registration-cost">
              <?php if (!empty($entity->field_registrations_late_cost)): ?>$ [node:field_registrations_late_cost]<?php endif; ?>
          </div>
          <div class="registration-link">
            <?php if($entity->field_registrations_late_soldout['und'][0]['value']=='1'): ?>
              <span class="not-available">Sold Out</span>
            <?php else: ?>
              <?php if (!empty($entity->field_registrations_late_link)): ?>
                <a href="[node:field_registrations_late_link]" target="_blank"><span>Register Now</span></a>
              <?php endif; ?>
            <?php endif; ?>
          </div>
        </div>
    <?php endif; ?>
    <?php if (!empty($entity->field_registrations_child_title)): ?>
        <div class="registration-list-row regular-registration <?php if($entity->field_registrations_child_sold['und'][0]['value']=='1'): print 'soldout'; ?><?php else: print ''; ?> <?php endif; ?>">
          <div class="registration-title">
            [node:field_registrations_child_title] <?php if (!empty($entity->field_registrations_child_spec)): ?><span class="registration-spec">[node:field_registrations_child_spec]</span><?php endif; ?>
          </div>
          <div class="registration-cost">
            <?php if($entity->field_registrations_child_free['und'][0]['value']=='1'): ?>
              <span>Free</span>
            <?php else: ?>
              <?php if (!empty($entity->field_registrations_child_cost)): ?>$ [node:field_registrations_child_cost]<?php endif; ?>
            <?php endif; ?>
          </div>
          <div class="registration-link">
            <?php if($entity->field_registations_child_avail['und'][0]['value']=='0'): ?>
              <span class="not-available">Not Available</span>
            <?php elseif(($entity->field_registrations_child_free['und'][0]['value']=='1') && ($entity->field_registrations_child_sold['und'][0]['value']=='1')): ?>
              <span class="not-available">Not Available</span>
            <?php elseif($entity->field_registrations_child_sold['und'][0]['value']=='1'): ?>
              <span class="not-available">Sold Out</span>
            <?php else: ?>
              <?php if (!empty($entity->field_registrations_child_link)): ?>
                <a href="[node:field_registrations_child_link]" target="_blank"><span>Register Now</span></a>
              <?php endif; ?>
            <?php endif; ?>
          </div>
        </div>
    <?php endif; ?>
    </div> <!-- .registration-table -->
  <?php endif; ?>
