void Sphericity_algo_16_logY()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Tue Aug 22 09:17:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-2.179685,1.133333,2.226423);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLogy();
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_7 = new TH1D("VbbHcc_algo_Sphericity_stack_7","",25,0,1);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(1,32.23024);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(2,29.40834);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(3,15.83144);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(4,8.796835);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(5,5.33313);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(6,1.851359);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(7,1.364895);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(8,0.2899744);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(9,0.07967665);
   VbbHcc_algo_Sphericity_stack_7->SetBinContent(13,0.03647169);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(1,1.679259);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(2,1.588733);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(3,1.166631);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(4,0.8834831);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(5,0.6873772);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(6,0.4004618);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(7,0.3430445);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(8,0.1538564);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(9,0.07967665);
   VbbHcc_algo_Sphericity_stack_7->SetBinError(13,0.03647169);
   VbbHcc_algo_Sphericity_stack_7->SetEntries(1121);

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
