void Z_dR_Bj1_both_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_16/Z_dR_Bj1_both_16
//=========  (Tue Aug 22 09:18:42 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_both_16 = new TCanvas("Z_dR_Bj1_both_16", "Z_dR_Bj1_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_both_16->SetHighLightColor(2);
   Z_dR_Bj1_both_16->Range(-1.2,-1.141377,6.8,1.511931);
   Z_dR_Bj1_both_16->SetFillColor(0);
   Z_dR_Bj1_both_16->SetBorderMode(0);
   Z_dR_Bj1_both_16->SetBorderSize(2);
   Z_dR_Bj1_both_16->SetLogy();
   Z_dR_Bj1_both_16->SetLeftMargin(0.15);
   Z_dR_Bj1_both_16->SetFrameBorderMode(0);
   Z_dR_Bj1_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_8 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_8","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(1,1.330312);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(2,6.3855);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(3,9.312188);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(4,5.32125);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(5,3.990937);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(6,2.660625);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(7,2.926687);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(8,1.330312);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(9,1.596375);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(10,0.532125);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(12,1.596375);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(13,1.330312);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(14,0.532125);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(15,0.7981875);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(17,0.7981875);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(19,0.2660625);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(21,0.2660625);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(24,0.532125);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinContent(25,0.532125);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(1,0.5949338);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(2,1.303435);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(3,1.574047);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(4,1.189868);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(5,1.030456);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(6,0.8413635);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(7,0.8824295);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(8,0.5949338);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(9,0.6517174);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(10,0.3762692);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(12,0.6517174);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(13,0.5949338);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(14,0.3762692);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(15,0.4608338);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(17,0.4608338);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(19,0.2660625);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(21,0.2660625);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(24,0.3762692);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetBinError(25,0.3762692);
   VbbHcc_both_Z_dR_Bj1_stack_8->SetEntries(158);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_dR_Bj1_stack_8->SetFillColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_both_16->Modified();
   Z_dR_Bj1_both_16->cd();
   Z_dR_Bj1_both_16->SetSelected(Z_dR_Bj1_both_16);
}
