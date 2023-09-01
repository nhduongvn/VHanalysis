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
   H_dR_both_16->Range(-1.2,-0.001823807,6.8,0.01641426);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR__809 = new TH1D("VbbHcc_both_H_dR__809","",30,0,6);
   VbbHcc_both_H_dR__809->SetBinContent(4,0.007106435);
   VbbHcc_both_H_dR__809->SetBinContent(5,0.01389567);
   VbbHcc_both_H_dR__809->SetBinContent(6,0.007591815);
   VbbHcc_both_H_dR__809->SetBinContent(7,0.004870127);
   VbbHcc_both_H_dR__809->SetBinContent(8,0.001918567);
   VbbHcc_both_H_dR__809->SetBinContent(9,0.008945946);
   VbbHcc_both_H_dR__809->SetBinContent(10,0.003800747);
   VbbHcc_both_H_dR__809->SetBinContent(11,0.003196902);
   VbbHcc_both_H_dR__809->SetBinContent(13,0.006127026);
   VbbHcc_both_H_dR__809->SetBinContent(14,0.001425773);
   VbbHcc_both_H_dR__809->SetBinContent(15,0.009222123);
   VbbHcc_both_H_dR__809->SetBinContent(16,0.006896238);
   VbbHcc_both_H_dR__809->SetBinContent(17,0.002228546);
   VbbHcc_both_H_dR__809->SetBinContent(23,0.002135123);
   VbbHcc_both_H_dR__809->SetBinError(4,0.004104883);
   VbbHcc_both_H_dR__809->SetBinError(5,0.005740281);
   VbbHcc_both_H_dR__809->SetBinError(6,0.003841248);
   VbbHcc_both_H_dR__809->SetBinError(7,0.003486811);
   VbbHcc_both_H_dR__809->SetBinError(8,0.001918567);
   VbbHcc_both_H_dR__809->SetBinError(9,0.004521699);
   VbbHcc_both_H_dR__809->SetBinError(10,0.002687852);
   VbbHcc_both_H_dR__809->SetBinError(11,0.003196902);
   VbbHcc_both_H_dR__809->SetBinError(13,0.003563688);
   VbbHcc_both_H_dR__809->SetBinError(14,0.001425773);
   VbbHcc_both_H_dR__809->SetBinError(15,0.004693488);
   VbbHcc_both_H_dR__809->SetBinError(16,0.004090366);
   VbbHcc_both_H_dR__809->SetBinError(17,0.002228546);
   VbbHcc_both_H_dR__809->SetBinError(23,0.002135123);
   VbbHcc_both_H_dR__809->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR__809->SetFillColor(ci);
   VbbHcc_both_H_dR__809->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR__809->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR__809->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__809->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__809->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__809->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__809->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__809->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__809->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__809->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__809->Draw("HIST");
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
