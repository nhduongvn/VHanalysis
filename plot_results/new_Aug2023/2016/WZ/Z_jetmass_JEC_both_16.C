void Z_jetmass_JEC_both_16()
{
//=========Macro generated from canvas: Z_jetmass_JEC_both_16/Z_jetmass_JEC_both_16
//=========  (Tue Aug 22 09:23:48 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_both_16 = new TCanvas("Z_jetmass_JEC_both_16", "Z_jetmass_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_both_16->SetHighLightColor(2);
   Z_jetmass_JEC_both_16->Range(-60,-0.1615757,340,1.454181);
   Z_jetmass_JEC_both_16->SetFillColor(0);
   Z_jetmass_JEC_both_16->SetBorderMode(0);
   Z_jetmass_JEC_both_16->SetBorderSize(2);
   Z_jetmass_JEC_both_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_both_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_JEC_stack_7 = new TH1D("VbbHcc_both_Z_jetmass_JEC_stack_7","",150,0,300);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinContent(4,0.3225619);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinContent(5,1.231053);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinContent(6,0.8958525);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinContent(7,0.3099546);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinContent(8,0.5442302);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinContent(9,0.5754095);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinContent(10,0.09124724);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinContent(11,0.08824371);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinContent(15,0.09753612);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinContent(18,0.2099408);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinError(4,0.1615226);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinError(5,0.3297856);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinError(6,0.2853968);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinError(7,0.1608359);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinError(8,0.223066);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinError(9,0.2353041);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinError(10,0.09124724);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinError(11,0.08824371);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinError(15,0.09753612);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetBinError(18,0.1485491);
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetEntries(49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_jetmass_JEC_stack_7->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_7->Draw("HIST");
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
