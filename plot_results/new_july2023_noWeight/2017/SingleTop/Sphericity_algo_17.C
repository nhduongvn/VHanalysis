void Sphericity_algo_17()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Aug 10 12:28:43 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-472.3481,1.133333,4251.133);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_2 = new TH1D("VbbHcc_algo_Sphericity_stack_2","",25,0,1);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(1,3598.842);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(2,3559.087);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(3,1993.072);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(4,1130.508);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(5,582.6091);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(6,270.1995);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(7,116.5452);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(8,49.62784);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(9,25.22908);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(10,13.81165);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(11,7.505397);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(12,6.970149);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(13,3.329712);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(14,1.772128);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(15,2.154826);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(16,1.39683);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(17,1.104572);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(18,1.279809);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(19,0.193253);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(20,0.1980106);
   VbbHcc_algo_Sphericity_stack_2->SetBinContent(21,0.04712387);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(1,22.8445);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(2,22.69723);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(3,16.91463);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(4,12.87549);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(5,9.339564);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(6,6.276214);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(7,4.104125);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(8,2.610777);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(9,1.953606);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(10,1.402106);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(11,0.9909605);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(12,1.03489);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(13,0.7453172);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(14,0.2915313);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(15,0.5741155);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(16,0.4243125);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(17,0.4071549);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(18,0.4815423);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(19,0.09671431);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(20,0.09911952);
   VbbHcc_algo_Sphericity_stack_2->SetBinError(21,0.04712387);
   VbbHcc_algo_Sphericity_stack_2->SetEntries(147618);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Sphericity_stack_2->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_2->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_17->Modified();
   Sphericity_algo_17->cd();
   Sphericity_algo_17->SetSelected(Sphericity_algo_17);
}
