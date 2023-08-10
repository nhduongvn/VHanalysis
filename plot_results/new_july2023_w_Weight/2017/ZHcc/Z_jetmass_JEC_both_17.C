void Z_jetmass_JEC_both_17()
{
//=========Macro generated from canvas: Z_jetmass_JEC_both_17/Z_jetmass_JEC_both_17
//=========  (Thu Aug 10 12:25:23 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_both_17 = new TCanvas("Z_jetmass_JEC_both_17", "Z_jetmass_JEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_both_17->SetHighLightColor(2);
   Z_jetmass_JEC_both_17->Range(-60,-0.005101047,340,0.04590942);
   Z_jetmass_JEC_both_17->SetFillColor(0);
   Z_jetmass_JEC_both_17->SetBorderMode(0);
   Z_jetmass_JEC_both_17->SetBorderSize(2);
   Z_jetmass_JEC_both_17->SetLeftMargin(0.15);
   Z_jetmass_JEC_both_17->SetFrameBorderMode(0);
   Z_jetmass_JEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_JEC_stack_11 = new TH1D("VbbHcc_both_Z_jetmass_JEC_stack_11","",150,0,300);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(4,0.009068936);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(5,0.03089493);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(6,0.02877041);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(7,0.03886512);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(8,0.01614142);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(9,0.01486873);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(10,0.003195104);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(11,0.001859968);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(12,0.006606161);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(13,0.003659032);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(15,0.004024258);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(16,0.001185265);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(18,0.00125388);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(19,0.003781618);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(21,0.00163984);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(25,0.001724883);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(27,0.002310481);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(28,0.002015357);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(4,0.00408774);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(5,0.007528303);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(6,0.007463147);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(7,0.008468156);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(8,0.005523122);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(9,0.005526329);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(10,0.002328803);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(11,0.001859968);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(12,0.003373493);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(13,0.002590091);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(15,0.00286442);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(16,0.001185265);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(18,0.00125388);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(19,0.002674673);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(21,0.00163984);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(25,0.001724883);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(27,0.002310481);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(28,0.002015357);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetEntries(95);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_both_17->Modified();
   Z_jetmass_JEC_both_17->cd();
   Z_jetmass_JEC_both_17->SetSelected(Z_jetmass_JEC_both_17);
}
