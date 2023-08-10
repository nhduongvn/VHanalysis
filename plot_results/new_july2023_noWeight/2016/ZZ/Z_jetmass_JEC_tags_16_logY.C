void Z_jetmass_JEC_tags_16_logY()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_16/Z_jetmass_JEC_tags_16
//=========  (Thu Aug 10 12:31:47 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_tags_16 = new TCanvas("Z_jetmass_JEC_tags_16", "Z_jetmass_JEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_16->SetHighLightColor(2);
   Z_jetmass_JEC_tags_16->Range(-60,-1.190282,340,1.562003);
   Z_jetmass_JEC_tags_16->SetFillColor(0);
   Z_jetmass_JEC_tags_16->SetBorderMode(0);
   Z_jetmass_JEC_tags_16->SetBorderSize(2);
   Z_jetmass_JEC_tags_16->SetLogy();
   Z_jetmass_JEC_tags_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC_stack_8 = new TH1D("VbbHcc_tags_Z_jetmass_JEC_stack_8","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(3,0.2432072);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(4,1.216036);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(5,10.2147);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(6,9.971493);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(7,6.8098);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(8,5.10735);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(9,2.918486);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(10,1.216036);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(11,1.70245);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(12,1.216036);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(13,0.2432072);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(14,0.4864143);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(16,0.2432072);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(17,0.2432072);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinContent(20,0.2432072);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(3,0.2432072);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(4,0.5438277);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(5,1.576162);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(6,1.557286);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(7,1.286931);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(8,1.114515);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(9,0.8424943);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(10,0.5438277);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(11,0.6434656);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(12,0.5438277);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(13,0.2432072);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(14,0.3439469);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(16,0.2432072);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(17,0.2432072);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetBinError(20,0.2432072);
   VbbHcc_tags_Z_jetmass_JEC_stack_8->SetEntries(173);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_tags_16->Modified();
   Z_jetmass_JEC_tags_16->cd();
   Z_jetmass_JEC_tags_16->SetSelected(Z_jetmass_JEC_tags_16);
}
