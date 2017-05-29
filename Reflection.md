# Reflection

## Effect of Controls

The P, I, and D components of the PID algorithm each behaved as I expected them to.

I found the Proportional component to have the most effect on the stability of the car, since it directly acts on the cross-track error (CTE) to push the car back to the center line.

The Integral component played a minor role, since the car did not have any obvious inherent bias. However, it did help around turns because the turn acts as a bias in that the center line itself moves away from the car. This component absorbs error that otherwise might manifest in sharp adjustments and oscillations around the curve.

The Derivative component helped stabilize the car when it was on track towards the center line, reducing overshoot. I found it important not to make this component too large since it could cause sharp adjustments when the car would otherwise be on the right track.

## Choosing Hyperparameters

I manually tuned the hyperparameters, using the parameters Sebastian "carefully chose" in the PID lesson as a starting point.

Using the noticed effects of each hyperparameter described above, I spent the most time tuning the Proportional component, followed by the Derivative component. I only spent a small amount of time tuning the Integral component since it did not play as strong a role as the other two components.

I noticed that making the Proporational and Derivative components too high would cause extreme oscillations and sometimes push the car off the track, so after finding the upper limits of these I reduced them to satisfactory levels.
