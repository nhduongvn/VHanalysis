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
   Z_dR_both_16->Range(-1.2,-3.024671,6.8,27.22203);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
   Z_dR_both_16->SetLeftMargin(0.15);
   Z_dR_both_16->SetFrameBorderMode(0);
   Z_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR__788 = new TH1D("VbbHcc_both_Z_dR__788","",30,0,6);
   VbbHcc_both_Z_dR__788->SetBinContent(2,0.0003056053);
   VbbHcc_both_Z_dR__788->SetBinContent(3,23.04511);
   VbbHcc_both_Z_dR__788->SetBinContent(4,14.71473);
   VbbHcc_both_Z_dR__788->SetBinContent(5,12.11934);
   VbbHcc_both_Z_dR__788->SetBinContent(6,8.383884);
   VbbHcc_both_Z_dR__788->SetBinContent(7,9.330067);
   VbbHcc_both_Z_dR__788->SetBinContent(8,8.491642);
   VbbHcc_both_Z_dR__788->SetBinContent(9,6.419683);
   VbbHcc_both_Z_dR__788->SetBinContent(10,7.672167);
   VbbHcc_both_Z_dR__788->SetBinContent(11,4.897315);
   VbbHcc_both_Z_dR__788->SetBinContent(12,8.449425);
   VbbHcc_both_Z_dR__788->SetBinContent(13,6.516151);
   VbbHcc_both_Z_dR__788->SetBinContent(14,7.935374);
   VbbHcc_both_Z_dR__788->SetBinContent(15,9.536955);
   VbbHcc_both_Z_dR__788->SetBinContent(16,5.419579);
   VbbHcc_both_Z_dR__788->SetBinContent(17,6.593333);
   VbbHcc_both_Z_dR__788->SetBinContent(18,8.053695);
   VbbHcc_both_Z_dR__788->SetBinContent(19,4.62821);
   VbbHcc_both_Z_dR__788->SetBinContent(20,3.965309);
   VbbHcc_both_Z_dR__788->SetBinContent(21,3.536129);
   VbbHcc_both_Z_dR__788->SetBinContent(22,3.684875);
   VbbHcc_both_Z_dR__788->SetBinContent(23,2.242176);
   VbbHcc_both_Z_dR__788->SetBinContent(24,3.297266);
   VbbHcc_both_Z_dR__788->SetBinContent(25,2.036945);
   VbbHcc_both_Z_dR__788->SetBinContent(26,2.372432);
   VbbHcc_both_Z_dR__788->SetBinContent(27,1.189981);
   VbbHcc_both_Z_dR__788->SetBinContent(28,1.819109);
   VbbHcc_both_Z_dR__788->SetBinContent(29,1.580324);
   VbbHcc_both_Z_dR__788->SetBinContent(30,1.276049);
   VbbHcc_both_Z_dR__788->SetBinContent(31,0.2076652);
   VbbHcc_both_Z_dR__788->SetBinError(2,0.0003056053);
   VbbHcc_both_Z_dR__788->SetBinError(3,4.61921);
   VbbHcc_both_Z_dR__788->SetBinError(4,1.640973);
   VbbHcc_both_Z_dR__788->SetBinError(5,1.741994);
   VbbHcc_both_Z_dR__788->SetBinError(6,1.202485);
   VbbHcc_both_Z_dR__788->SetBinError(7,1.671398);
   VbbHcc_both_Z_dR__788->SetBinError(8,1.464056);
   VbbHcc_both_Z_dR__788->SetBinError(9,1.142206);
   VbbHcc_both_Z_dR__788->SetBinError(10,1.677114);
   VbbHcc_both_Z_dR__788->SetBinError(11,1.007534);
   VbbHcc_both_Z_dR__788->SetBinError(12,1.716732);
   VbbHcc_both_Z_dR__788->SetBinError(13,1.12549);
   VbbHcc_both_Z_dR__788->SetBinError(14,1.679998);
   VbbHcc_both_Z_dR__788->SetBinError(15,4.641491);
   VbbHcc_both_Z_dR__788->SetBinError(16,1.185627);
   VbbHcc_both_Z_dR__788->SetBinError(17,1.43649);
   VbbHcc_both_Z_dR__788->SetBinError(18,2.027312);
   VbbHcc_both_Z_dR__788->SetBinError(19,1.001699);
   VbbHcc_both_Z_dR__788->SetBinError(20,0.9144565);
   VbbHcc_both_Z_dR__788->SetBinError(21,0.9069598);
   VbbHcc_both_Z_dR__788->SetBinError(22,1.041181);
   VbbHcc_both_Z_dR__788->SetBinError(23,0.4946814);
   VbbHcc_both_Z_dR__788->SetBinError(24,0.947796);
   VbbHcc_both_Z_dR__788->SetBinError(25,0.4496428);
   VbbHcc_both_Z_dR__788->SetBinError(26,0.97535);
   VbbHcc_both_Z_dR__788->SetBinError(27,0.3736662);
   VbbHcc_both_Z_dR__788->SetBinError(28,0.4765618);
   VbbHcc_both_Z_dR__788->SetBinError(29,0.3868547);
   VbbHcc_both_Z_dR__788->SetBinError(30,0.3296489);
   VbbHcc_both_Z_dR__788->SetBinError(31,0.1161618);
   VbbHcc_both_Z_dR__788->SetEntries(3785);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_Z_dR__788->SetFillColor(ci);
   VbbHcc_both_Z_dR__788->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_both_Z_dR__788->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR__788->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__788->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR__788->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__788->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__788->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__788->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR__788->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR__788->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR__788->Draw("HIST");
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
