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
   H_dR_both_16->Range(-1.2,-0.04592671,6.8,0.4133404);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR__804 = new TH1D("VbbHcc_both_H_dR__804","",30,0,6);
   VbbHcc_both_H_dR__804->SetBinContent(5,0.1002972);
   VbbHcc_both_H_dR__804->SetBinContent(9,0.2116654);
   VbbHcc_both_H_dR__804->SetBinContent(12,0.2565367);
   VbbHcc_both_H_dR__804->SetBinContent(13,0.1336153);
   VbbHcc_both_H_dR__804->SetBinContent(15,0.204165);
   VbbHcc_both_H_dR__804->SetBinContent(17,0.3499178);
   VbbHcc_both_H_dR__804->SetBinError(5,0.1002972);
   VbbHcc_both_H_dR__804->SetBinError(9,0.1501967);
   VbbHcc_both_H_dR__804->SetBinError(12,0.1822502);
   VbbHcc_both_H_dR__804->SetBinError(13,0.1336153);
   VbbHcc_both_H_dR__804->SetBinError(15,0.1443828);
   VbbHcc_both_H_dR__804->SetBinError(17,0.2031002);
   VbbHcc_both_H_dR__804->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR__804->SetFillColor(ci);
   VbbHcc_both_H_dR__804->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR__804->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR__804->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__804->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__804->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__804->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__804->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__804->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__804->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__804->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__804->Draw("HIST");
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
