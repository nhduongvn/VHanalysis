void H_dR_Bj1_both_16()
{
//=========Macro generated from canvas: H_dR_Bj1_both_16/H_dR_Bj1_both_16
//=========  (Tue Aug 22 09:23:04 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_both_16 = new TCanvas("H_dR_Bj1_both_16", "H_dR_Bj1_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_both_16->SetHighLightColor(2);
   H_dR_Bj1_both_16->Range(-1.2,-1.187304,6.8,10.68574);
   H_dR_Bj1_both_16->SetFillColor(0);
   H_dR_Bj1_both_16->SetBorderMode(0);
   H_dR_Bj1_both_16->SetBorderSize(2);
   H_dR_Bj1_both_16->SetLeftMargin(0.15);
   H_dR_Bj1_both_16->SetFrameBorderMode(0);
   H_dR_Bj1_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(1,2.660625);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(2,9.046125);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(3,4.789125);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(4,5.853375);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(5,2.394562);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(6,3.458812);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(7,2.1285);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(8,1.596375);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(9,0.7981875);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(10,1.330312);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(11,1.06425);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(12,1.06425);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(13,0.7981875);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(14,1.596375);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(15,1.596375);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(16,1.06425);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(17,0.2660625);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(18,0.2660625);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinContent(20,0.2660625);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(1,0.8413635);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(2,1.551398);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(3,1.128808);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(4,1.247944);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(5,0.7981875);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(6,0.959302);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(7,0.7525384);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(8,0.6517174);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(9,0.4608338);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(10,0.5949338);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(11,0.532125);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(12,0.532125);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(13,0.4608338);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(14,0.6517174);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(15,0.6517174);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(16,0.532125);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(17,0.2660625);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(18,0.2660625);
   VbbHcc_both_H_dR_Bj1_stack_8->SetBinError(20,0.2660625);
   VbbHcc_both_H_dR_Bj1_stack_8->SetEntries(158);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj1_stack_8->SetFillColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_both_16->Modified();
   H_dR_Bj1_both_16->cd();
   H_dR_Bj1_both_16->SetSelected(H_dR_Bj1_both_16);
}
