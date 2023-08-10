void Sphericity_algo_17()
{
//=========Macro generated from canvas: Sphericity_algo_17/Sphericity_algo_17
//=========  (Thu Aug 10 12:28:43 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_17 = new TCanvas("Sphericity_algo_17", "Sphericity_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_17->SetHighLightColor(2);
   Sphericity_algo_17->Range(-0.2,-0.02924452,1.133333,0.2632007);
   Sphericity_algo_17->SetFillColor(0);
   Sphericity_algo_17->SetBorderMode(0);
   Sphericity_algo_17->SetBorderSize(2);
   Sphericity_algo_17->SetLeftMargin(0.15);
   Sphericity_algo_17->SetFrameBorderMode(0);
   Sphericity_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_11 = new TH1D("VbbHcc_algo_Sphericity_stack_11","",25,0,1);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(1,0.2228154);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(2,0.1864696);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(3,0.1090373);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(4,0.0679508);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(5,0.04108653);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(6,0.01580251);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(7,0.007901256);
   VbbHcc_algo_Sphericity_stack_11->SetBinContent(9,0.001580251);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(1,0.01876444);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(2,0.01716592);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(3,0.01312655);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(4,0.0103624);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(5,0.008057731);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(6,0.004997193);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(7,0.003533549);
   VbbHcc_algo_Sphericity_stack_11->SetBinError(9,0.001580251);
   VbbHcc_algo_Sphericity_stack_11->SetEntries(413);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Sphericity_stack_11->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_11->Draw("HIST");
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
