.push(a);
				}
			}
		}
	}

	public void pop() {
		if (stack.isEmpty()) {
			System.out.println("Stack is empty");
		} else {
//            System.out.println("Popped element is: "+stack.pop());
            stack.pop();

        }

    }

    public void peek(){
        if (stack.isEmpty()) {
            System.out.println("Stack is empty");
        } else {
            System.out.println("Peek element is: "+stack.peek());

        }

    }

    public void printStack(){

        if (stack.isEmpty()) {
            System.out.println("Stack is empty");
        } else {

            Iterator itr = stack.iterator();

            while (itr.hasNext()){
                System