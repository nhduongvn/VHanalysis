void Sphericity_both_18()
{
//=========Macro generated from canvas: Sphericity_both_18/Sphericity_both_18
//=========  (Tue Aug 22 09:23:15 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_both_18 = new TCanvas("Sphericity_both_18", "Sphericity_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_both_18->SetHighLightColor(2);
   Sphericity_both_18->Range(-0.2,-1.540325,1.133333,13.86293);
   Sphericity_both_18->SetFillColor(0);
   Sphericity_both_18->SetBorderMode(0);
   Sphericity_both_18->SetBorderSize(2);
   Sphericity_both_18->SetLeftMargin(0.15);
   Sphericity_both_18->SetFrameBorderMode(0);
   Sphericity_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Sphericity_stack_8 = new TH1D("VbbHcc_both_Sphericity_stack_8","",25,0,1);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(1,11.73581);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(2,11.68707);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(3,8.030527);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(4,8.043885);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(5,6.907504);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(6,3.100456);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(7,4.085834);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(8,3.7158);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(9,2.117733);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(10,2.797992);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(11,1.613282);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(12,0.8492597);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(13,0.6152127);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(14,0.6060478);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(15,0.2587137);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(16,1.32577);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(17,0.3188761);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(19,0.3700786);
   VbbHcc_both_Sphericity_stack_8->SetBinContent(20,0.370387);
   VbbHcc_both_Sphericity_stack_8->SetBinError(1,1.916566);
   VbbHcc_both_Sphericity_stack_8->SetBinError(2,1.892373);
   VbbHcc_both_Sphericity_stack_8->SetBinError(3,1.623664);
   VbbHcc_both_Sphericity_stack_8->SetBinError(4,1.551728);
   VbbHcc_both_Sphericity_stack_8->SetBinError(5,1.431781);
   VbbHcc_both_Sphericity_stack_8->SetBinError(6,1.011307);
   VbbHcc_both_Sphericity_stack_8->SetBinError(7,1.15824);
   VbbHcc_both_Sphericity_stack_8->SetBinError(8,1.059353);
   VbbHcc_both_Sphericity_stack_8->SetBinError(9,0.811144);
   VbbHcc_both_Sphericity_stack_8->SetBinError(10,0.9463632);
   VbbHcc_both_Sphericity_stack_8->SetBinError(11,0.7299699);
   VbbHcc_both_Sphericity_stack_8->SetBinError(12,0.5027807);
   VbbHcc_both_Sphericity_stack_8->SetBinError(13,0.4431308);
   VbbHcc_both_Sphericity_stack_8->SetBinError(14,0.3807772);
   VbbHcc_both_Sphericity_stack_8->SetBinError(15,0.2587137);
   VbbHcc_both_Sphericity_stack_8->SetBinError(16,0.6181865);
   VbbHcc_both_Sphericity_stack_8->SetBinError(17,0.3188761);
   VbbHcc_both_Sphericity_stack_8->SetBinError(19,0.3700786);
   VbbHcc_both_Sphericity_stack_8->SetBinError(20,0.370387);
   VbbHcc_both_Sphericity_stack_8->SetEntries(232);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Sphericity_stack_8->SetFillColor(ci);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetRange(1,25);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Sphericity_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Sphericity_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Sphericity_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_both_18->Modified();
   Sphericity_both_18->cd();
   Sphericity_both_18->SetSelected(Sphericity_both_18);
}
