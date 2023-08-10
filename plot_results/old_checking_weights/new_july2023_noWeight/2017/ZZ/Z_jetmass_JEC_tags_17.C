void Z_jetmass_JEC_tags_17()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_17/Z_jetmass_JEC_tags_17
//=========  (Thu Aug  3 12:24:00 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_tags_17 = new TCanvas("Z_jetmass_JEC_tags_17", "Z_jetmass_JEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_17->SetHighLightColor(2);
   Z_jetmass_JEC_tags_17->Range(-60,-1.262963,340,11.36666);
   Z_jetmass_JEC_tags_17->SetFillColor(0);
   Z_jetmass_JEC_tags_17->SetBorderMode(0);
   Z_jetmass_JEC_tags_17->SetBorderSize(2);
   Z_jetmass_JEC_tags_17->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC_stack_8 = new TH1D("VbbHcc_tags_Z_jetmass_JEC_stack_8","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(4,1.012902);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(5,4.304835);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(6,7.090317);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(7,9.622573);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(8,7.343543);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(9,4.558061);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(10,3.291933);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(11,2.785482);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(12,0.5064512);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(13,1.519354);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(14,0.2532256);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(15,0.2532256);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(16,0.5064512);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(17,0.2532256);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(18,0.2532256);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(20,0.2532256);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(21,0.2532256);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(22,0.2532256);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(25,0.2532256);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(29,0.2532256);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(44,0.2532256);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(4,0.5064512);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(5,1.044076);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(6,1.339944);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(7,1.560987);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(8,1.363662);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(9,1.074345);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(10,0.9130179);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(11,0.8398543);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(12,0.3581151);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(13,0.6202735);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(14,0.2532256);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(15,0.2532256);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(16,0.3581151);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(17,0.2532256);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(18,0.2532256);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(20,0.2532256);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(21,0.2532256);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(22,0.2532256);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(25,0.2532256);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(29,0.2532256);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(44,0.2532256);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetEntries(178);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_tags_17->Modified();
   Z_jetmass_JEC_tags_17->cd();
   Z_jetmass_JEC_tags_17->SetSelected(Z_jetmass_JEC_tags_17);
}
