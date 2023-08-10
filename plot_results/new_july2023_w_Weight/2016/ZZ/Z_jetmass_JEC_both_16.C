void Z_jetmass_JEC_both_16()
{
//=========Macro generated from canvas: Z_jetmass_JEC_both_16/Z_jetmass_JEC_both_16
//=========  (Thu Aug 10 12:25:22 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_both_16 = new TCanvas("Z_jetmass_JEC_both_16", "Z_jetmass_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_both_16->SetHighLightColor(2);
   Z_jetmass_JEC_both_16->Range(-60,-1.523668,340,13.71301);
   Z_jetmass_JEC_both_16->SetFillColor(0);
   Z_jetmass_JEC_both_16->SetBorderMode(0);
   Z_jetmass_JEC_both_16->SetBorderSize(2);
   Z_jetmass_JEC_both_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_both_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_JEC_stack_8 = new TH1D("VbbHcc_both_Z_jetmass_JEC_stack_8","",150,0,300);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(3,0.2638274);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(4,2.392827);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(5,11.60889);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(6,11.53195);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(7,6.411201);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(8,4.771777);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(9,3.162961);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(10,0.8929273);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(11,1.67879);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(12,1.793924);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(13,0.2662654);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(14,0.5753316);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(15,0.2495996);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinContent(17,0.2556187);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(3,0.2638274);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(4,0.7998834);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(5,1.776116);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(6,1.743412);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(7,1.290196);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(8,1.1163);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(9,0.913954);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(10,0.4693655);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(11,0.686038);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(12,0.6800516);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(13,0.2662654);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(14,0.4068211);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(15,0.2495996);
   VbbHcc_both_Z_jetmass_JEC_stack_8->SetBinError(17,0.2556187);
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
