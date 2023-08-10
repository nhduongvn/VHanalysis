void Z_jetmass_JEC_tags_17()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_17/Z_jetmass_JEC_tags_17
//=========  (Thu Aug  3 12:24:00 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_tags_17 = new TCanvas("Z_jetmass_JEC_tags_17", "Z_jetmass_JEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_17->SetHighLightColor(2);
   Z_jetmass_JEC_tags_17->Range(-60,-0.1952545,340,1.75729);
   Z_jetmass_JEC_tags_17->SetFillColor(0);
   Z_jetmass_JEC_tags_17->SetBorderMode(0);
   Z_jetmass_JEC_tags_17->SetBorderSize(2);
   Z_jetmass_JEC_tags_17->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC_stack_7 = new TH1D("VbbHcc_tags_Z_jetmass_JEC_stack_7","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(5,1.487653);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(6,1.487653);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(7,1.239711);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(9,0.7438266);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(10,0.2479422);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(11,0.2479422);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(12,0.2479422);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinContent(15,0.2479422);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(5,0.6073318);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(6,0.6073318);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(7,0.5544156);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(9,0.4294485);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(10,0.2479422);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(11,0.2479422);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(12,0.2479422);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetBinError(15,0.2479422);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetEntries(24);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_jetmass_JEC_stack_7->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC_stack_7->Draw("HIST");
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
