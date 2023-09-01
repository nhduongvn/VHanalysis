#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_16()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Fri Sep  1 13:23:42 2023) by ROOT version 6.28/04
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-0.6493509,6.8,5.844158);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR__806 = new TH1D("VbbHcc_both_H_dR__806","",30,0,6);
   VbbHcc_both_H_dR__806->SetBinContent(3,2.016625);
   VbbHcc_both_H_dR__806->SetBinContent(4,4.048401);
   VbbHcc_both_H_dR__806->SetBinContent(5,4.423093);
   VbbHcc_both_H_dR__806->SetBinContent(6,2.792578);
   VbbHcc_both_H_dR__806->SetBinContent(7,1.514126);
   VbbHcc_both_H_dR__806->SetBinContent(8,1.085019);
   VbbHcc_both_H_dR__806->SetBinContent(9,0.7200731);
   VbbHcc_both_H_dR__806->SetBinContent(10,1.555144);
   VbbHcc_both_H_dR__806->SetBinContent(11,1.592849);
   VbbHcc_both_H_dR__806->SetBinContent(12,2.914927);
   VbbHcc_both_H_dR__806->SetBinContent(13,1.209287);
   VbbHcc_both_H_dR__806->SetBinContent(14,2.472341);
   VbbHcc_both_H_dR__806->SetBinContent(15,4.947435);
   VbbHcc_both_H_dR__806->SetBinContent(16,2.730844);
   VbbHcc_both_H_dR__806->SetBinContent(17,1.322462);
   VbbHcc_both_H_dR__806->SetBinContent(18,0.9462682);
   VbbHcc_both_H_dR__806->SetBinContent(19,0.6548895);
   VbbHcc_both_H_dR__806->SetBinContent(20,0.2369551);
   VbbHcc_both_H_dR__806->SetBinError(3,0.6458706);
   VbbHcc_both_H_dR__806->SetBinError(4,0.977676);
   VbbHcc_both_H_dR__806->SetBinError(5,0.9568067);
   VbbHcc_both_H_dR__806->SetBinError(6,0.7855171);
   VbbHcc_both_H_dR__806->SetBinError(7,0.5821852);
   VbbHcc_both_H_dR__806->SetBinError(8,0.5473006);
   VbbHcc_both_H_dR__806->SetBinError(9,0.3636306);
   VbbHcc_both_H_dR__806->SetBinError(10,0.5956733);
   VbbHcc_both_H_dR__806->SetBinError(11,0.6286756);
   VbbHcc_both_H_dR__806->SetBinError(12,0.8205453);
   VbbHcc_both_H_dR__806->SetBinError(13,0.5072296);
   VbbHcc_both_H_dR__806->SetBinError(14,0.7126152);
   VbbHcc_both_H_dR__806->SetBinError(15,1.048378);
   VbbHcc_both_H_dR__806->SetBinError(16,0.7881017);
   VbbHcc_both_H_dR__806->SetBinError(17,0.5170513);
   VbbHcc_both_H_dR__806->SetBinError(18,0.4763447);
   VbbHcc_both_H_dR__806->SetBinError(19,0.3781261);
   VbbHcc_both_H_dR__806->SetBinError(20,0.2369551);
   VbbHcc_both_H_dR__806->SetEntries(175);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR__806->SetFillColor(ci);
   VbbHcc_both_H_dR__806->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR__806->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR__806->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__806->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__806->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__806->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__806->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__806->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__806->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__806->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__806->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}
