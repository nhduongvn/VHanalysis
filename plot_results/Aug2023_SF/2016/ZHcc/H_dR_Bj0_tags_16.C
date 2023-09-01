#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_tags_16()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_16/H_dR_Bj0_tags_16
//=========  (Fri Sep  1 13:23:33 2023) by ROOT version 6.28/04
   TCanvas *H_dR_Bj0_tags_16 = new TCanvas("H_dR_Bj0_tags_16", "H_dR_Bj0_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_tags_16->SetHighLightColor(2);
   H_dR_Bj0_tags_16->Range(-1.2,-0.003948667,6.8,0.035538);
   H_dR_Bj0_tags_16->SetFillColor(0);
   H_dR_Bj0_tags_16->SetBorderMode(0);
   H_dR_Bj0_tags_16->SetBorderSize(2);
   H_dR_Bj0_tags_16->SetLeftMargin(0.15);
   H_dR_Bj0_tags_16->SetFrameBorderMode(0);
   H_dR_Bj0_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR_Bj0__164 = new TH1D("VbbHcc_tags_H_dR_Bj0__164","",30,0,6);
   VbbHcc_tags_H_dR_Bj0__164->SetBinContent(1,0.002735007);
   VbbHcc_tags_H_dR_Bj0__164->SetBinContent(2,0.01641004);
   VbbHcc_tags_H_dR_Bj0__164->SetBinContent(3,0.002735007);
   VbbHcc_tags_H_dR_Bj0__164->SetBinContent(4,0.03008508);
   VbbHcc_tags_H_dR_Bj0__164->SetBinContent(5,0.008205022);
   VbbHcc_tags_H_dR_Bj0__164->SetBinContent(6,0.008205022);
   VbbHcc_tags_H_dR_Bj0__164->SetBinContent(7,0.002735007);
   VbbHcc_tags_H_dR_Bj0__164->SetBinContent(9,0.005470015);
   VbbHcc_tags_H_dR_Bj0__164->SetBinContent(10,0.002735007);
   VbbHcc_tags_H_dR_Bj0__164->SetBinContent(13,0.002735007);
   VbbHcc_tags_H_dR_Bj0__164->SetBinContent(14,0.002735007);
   VbbHcc_tags_H_dR_Bj0__164->SetBinContent(15,0.002735007);
   VbbHcc_tags_H_dR_Bj0__164->SetBinContent(16,0.008205022);
   VbbHcc_tags_H_dR_Bj0__164->SetBinContent(18,0.002735007);
   VbbHcc_tags_H_dR_Bj0__164->SetBinError(1,0.002735007);
   VbbHcc_tags_H_dR_Bj0__164->SetBinError(2,0.006699373);
   VbbHcc_tags_H_dR_Bj0__164->SetBinError(3,0.002735007);
   VbbHcc_tags_H_dR_Bj0__164->SetBinError(4,0.009070994);
   VbbHcc_tags_H_dR_Bj0__164->SetBinError(5,0.004737172);
   VbbHcc_tags_H_dR_Bj0__164->SetBinError(6,0.004737172);
   VbbHcc_tags_H_dR_Bj0__164->SetBinError(7,0.002735007);
   VbbHcc_tags_H_dR_Bj0__164->SetBinError(9,0.003867885);
   VbbHcc_tags_H_dR_Bj0__164->SetBinError(10,0.002735007);
   VbbHcc_tags_H_dR_Bj0__164->SetBinError(13,0.002735007);
   VbbHcc_tags_H_dR_Bj0__164->SetBinError(14,0.002735007);
   VbbHcc_tags_H_dR_Bj0__164->SetBinError(15,0.002735007);
   VbbHcc_tags_H_dR_Bj0__164->SetBinError(16,0.004737172);
   VbbHcc_tags_H_dR_Bj0__164->SetBinError(18,0.002735007);
   VbbHcc_tags_H_dR_Bj0__164->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj0__164->SetFillColor(ci);
   VbbHcc_tags_H_dR_Bj0__164->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VbbHcc_tags_H_dR_Bj0__164->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR_Bj0__164->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__164->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0__164->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__164->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__164->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__164->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0__164->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj0__164->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0__164->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_tags_16->Modified();
   H_dR_Bj0_tags_16->cd();
   H_dR_Bj0_tags_16->SetSelected(H_dR_Bj0_tags_16);
}
