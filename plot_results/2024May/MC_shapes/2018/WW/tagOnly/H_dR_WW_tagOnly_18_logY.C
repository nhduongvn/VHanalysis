#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_WW_tagOnly_18_logY()
{
//=========Macro generated from canvas: H_dR_WW_tagOnly_18/H_dR_WW_tagOnly_18
//=========  (Thu May 23 20:48:38 2024) by ROOT version 6.28/10
   TCanvas *H_dR_WW_tagOnly_18 = new TCanvas("H_dR_WW_tagOnly_18", "H_dR_WW_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_WW_tagOnly_18->SetHighLightColor(2);
   H_dR_WW_tagOnly_18->Range(-1.24,-0.8346475,7.026667,1.496876);
   H_dR_WW_tagOnly_18->SetFillColor(0);
   H_dR_WW_tagOnly_18->SetFillStyle(4000);
   H_dR_WW_tagOnly_18->SetBorderMode(0);
   H_dR_WW_tagOnly_18->SetBorderSize(2);
   H_dR_WW_tagOnly_18->SetLogy();
   H_dR_WW_tagOnly_18->SetLeftMargin(0.15);
   H_dR_WW_tagOnly_18->SetFrameFillStyle(1000);
   H_dR_WW_tagOnly_18->SetFrameBorderMode(0);
   H_dR_WW_tagOnly_18->SetFrameFillStyle(1000);
   H_dR_WW_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_H_dR__894 = new TH1D("VH_tagOnly_H_dR__894","",30,0,6);
   VH_tagOnly_H_dR__894->SetBinContent(3,7.460777);
   VH_tagOnly_H_dR__894->SetBinContent(4,6.325297);
   VH_tagOnly_H_dR__894->SetBinContent(5,7.115536);
   VH_tagOnly_H_dR__894->SetBinContent(6,2.341387);
   VH_tagOnly_H_dR__894->SetBinContent(7,4.411861);
   VH_tagOnly_H_dR__894->SetBinContent(8,2.132957);
   VH_tagOnly_H_dR__894->SetBinContent(9,2.928581);
   VH_tagOnly_H_dR__894->SetBinContent(10,0.5006507);
   VH_tagOnly_H_dR__894->SetBinContent(11,4.067203);
   VH_tagOnly_H_dR__894->SetBinContent(12,5.094333);
   VH_tagOnly_H_dR__894->SetBinContent(13,8.428502);
   VH_tagOnly_H_dR__894->SetBinContent(14,8.295682);
   VH_tagOnly_H_dR__894->SetBinContent(15,7.950937);
   VH_tagOnly_H_dR__894->SetBinContent(16,9.686678);
   VH_tagOnly_H_dR__894->SetBinContent(17,3.601452);
   VH_tagOnly_H_dR__894->SetBinContent(18,4.320122);
   VH_tagOnly_H_dR__894->SetBinContent(19,6.866748);
   VH_tagOnly_H_dR__894->SetBinContent(20,1.142559);
   VH_tagOnly_H_dR__894->SetBinContent(21,1.502194);
   VH_tagOnly_H_dR__894->SetBinContent(22,4.212351);
   VH_tagOnly_H_dR__894->SetBinContent(23,0.7814277);
   VH_tagOnly_H_dR__894->SetBinContent(24,1.566507);
   VH_tagOnly_H_dR__894->SetBinContent(25,2.3199);
   VH_tagOnly_H_dR__894->SetBinContent(26,1.326917);
   VH_tagOnly_H_dR__894->SetBinContent(27,1.637942);
   VH_tagOnly_H_dR__894->SetBinContent(28,1.360593);
   VH_tagOnly_H_dR__894->SetBinContent(29,0.8086161);
   VH_tagOnly_H_dR__894->SetBinError(3,2.527994);
   VH_tagOnly_H_dR__894->SetBinError(4,2.450339);
   VH_tagOnly_H_dR__894->SetBinError(5,3.244215);
   VH_tagOnly_H_dR__894->SetBinError(6,1.184956);
   VH_tagOnly_H_dR__894->SetBinError(7,1.954017);
   VH_tagOnly_H_dR__894->SetBinError(8,1.273563);
   VH_tagOnly_H_dR__894->SetBinError(9,1.352744);
   VH_tagOnly_H_dR__894->SetBinError(10,0.5006507);
   VH_tagOnly_H_dR__894->SetBinError(11,1.968318);
   VH_tagOnly_H_dR__894->SetBinError(12,1.90357);
   VH_tagOnly_H_dR__894->SetBinError(13,2.988566);
   VH_tagOnly_H_dR__894->SetBinError(14,2.693281);
   VH_tagOnly_H_dR__894->SetBinError(15,2.624831);
   VH_tagOnly_H_dR__894->SetBinError(16,3.648345);
   VH_tagOnly_H_dR__894->SetBinError(17,1.656135);
   VH_tagOnly_H_dR__894->SetBinError(18,1.710803);
   VH_tagOnly_H_dR__894->SetBinError(19,2.627177);
   VH_tagOnly_H_dR__894->SetBinError(20,0.8101754);
   VH_tagOnly_H_dR__894->SetBinError(21,0.8801946);
   VH_tagOnly_H_dR__894->SetBinError(22,2.192433);
   VH_tagOnly_H_dR__894->SetBinError(23,0.5558943);
   VH_tagOnly_H_dR__894->SetBinError(24,1.22747);
   VH_tagOnly_H_dR__894->SetBinError(25,1.446129);
   VH_tagOnly_H_dR__894->SetBinError(26,0.9759916);
   VH_tagOnly_H_dR__894->SetBinError(27,1.198775);
   VH_tagOnly_H_dR__894->SetBinError(28,0.8119812);
   VH_tagOnly_H_dR__894->SetBinError(29,0.8086161);
   VH_tagOnly_H_dR__894->SetEntries(144);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_H_dR__894->SetLineColor(ci);
   VH_tagOnly_H_dR__894->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_tagOnly_H_dR__894->GetXaxis()->SetRange(1,31);
   VH_tagOnly_H_dR__894->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_H_dR__894->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_H_dR__894->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_H_dR__894->GetYaxis()->SetTitle("Events/0.2");
   VH_tagOnly_H_dR__894->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_H_dR__894->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_H_dR__894->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_H_dR__894->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_H_dR__894->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_H_dR__894->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_H_dR__894->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_H_dR__894->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_H_dR__894->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_WW_tagOnly_18->Modified();
   H_dR_WW_tagOnly_18->cd();
   H_dR_WW_tagOnly_18->SetSelected(H_dR_WW_tagOnly_18);
}
