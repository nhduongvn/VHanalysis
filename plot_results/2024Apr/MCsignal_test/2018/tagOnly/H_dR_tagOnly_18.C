#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tagOnly_18()
{
//=========Macro generated from canvas: H_dR_tagOnly_18/H_dR_tagOnly_18
//=========  (Thu Apr 11 14:04:08 2024) by ROOT version 6.28/10
   TCanvas *H_dR_tagOnly_18 = new TCanvas("H_dR_tagOnly_18", "H_dR_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tagOnly_18->SetHighLightColor(2);
   H_dR_tagOnly_18->Range(-1.24,-70254.57,7.026667,632291.1);
   H_dR_tagOnly_18->SetFillColor(0);
   H_dR_tagOnly_18->SetFillStyle(4000);
   H_dR_tagOnly_18->SetBorderMode(0);
   H_dR_tagOnly_18->SetBorderSize(2);
   H_dR_tagOnly_18->SetLeftMargin(0.15);
   H_dR_tagOnly_18->SetFrameFillStyle(1000);
   H_dR_tagOnly_18->SetFrameBorderMode(0);
   H_dR_tagOnly_18->SetFrameFillStyle(1000);
   H_dR_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_H_dR__30 = new TH1D("VH_tagOnly_H_dR__30","",30,0,6);
   VH_tagOnly_H_dR__30->SetBinContent(3,83406.66);
   VH_tagOnly_H_dR__30->SetBinContent(4,535272.9);
   VH_tagOnly_H_dR__30->SetBinContent(5,109817.2);
   VH_tagOnly_H_dR__30->SetBinContent(6,99185.16);
   VH_tagOnly_H_dR__30->SetBinContent(7,123960.1);
   VH_tagOnly_H_dR__30->SetBinContent(8,28632.58);
   VH_tagOnly_H_dR__30->SetBinContent(9,27889.89);
   VH_tagOnly_H_dR__30->SetBinContent(10,70846.15);
   VH_tagOnly_H_dR__30->SetBinContent(11,108744);
   VH_tagOnly_H_dR__30->SetBinContent(12,53945.98);
   VH_tagOnly_H_dR__30->SetBinContent(13,75498.36);
   VH_tagOnly_H_dR__30->SetBinContent(14,66839.72);
   VH_tagOnly_H_dR__30->SetBinContent(15,338006);
   VH_tagOnly_H_dR__30->SetBinContent(16,273399.9);
   VH_tagOnly_H_dR__30->SetBinContent(17,81085.26);
   VH_tagOnly_H_dR__30->SetBinContent(18,445360.9);
   VH_tagOnly_H_dR__30->SetBinContent(19,81756.85);
   VH_tagOnly_H_dR__30->SetBinContent(20,63160.86);
   VH_tagOnly_H_dR__30->SetBinContent(21,39728.03);
   VH_tagOnly_H_dR__30->SetBinContent(22,42488.72);
   VH_tagOnly_H_dR__30->SetBinContent(23,34749);
   VH_tagOnly_H_dR__30->SetBinContent(24,39615.59);
   VH_tagOnly_H_dR__30->SetBinContent(25,36255.64);
   VH_tagOnly_H_dR__30->SetBinContent(26,3749.33);
   VH_tagOnly_H_dR__30->SetBinContent(27,261270.7);
   VH_tagOnly_H_dR__30->SetBinContent(28,30427.02);
   VH_tagOnly_H_dR__30->SetBinContent(29,5106.333);
   VH_tagOnly_H_dR__30->SetBinContent(30,9232.05);
   VH_tagOnly_H_dR__30->SetBinContent(31,87714.3);
   VH_tagOnly_H_dR__30->SetBinError(3,22192.56);
   VH_tagOnly_H_dR__30->SetBinError(4,315273.6);
   VH_tagOnly_H_dR__30->SetBinError(5,64214.7);
   VH_tagOnly_H_dR__30->SetBinError(6,72516.28);
   VH_tagOnly_H_dR__30->SetBinError(7,41792.18);
   VH_tagOnly_H_dR__30->SetBinError(8,8008.478);
   VH_tagOnly_H_dR__30->SetBinError(9,11705.82);
   VH_tagOnly_H_dR__30->SetBinError(10,40444.73);
   VH_tagOnly_H_dR__30->SetBinError(11,54041.32);
   VH_tagOnly_H_dR__30->SetBinError(12,18346.4);
   VH_tagOnly_H_dR__30->SetBinError(13,24654.27);
   VH_tagOnly_H_dR__30->SetBinError(14,21665.23);
   VH_tagOnly_H_dR__30->SetBinError(15,191760.5);
   VH_tagOnly_H_dR__30->SetBinError(16,223733.4);
   VH_tagOnly_H_dR__30->SetBinError(17,25530.4);
   VH_tagOnly_H_dR__30->SetBinError(18,259788.7);
   VH_tagOnly_H_dR__30->SetBinError(19,24985.42);
   VH_tagOnly_H_dR__30->SetBinError(20,33273.83);
   VH_tagOnly_H_dR__30->SetBinError(21,17576.54);
   VH_tagOnly_H_dR__30->SetBinError(22,20666.31);
   VH_tagOnly_H_dR__30->SetBinError(23,20518.6);
   VH_tagOnly_H_dR__30->SetBinError(24,18217.48);
   VH_tagOnly_H_dR__30->SetBinError(25,15338.79);
   VH_tagOnly_H_dR__30->SetBinError(26,2314.62);
   VH_tagOnly_H_dR__30->SetBinError(27,249142.6);
   VH_tagOnly_H_dR__30->SetBinError(28,25945.34);
   VH_tagOnly_H_dR__30->SetBinError(29,2256.17);
   VH_tagOnly_H_dR__30->SetBinError(30,7272.827);
   VH_tagOnly_H_dR__30->SetBinError(31,62138.35);
   VH_tagOnly_H_dR__30->SetEntries(780);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_H_dR__30->SetLineColor(ci);
   VH_tagOnly_H_dR__30->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_tagOnly_H_dR__30->GetXaxis()->SetRange(1,31);
   VH_tagOnly_H_dR__30->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_H_dR__30->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_H_dR__30->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_H_dR__30->GetYaxis()->SetTitle("Events/0.2");
   VH_tagOnly_H_dR__30->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_H_dR__30->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_H_dR__30->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_H_dR__30->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_H_dR__30->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_H_dR__30->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_H_dR__30->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_H_dR__30->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_H_dR__30->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tagOnly_18->Modified();
   H_dR_tagOnly_18->cd();
   H_dR_tagOnly_18->SetSelected(H_dR_tagOnly_18);
}
