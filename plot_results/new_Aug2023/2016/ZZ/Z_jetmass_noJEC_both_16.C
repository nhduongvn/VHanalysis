void Z_jetmass_noJEC_both_16()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_both_16/Z_jetmass_noJEC_both_16
//=========  (Tue Aug 22 09:23:44 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_both_16 = new TCanvas("Z_jetmass_noJEC_both_16", "Z_jetmass_noJEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_both_16->SetHighLightColor(2);
   Z_jetmass_noJEC_both_16->Range(-60,-1.052367,340,9.471306);
   Z_jetmass_noJEC_both_16->SetFillColor(0);
   Z_jetmass_noJEC_both_16->SetBorderMode(0);
   Z_jetmass_noJEC_both_16->SetBorderSize(2);
   Z_jetmass_noJEC_both_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_noJEC_stack_8 = new TH1D("VbbHcc_both_Z_jetmass_noJEC_stack_8","",150,0,300);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(3,0.5993888);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(4,2.294036);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(5,8.018037);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(6,6.526055);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(7,4.499525);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(8,3.077091);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(9,2.203918);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(10,1.527107);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(11,1.151794);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(12,0.818122);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(13,0.6336924);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(14,0.2410249);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(15,0.4475902);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinContent(17,0.2139249);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(3,0.3463539);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(4,0.6708366);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(5,1.299362);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(6,1.165394);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(7,0.9583717);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(8,0.7988514);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(9,0.6995207);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(10,0.5546204);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(11,0.5161015);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(12,0.4105355);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(13,0.3662256);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(14,0.2410249);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(15,0.3172746);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetBinError(17,0.2139249);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetEntries(158);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_jetmass_noJEC_stack_8->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_both_16->Modified();
   Z_jetmass_noJEC_both_16->cd();
   Z_jetmass_noJEC_both_16->SetSelected(Z_jetmass_noJEC_both_16);
}
