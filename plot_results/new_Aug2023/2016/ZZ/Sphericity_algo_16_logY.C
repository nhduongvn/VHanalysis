void Sphericity_algo_16_logY()
{
//=========Macro generated from canvas: Sphericity_algo_16/Sphericity_algo_16
//=========  (Tue Aug 22 09:17:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_algo_16 = new TCanvas("Sphericity_algo_16", "Sphericity_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_algo_16->SetHighLightColor(2);
   Sphericity_algo_16->Range(-0.2,-1.357214,1.133333,2.231424);
   Sphericity_algo_16->SetFillColor(0);
   Sphericity_algo_16->SetBorderMode(0);
   Sphericity_algo_16->SetBorderSize(2);
   Sphericity_algo_16->SetLogy();
   Sphericity_algo_16->SetLeftMargin(0.15);
   Sphericity_algo_16->SetFrameBorderMode(0);
   Sphericity_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Sphericity_stack_8 = new TH1D("VbbHcc_algo_Sphericity_stack_8","",25,0,1);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(1,39.35603);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(2,36.72848);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(3,21.64728);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(4,11.35852);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(5,7.945941);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(6,3.106007);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(7,0.82596);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(8,0.224829);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(10,0.37157);
   VbbHcc_algo_Sphericity_stack_8->SetBinContent(11,0.2007614);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(1,2.846039);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(2,2.723274);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(3,2.105279);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(4,1.534733);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(5,1.273442);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(6,0.8082974);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(7,0.4136208);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(8,0.224829);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(10,0.2634844);
   VbbHcc_algo_Sphericity_stack_8->SetBinError(11,0.2007614);
   VbbHcc_algo_Sphericity_stack_8->SetEntries(609);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Sphericity_stack_8->SetFillColor(ci);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetRange(1,25);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Sphericity_stack_8->Draw("HIST");
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
