void Z_jetmass_JEC_both_16()
{
//=========Macro generated from canvas: Z_jetmass_JEC_both_16/Z_jetmass_JEC_both_16
//=========  (Thu Aug 10 12:29:48 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_both_16 = new TCanvas("Z_jetmass_JEC_both_16", "Z_jetmass_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_both_16->SetHighLightColor(2);
   Z_jetmass_JEC_both_16->Range(-60,-1.404521,340,12.64069);
   Z_jetmass_JEC_both_16->SetFillColor(0);
   Z_jetmass_JEC_both_16->SetBorderMode(0);
   Z_jetmass_JEC_both_16->SetBorderSize(2);
   Z_jetmass_JEC_both_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_both_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_JEC_stack_8 = new TH1D("VbbHcc_both_Z_jetmass_JEC_stack_8","",150,0,300);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(3,0.2432072);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(4,2.188864);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(5,10.45791);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(6,10.70111);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(7,6.080179);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(8,4.620936);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(9,2.918486);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(10,0.9728286);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(11,1.459243);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(12,1.70245);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(13,0.2432072);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(14,0.4864143);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(15,0.2432072);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(17,0.2432072);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(3,0.2432072);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(4,0.7296215);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(5,1.594816);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(6,1.613254);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(7,1.216036);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(8,1.060115);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(9,0.8424943);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(10,0.4864143);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(11,0.5957334);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(12,0.6434656);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(13,0.2432072);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(14,0.3439469);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(15,0.2432072);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(17,0.2432072);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetEntries(175);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_both_16->Modified();
   Z_jetmass_JEC_both_16->cd();
   Z_jetmass_JEC_both_16->SetSelected(Z_jetmass_JEC_both_16);
}
