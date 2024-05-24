#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_QCD_tagOnly_17_logY()
{
//=========Macro generated from canvas: H_dR_QCD_tagOnly_17/H_dR_QCD_tagOnly_17
//=========  (Thu May 23 20:48:38 2024) by ROOT version 6.28/10
   TCanvas *H_dR_QCD_tagOnly_17 = new TCanvas("H_dR_QCD_tagOnly_17", "H_dR_QCD_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_QCD_tagOnly_17->SetHighLightColor(2);
   H_dR_QCD_tagOnly_17->Range(-1.24,0.9371648,7.026667,5.777579);
   H_dR_QCD_tagOnly_17->SetFillColor(0);
   H_dR_QCD_tagOnly_17->SetFillStyle(4000);
   H_dR_QCD_tagOnly_17->SetBorderMode(0);
   H_dR_QCD_tagOnly_17->SetBorderSize(2);
   H_dR_QCD_tagOnly_17->SetLogy();
   H_dR_QCD_tagOnly_17->SetLeftMargin(0.15);
   H_dR_QCD_tagOnly_17->SetFrameFillStyle(1000);
   H_dR_QCD_tagOnly_17->SetFrameBorderMode(0);
   H_dR_QCD_tagOnly_17->SetFrameFillStyle(1000);
   H_dR_QCD_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_H_dR__878 = new TH1D("VH_tagOnly_H_dR__878","",30,0,6);
   VH_tagOnly_H_dR__878->SetBinContent(2,52.75167);
   VH_tagOnly_H_dR__878->SetBinContent(3,54785.38);
   VH_tagOnly_H_dR__878->SetBinContent(4,53004.83);
   VH_tagOnly_H_dR__878->SetBinContent(5,46072.06);
   VH_tagOnly_H_dR__878->SetBinContent(6,40140.47);
   VH_tagOnly_H_dR__878->SetBinContent(7,37461.24);
   VH_tagOnly_H_dR__878->SetBinContent(8,44363.39);
   VH_tagOnly_H_dR__878->SetBinContent(9,38819.13);
   VH_tagOnly_H_dR__878->SetBinContent(10,44121.72);
   VH_tagOnly_H_dR__878->SetBinContent(11,50007.15);
   VH_tagOnly_H_dR__878->SetBinContent(12,52630.09);
   VH_tagOnly_H_dR__878->SetBinContent(13,58762.19);
   VH_tagOnly_H_dR__878->SetBinContent(14,60488);
   VH_tagOnly_H_dR__878->SetBinContent(15,79710.67);
   VH_tagOnly_H_dR__878->SetBinContent(16,103750);
   VH_tagOnly_H_dR__878->SetBinContent(17,73148.61);
   VH_tagOnly_H_dR__878->SetBinContent(18,72146.74);
   VH_tagOnly_H_dR__878->SetBinContent(19,56664.3);
   VH_tagOnly_H_dR__878->SetBinContent(20,57695.6);
   VH_tagOnly_H_dR__878->SetBinContent(21,39936.84);
   VH_tagOnly_H_dR__878->SetBinContent(22,56926.08);
   VH_tagOnly_H_dR__878->SetBinContent(23,42242.69);
   VH_tagOnly_H_dR__878->SetBinContent(24,52043.53);
   VH_tagOnly_H_dR__878->SetBinContent(25,19719.59);
   VH_tagOnly_H_dR__878->SetBinContent(26,15060.93);
   VH_tagOnly_H_dR__878->SetBinContent(27,13545.76);
   VH_tagOnly_H_dR__878->SetBinContent(28,12851.45);
   VH_tagOnly_H_dR__878->SetBinContent(29,11427.66);
   VH_tagOnly_H_dR__878->SetBinContent(30,9150.097);
   VH_tagOnly_H_dR__878->SetBinContent(31,6757.642);
   VH_tagOnly_H_dR__878->SetBinError(2,33.68475);
   VH_tagOnly_H_dR__878->SetBinError(3,2404.01);
   VH_tagOnly_H_dR__878->SetBinError(4,2795.023);
   VH_tagOnly_H_dR__878->SetBinError(5,2824.548);
   VH_tagOnly_H_dR__878->SetBinError(6,2614.087);
   VH_tagOnly_H_dR__878->SetBinError(7,2485.253);
   VH_tagOnly_H_dR__878->SetBinError(8,3535.997);
   VH_tagOnly_H_dR__878->SetBinError(9,2624.399);
   VH_tagOnly_H_dR__878->SetBinError(10,2892.56);
   VH_tagOnly_H_dR__878->SetBinError(11,3330.906);
   VH_tagOnly_H_dR__878->SetBinError(12,3510.796);
   VH_tagOnly_H_dR__878->SetBinError(13,3505.276);
   VH_tagOnly_H_dR__878->SetBinError(14,3012.224);
   VH_tagOnly_H_dR__878->SetBinError(15,4354.374);
   VH_tagOnly_H_dR__878->SetBinError(16,23533.04);
   VH_tagOnly_H_dR__878->SetBinError(17,3936.118);
   VH_tagOnly_H_dR__878->SetBinError(18,5199.671);
   VH_tagOnly_H_dR__878->SetBinError(19,2783.443);
   VH_tagOnly_H_dR__878->SetBinError(20,3671.191);
   VH_tagOnly_H_dR__878->SetBinError(21,2227.238);
   VH_tagOnly_H_dR__878->SetBinError(22,17601.4);
   VH_tagOnly_H_dR__878->SetBinError(23,13785.04);
   VH_tagOnly_H_dR__878->SetBinError(24,30272.76);
   VH_tagOnly_H_dR__878->SetBinError(25,2069.809);
   VH_tagOnly_H_dR__878->SetBinError(26,1367.972);
   VH_tagOnly_H_dR__878->SetBinError(27,1418.234);
   VH_tagOnly_H_dR__878->SetBinError(28,1616.218);
   VH_tagOnly_H_dR__878->SetBinError(29,1322.434);
   VH_tagOnly_H_dR__878->SetBinError(30,1468.283);
   VH_tagOnly_H_dR__878->SetBinError(31,832.129);
   VH_tagOnly_H_dR__878->SetEntries(102182);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_H_dR__878->SetLineColor(ci);
   VH_tagOnly_H_dR__878->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_tagOnly_H_dR__878->GetXaxis()->SetRange(1,31);
   VH_tagOnly_H_dR__878->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_H_dR__878->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_H_dR__878->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_H_dR__878->GetYaxis()->SetTitle("Events/0.2");
   VH_tagOnly_H_dR__878->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_H_dR__878->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_H_dR__878->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_H_dR__878->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_H_dR__878->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_H_dR__878->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_H_dR__878->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_H_dR__878->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_H_dR__878->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_QCD_tagOnly_17->Modified();
   H_dR_QCD_tagOnly_17->cd();
   H_dR_QCD_tagOnly_17->SetSelected(H_dR_QCD_tagOnly_17);
}
