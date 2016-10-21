using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO.Ports;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SerialUI
{
    public partial class mainForm : Form
    {
        string RxString;

        public mainForm()
        {
            InitializeComponent();
        }

        private void AtualizaListaCOMs()
        {
            int i;
            bool quantDiferente; //flag para sinalizar que a quantidade de portas mudou

            i = 0;
            quantDiferente = false;

            //se a quantidade de portas mudou
            if (cmbPorts.Items.Count == SerialPort.GetPortNames().Length)
            {
                foreach (string s in SerialPort.GetPortNames())
                {
                    if (cmbPorts.Items[i++].Equals(s) == false)
                    {
                        quantDiferente = true;
                    }
                }
            }
            else
            {
                quantDiferente = true;
            }

            //Se não foi detectado diferença
            if (quantDiferente == false)
            {
                return;                     //retorna
            }

            //limpa comboBox
            cmbPorts.Items.Clear();

            //adiciona todas as COM diponíveis na lista
            foreach (string s in SerialPort.GetPortNames())
            {
                cmbPorts.Items.Add(s);
            }
            //seleciona a primeira posição da lista
            cmbPorts.SelectedIndex = -1;
        }

        private void timerCOM_Tick(object sender, EventArgs e)
        {
            AtualizaListaCOMs();
        }

        private void btnConect_Click(object sender, EventArgs e)
        {
            if (serialPort1.IsOpen == false)
            {
                try
                {
                    serialPort1.PortName = cmbPorts.Items[cmbPorts.SelectedIndex].ToString();
                    serialPort1.Open();

                }
                catch
                {
                    return;

                }
                if (serialPort1.IsOpen)
                {
                    btnConect.Text = "Desconectar";
                    cmbPorts.Enabled = false;
                }
            }
            else
            {

                try
                {
                    serialPort1.Close();
                    cmbPorts.Enabled = true;
                    btnConect.Text = "Conectar";
                }
                catch
                {
                    return;
                }

            }
        }

        private void serialPort1_DataReceived(object sender, SerialDataReceivedEventArgs e)
        {
            RxString = serialPort1.ReadExisting();              //le o dado disponível na serial
            this.Invoke(new EventHandler(trataDadoRecebido));   //chama outra thread para escrever o dado no
        }

        private void btnSend_Click(object sender, EventArgs e)
        {
            if (serialPort1.IsOpen == true)             //porta está aberta
                serialPort1.Write(txtSend.Text);        //envia o texto presente no textbox Enviar
        }

        private void trataDadoRecebido(object sender, EventArgs e)
        {
            txtReceive.AppendText(RxString);
        }

        private void btnLimpar_Click(object sender, EventArgs e)
        {
            txtReceive.Text = "";
        }

        private void btnLedOff_Click(object sender, EventArgs e)
        {
            if (serialPort1.IsOpen == true)             
                serialPort1.Write("0");
        }

        private void btnLedOn_Click(object sender, EventArgs e)
        {
            if (serialPort1.IsOpen == true)            
                serialPort1.Write("1");
        }
    }
}
