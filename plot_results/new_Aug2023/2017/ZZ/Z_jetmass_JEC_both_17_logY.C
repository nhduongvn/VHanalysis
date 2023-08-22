void Z_jetmass_JEC_both_17_logY()
{
//=========Macro generated from canvas: Z_jetmass_JEC_both_17/Z_jetmass_JEC_both_17
//=========  (Tue Aug 22 09:19:16 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_both_17 = new TCanvas("Z_jetmass_JEC_both_17", "Z_jetmass_JEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_both_17->SetHighLightColor(2);
   Z_jetmass_JEC_both_17->Range(-60,-1.313402,340,1.443428);
   Z_jetmass_JEC_both_17->SetFillColor(0);
   Z_jetmass_JEC_both_17->SetBorderMode(0);
   Z_jetmass_JEC_both_17->SetBorderSize(2);
   Z_jetmass_JEC_both_17->SetLogy();
   Z_jetmass_JEC_both_17->SetLeftMargin(0.15);
   Z_jetmass_JEC_both_17->SetFrameBorderMode(0);
   Z_jetmass_JEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_JEC_stack_8 = new TH1D("VbbHcc_both_Z_jetmass_JEC_stack_8","",150,0,300);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(4,0.6729337);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(5,4.736289);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(6,7.544596);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(7,7.765982);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(8,6.445242);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(9,3.771274);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(10,3.858304);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(11,2.356361);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(12,0.1838999);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(13,1.573138);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(14,0.5030675);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(15,0.7762903);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(16,0.509267);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(17,0.1833627);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(18,0.2688617);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(19,0.3620828);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(21,0.2076434);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(22,0.2559921);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(25,0.2016896);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(29,0.2089677);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(44,0.3456672);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(4,0.389869);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(5,1.07079);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(6,1.358357);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(7,1.353878);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(8,1.257038);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(9,0.9714512);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(10,1.002682);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(11,0.7661678);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(12,0.1838999);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(13,0.6060147);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(14,0.3631306);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(15,0.4510062);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(16,0.3659176);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(17,0.1833627);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(18,0.2688617);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(19,0.3620828);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(21,0.2076434);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(22,0.2559921);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(25,0.2016896);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(29,0.2089677);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(44,0.3456672);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetEntries(184);

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
