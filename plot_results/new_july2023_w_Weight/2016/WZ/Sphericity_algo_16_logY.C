void Sphericity_algo_16_logY()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Thu Aug 10 12:21:02 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-2.081075,1.133333,2.374941);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLogy();
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_7 = new TH1D("VbbHcc_algo_Sphericity_stack_7","",25,0,1);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(1,44.85286);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(2,41.93575);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(3,22.70821);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(4,12.28758);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(5,7.305431);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(6,2.736304);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(7,1.855066);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(8,0.3944345);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(9,0.1142889);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(13,0.04629735);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(1,2.293464);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(2,2.212447);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(3,1.635162);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(4,1.200451);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(5,0.9322589);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(6,0.5655922);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(7,0.466419);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(8,0.2104141);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(9,0.1142889);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(13,0.04629735);
   VbbHcc_algo_Sphericity_stack_7->SetEntries(1163);

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
