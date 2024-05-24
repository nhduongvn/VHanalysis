#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_WW_tagFirst_18_logY()
{
//=========Macro generated from canvas: H_dR_WW_tagFirst_18/H_dR_WW_tagFirst_18
//=========  (Thu May 23 20:48:28 2024) by ROOT version 6.28/10
   TCanvas *H_dR_WW_tagFirst_18 = new TCanvas("H_dR_WW_tagFirst_18", "H_dR_WW_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_WW_tagFirst_18->SetHighLightColor(2);
   H_dR_WW_tagFirst_18->Range(-1.24,-0.6171243,7.026667,1.472707);
   H_dR_WW_tagFirst_18->SetFillColor(0);
   H_dR_WW_tagFirst_18->SetFillStyle(4000);
   H_dR_WW_tagFirst_18->SetBorderMode(0);
   H_dR_WW_tagFirst_18->SetBorderSize(2);
   H_dR_WW_tagFirst_18->SetLogy();
   H_dR_WW_tagFirst_18->SetLeftMargin(0.15);
   H_dR_WW_tagFirst_18->SetFrameFillStyle(1000);
   H_dR_WW_tagFirst_18->SetFrameBorderMode(0);
   H_dR_WW_tagFirst_18->SetFrameFillStyle(1000);
   H_dR_WW_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_H_dR__174 = new TH1D("VH_tagFirst_H_dR__174","",30,0,6);
   VH_tagFirst_H_dR__174->SetBinContent(3,7.460777);
   VH_tagFirst_H_dR__174->SetBinContent(4,6.325297);
   VH_tagFirst_H_dR__174->SetBinContent(5,7.115536);
   VH_tagFirst_H_dR__174->SetBinContent(6,2.740495);
   VH_tagFirst_H_dR__174->SetBinContent(7,4.411861);
   VH_tagFirst_H_dR__174->SetBinContent(8,3.365856);
   VH_tagFirst_H_dR__174->SetBinContent(9,2.928581);
   VH_tagFirst_H_dR__174->SetBinContent(10,0.965451);
   VH_tagFirst_H_dR__174->SetBinContent(11,4.067203);
   VH_tagFirst_H_dR__174->SetBinContent(12,5.094333);
   VH_tagFirst_H_dR__174->SetBinContent(13,8.781965);
   VH_tagFirst_H_dR__174->SetBinContent(14,9.121381);
   VH_tagFirst_H_dR__174->SetBinContent(15,7.950937);
   VH_tagFirst_H_dR__174->SetBinContent(16,9.686678);
   VH_tagFirst_H_dR__174->SetBinContent(17,3.601452);
   VH_tagFirst_H_dR__174->SetBinContent(18,4.375492);
   VH_tagFirst_H_dR__174->SetBinContent(19,6.866748);
   VH_tagFirst_H_dR__174->SetBinContent(20,1.142559);
   VH_tagFirst_H_dR__174->SetBinContent(21,2.789656);
   VH_tagFirst_H_dR__174->SetBinContent(22,4.212351);
   VH_tagFirst_H_dR__174->SetBinContent(23,0.7814277);
   VH_tagFirst_H_dR__174->SetBinContent(24,1.566507);
   VH_tagFirst_H_dR__174->SetBinContent(25,2.3199);
   VH_tagFirst_H_dR__174->SetBinContent(26,1.326917);
   VH_tagFirst_H_dR__174->SetBinContent(27,1.637942);
   VH_tagFirst_H_dR__174->SetBinContent(28,1.360593);
   VH_tagFirst_H_dR__174->SetBinContent(29,0.8086161);
   VH_tagFirst_H_dR__174->SetBinError(3,2.527994);
   VH_tagFirst_H_dR__174->SetBinError(4,2.450339);
   VH_tagFirst_H_dR__174->SetBinError(5,3.244215);
   VH_tagFirst_H_dR__174->SetBinError(6,1.250363);
   VH_tagFirst_H_dR__174->SetBinError(7,1.954017);
   VH_tagFirst_H_dR__174->SetBinError(8,1.77257);
   VH_tagFirst_H_dR__174->SetBinError(9,1.352744);
   VH_tagFirst_H_dR__174->SetBinError(10,0.6831474);
   VH_tagFirst_H_dR__174->SetBinError(11,1.968318);
   VH_tagFirst_H_dR__174->SetBinError(12,1.90357);
   VH_tagFirst_H_dR__174->SetBinError(13,3.009396);
   VH_tagFirst_H_dR__174->SetBinError(14,2.817009);
   VH_tagFirst_H_dR__174->SetBinError(15,2.624831);
   VH_tagFirst_H_dR__174->SetBinError(16,3.648345);
   VH_tagFirst_H_dR__174->SetBinError(17,1.656135);
   VH_tagFirst_H_dR__174->SetBinError(18,1.738204);
   VH_tagFirst_H_dR__174->SetBinError(19,2.627177);
   VH_tagFirst_H_dR__174->SetBinError(20,0.8101754);
   VH_tagFirst_H_dR__174->SetBinError(21,1.559584);
   VH_tagFirst_H_dR__174->SetBinError(22,2.192433);
   VH_tagFirst_H_dR__174->SetBinError(23,0.5558943);
   VH_tagFirst_H_dR__174->SetBinError(24,1.22747);
   VH_tagFirst_H_dR__174->SetBinError(25,1.446129);
   VH_tagFirst_H_dR__174->SetBinError(26,0.9759916);
   VH_tagFirst_H_dR__174->SetBinError(27,1.198775);
   VH_tagFirst_H_dR__174->SetBinError(28,0.8119812);
   VH_tagFirst_H_dR__174->SetBinError(29,0.8086161);
   VH_tagFirst_H_dR__174->SetEntries(150);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_dR__174->SetLineColor(ci);
   VH_tagFirst_H_dR__174->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_tagFirst_H_dR__174->GetXaxis()->SetRange(1,31);
   VH_tagFirst_H_dR__174->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__174->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR__174->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__174->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_H_dR__174->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__174->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_H_dR__174->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_H_dR__174->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_H_dR__174->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__174->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__174->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR__174->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__174->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_WW_tagFirst_18->Modified();
   H_dR_WW_tagFirst_18->cd();
   H_dR_WW_tagFirst_18->SetSelected(H_dR_WW_tagFirst_18);
}
