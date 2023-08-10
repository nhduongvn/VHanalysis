void Sphericity_algo_16()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Aug 10 12:28:42 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-5.553812,1.133333,49.9843);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_7 = new TH1D("VbbHcc_algo_Sphericity_stack_7","",25,0,1);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(1,42.31475);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(2,39.58829);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(3,21.37549);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(4,11.56022);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(5,6.761636);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(6,2.508349);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(7,1.63588);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(8,0.4362346);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(9,0.1090586);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(13,0.1090586);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(1,2.148206);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(2,2.077846);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(3,1.526821);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(4,1.122827);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(5,0.8587286);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(6,0.5230269);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(7,0.4223823);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(8,0.2181173);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(9,0.1090586);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(13,0.1090586);
   VbbHcc_algo_Sphericity_stack_7->SetEntries(1159);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Sphericity_stack_7->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_7->Draw("HIST");
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
