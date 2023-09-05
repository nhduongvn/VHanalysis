#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_16()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Tue Sep  5 10:48:26 2023) by ROOT version 6.28/04
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(-1.2,-0.001206305,6.8,0.01085674);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetLeftMargin(0.15);
   H_dR_tags_16->SetFrameBorderMode(0);
   H_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR__89 = new TH1D("VbbHcc_tags_H_dR__89","",30,0,6);
   VbbHcc_tags_H_dR__89->SetBinContent(4,0.009033701);
   VbbHcc_tags_H_dR__89->SetBinContent(5,0.004408359);
   VbbHcc_tags_H_dR__89->SetBinContent(6,0.00607568);
   VbbHcc_tags_H_dR__89->SetBinContent(7,0.005865289);
   VbbHcc_tags_H_dR__89->SetBinContent(9,0.00729779);
   VbbHcc_tags_H_dR__89->SetBinContent(10,0.003800747);
   VbbHcc_tags_H_dR__89->SetBinContent(13,0.001703818);
   VbbHcc_tags_H_dR__89->SetBinContent(14,0.003603949);
   VbbHcc_tags_H_dR__89->SetBinContent(15,0.002296727);
   VbbHcc_tags_H_dR__89->SetBinContent(16,0.008454491);
   VbbHcc_tags_H_dR__89->SetBinContent(17,0.002228546);
   VbbHcc_tags_H_dR__89->SetBinContent(18,0.009190891);
   VbbHcc_tags_H_dR__89->SetBinContent(19,0.004078287);
   VbbHcc_tags_H_dR__89->SetBinContent(20,0.002126481);
   VbbHcc_tags_H_dR__89->SetBinContent(21,0.003196902);
   VbbHcc_tags_H_dR__89->SetBinContent(22,0.001912616);
   VbbHcc_tags_H_dR__89->SetBinContent(23,0.001516135);
   VbbHcc_tags_H_dR__89->SetBinContent(24,0.002570627);
   VbbHcc_tags_H_dR__89->SetBinError(4,0.004534801);
   VbbHcc_tags_H_dR__89->SetBinError(5,0.003124239);
   VbbHcc_tags_H_dR__89->SetBinError(6,0.00352938);
   VbbHcc_tags_H_dR__89->SetBinError(7,0.004150359);
   VbbHcc_tags_H_dR__89->SetBinError(9,0.004238539);
   VbbHcc_tags_H_dR__89->SetBinError(10,0.002687852);
   VbbHcc_tags_H_dR__89->SetBinError(13,0.001703818);
   VbbHcc_tags_H_dR__89->SetBinError(14,0.00260332);
   VbbHcc_tags_H_dR__89->SetBinError(15,0.002296727);
   VbbHcc_tags_H_dR__89->SetBinError(16,0.004312451);
   VbbHcc_tags_H_dR__89->SetBinError(17,0.002228546);
   VbbHcc_tags_H_dR__89->SetBinError(18,0.00468461);
   VbbHcc_tags_H_dR__89->SetBinError(19,0.002886977);
   VbbHcc_tags_H_dR__89->SetBinError(20,0.002126481);
   VbbHcc_tags_H_dR__89->SetBinError(21,0.003196902);
   VbbHcc_tags_H_dR__89->SetBinError(22,0.001912616);
   VbbHcc_tags_H_dR__89->SetBinError(23,0.001516135);
   VbbHcc_tags_H_dR__89->SetBinError(24,0.002570627);
   VbbHcc_tags_H_dR__89->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR__89->SetFillColor(ci);
   VbbHcc_tags_H_dR__89->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR__89->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR__89->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__89->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__89->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__89->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__89->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__89->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__89->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__89->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__89->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_16->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->SetSelected(H_dR_tags_16);
}
