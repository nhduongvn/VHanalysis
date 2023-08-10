void Z_jetmass_JEC_both_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_both_18/Z_jetmass_JEC_both_18
//=========  (Thu Aug 10 12:25:24 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_both_18 = new TCanvas("Z_jetmass_JEC_both_18", "Z_jetmass_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_both_18->SetHighLightColor(2);
   Z_jetmass_JEC_both_18->Range(-60,-0.006481129,340,0.05833016);
   Z_jetmass_JEC_both_18->SetFillColor(0);
   Z_jetmass_JEC_both_18->SetBorderMode(0);
   Z_jetmass_JEC_both_18->SetBorderSize(2);
   Z_jetmass_JEC_both_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_both_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_JEC_stack_11 = new TH1D("VbbHcc_both_Z_jetmass_JEC_stack_11","",150,0,300);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(4,0.005653624);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(5,0.02079791);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(6,0.04938003);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(7,0.0229326);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(8,0.02148372);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(9,0.03001627);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(10,0.007854268);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(11,0.01588634);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(12,0.00501802);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(13,0.005399574);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(14,0.002842044);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(15,0.002794763);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(16,0.001634157);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(17,0.002842044);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(4,0.003998583);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(5,0.007930059);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(6,0.01206949);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(7,0.008645762);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(8,0.00815327);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(9,0.009339412);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(10,0.004601366);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(11,0.00673026);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(12,0.003579397);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(13,0.003822055);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(14,0.002842044);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(15,0.002794763);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(16,0.001634157);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(17,0.002842044);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetEntries(69);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_both_18->Modified();
   Z_jetmass_JEC_both_18->cd();
   Z_jetmass_JEC_both_18->SetSelected(Z_jetmass_JEC_both_18);
}
