#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_both_16()
{
//=========Macro generated from canvas: Z_dR_both_16/Z_dR_both_16
//=========  (Fri Sep  1 13:23:42 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_both_16 = new TCanvas("Z_dR_both_16", "Z_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_16->SetHighLightColor(2);
   Z_dR_both_16->Range(-1.2,-0.0007362225,6.8,0.006626002);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
   Z_dR_both_16->SetLeftMargin(0.15);
   Z_dR_both_16->SetFrameBorderMode(0);
   Z_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR__795 = new TH1D("VbbHcc_both_Z_dR__795","",30,0,6);
   VbbHcc_both_Z_dR__795->SetBinContent(3,0.002574686);
   VbbHcc_both_Z_dR__795->SetBinContent(4,0.005091169);
   VbbHcc_both_Z_dR__795->SetBinContent(5,0.005609314);
   VbbHcc_both_Z_dR__795->SetBinContent(6,0.005015914);
   VbbHcc_both_Z_dR__795->SetBinContent(7,0.001055288);
   VbbHcc_both_Z_dR__795->SetBinContent(8,0.001449985);
   VbbHcc_both_Z_dR__795->SetBinContent(9,0.001679793);
   VbbHcc_both_Z_dR__795->SetBinContent(10,0.00145436);
   VbbHcc_both_Z_dR__795->SetBinContent(11,0.0006609237);
   VbbHcc_both_Z_dR__795->SetBinContent(12,0.001964576);
   VbbHcc_both_Z_dR__795->SetBinContent(13,0.001466189);
   VbbHcc_both_Z_dR__795->SetBinContent(14,0.0002574087);
   VbbHcc_both_Z_dR__795->SetBinContent(15,0.001064248);
   VbbHcc_both_Z_dR__795->SetBinContent(17,0.002037237);
   VbbHcc_both_Z_dR__795->SetBinContent(18,0.0004987505);
   VbbHcc_both_Z_dR__795->SetBinContent(19,0.001262281);
   VbbHcc_both_Z_dR__795->SetBinContent(20,0.0005306593);
   VbbHcc_both_Z_dR__795->SetBinContent(21,0.0008294408);
   VbbHcc_both_Z_dR__795->SetBinContent(22,0.0003336279);
   VbbHcc_both_Z_dR__795->SetBinContent(23,0.0005608097);
   VbbHcc_both_Z_dR__795->SetBinContent(24,0.0009401638);
   VbbHcc_both_Z_dR__795->SetBinContent(25,0.0009295721);
   VbbHcc_both_Z_dR__795->SetBinContent(26,0.0002973074);
   VbbHcc_both_Z_dR__795->SetBinContent(27,0.0006113349);
   VbbHcc_both_Z_dR__795->SetBinContent(29,0.0006271467);
   VbbHcc_both_Z_dR__795->SetBinContent(31,0.0002624588);
   VbbHcc_both_Z_dR__795->SetBinError(3,0.0008593973);
   VbbHcc_both_Z_dR__795->SetBinError(4,0.001246962);
   VbbHcc_both_Z_dR__795->SetBinError(5,0.001284246);
   VbbHcc_both_Z_dR__795->SetBinError(6,0.001166906);
   VbbHcc_both_Z_dR__795->SetBinError(7,0.0005286436);
   VbbHcc_both_Z_dR__795->SetBinError(8,0.0006626807);
   VbbHcc_both_Z_dR__795->SetBinError(9,0.0007566806);
   VbbHcc_both_Z_dR__795->SetBinError(10,0.0006600837);
   VbbHcc_both_Z_dR__795->SetBinError(11,0.0004679923);
   VbbHcc_both_Z_dR__795->SetBinError(12,0.0007455602);
   VbbHcc_both_Z_dR__795->SetBinError(13,0.0006594099);
   VbbHcc_both_Z_dR__795->SetBinError(14,0.0002574087);
   VbbHcc_both_Z_dR__795->SetBinError(15,0.0005338413);
   VbbHcc_both_Z_dR__795->SetBinError(17,0.0007856595);
   VbbHcc_both_Z_dR__795->SetBinError(18,0.0003535094);
   VbbHcc_both_Z_dR__795->SetBinError(19,0.0005654323);
   VbbHcc_both_Z_dR__795->SetBinError(20,0.0003907375);
   VbbHcc_both_Z_dR__795->SetBinError(21,0.0004858871);
   VbbHcc_both_Z_dR__795->SetBinError(22,0.0003336279);
   VbbHcc_both_Z_dR__795->SetBinError(23,0.0003965719);
   VbbHcc_both_Z_dR__795->SetBinError(24,0.0005474972);
   VbbHcc_both_Z_dR__795->SetBinError(25,0.0005420652);
   VbbHcc_both_Z_dR__795->SetBinError(26,0.0002973074);
   VbbHcc_both_Z_dR__795->SetBinError(27,0.0004334356);
   VbbHcc_both_Z_dR__795->SetBinError(29,0.000444302);
   VbbHcc_both_Z_dR__795->SetBinError(31,0.0002624588);
   VbbHcc_both_Z_dR__795->SetEntries(137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR__795->SetFillColor(ci);
   VbbHcc_both_Z_dR__795->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_both_Z_dR__795->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR__795->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__795->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR__795->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__795->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__795->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__795->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__795->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR__795->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__795->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_16->Modified();
   Z_dR_both_16->cd();
   Z_dR_both_16->SetSelected(Z_dR_both_16);
}
