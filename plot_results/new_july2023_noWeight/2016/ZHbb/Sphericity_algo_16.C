void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Aug 10 12:28:42 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-4.042121,1.133333,36.37908);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_9 = new TH1D("VbbHcc_algo_Sphericity_stack_9","",25,0,1);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(1,30.11425);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(2,30.79711);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(3,17.02462);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(4,10.88993);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(5,6.710376);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(6,3.187566);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(7,0.865589);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(8,0.2088405);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(9,0.07831519);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(10,0.04396642);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(11,0.02473111);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(12,0.01648741);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(13,0.006869754);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(14,0.002747902);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(15,0.001373951);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(17,0.001373951);
   VbbHcc_algo_Sphericity_stack_9->SetBinContent(19,0.001373951);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(1,0.2034097);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(2,0.205703);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(3,0.1529412);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(4,0.1223202);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(5,0.0960194);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(6,0.06617823);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(7,0.03448589);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(8,0.0169392);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(9,0.0103731);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(10,0.007772239);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(11,0.005829179);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(12,0.004759505);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(13,0.003072247);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(14,0.00194306);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(15,0.001373951);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(17,0.001373951);
   VbbHcc_algo_Sphericity_stack_9->SetBinError(19,0.001373951);
   VbbHcc_algo_Sphericity_stack_9->SetEntries(72765);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_algo_Sphericity_stack_9->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_9->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_algo_16->Modified();
   Sphericity_algo_16->cd();
   Sphericity_algo_16->SetSelected(Sphericity_algo_16);
}
