#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tagFirst_18()
{
//=========Macro generated from canvas: H_dR_tagFirst_18/H_dR_tagFirst_18
//=========  (Thu Apr 11 14:04:08 2024) by ROOT version 6.28/10
   TCanvas *H_dR_tagFirst_18 = new TCanvas("H_dR_tagFirst_18", "H_dR_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tagFirst_18->SetHighLightColor(2);
   H_dR_tagFirst_18->Range(-1.24,-70758.34,7.026667,636825);
   H_dR_tagFirst_18->SetFillColor(0);
   H_dR_tagFirst_18->SetFillStyle(4000);
   H_dR_tagFirst_18->SetBorderMode(0);
   H_dR_tagFirst_18->SetBorderSize(2);
   H_dR_tagFirst_18->SetLeftMargin(0.15);
   H_dR_tagFirst_18->SetFrameFillStyle(1000);
   H_dR_tagFirst_18->SetFrameBorderMode(0);
   H_dR_tagFirst_18->SetFrameFillStyle(1000);
   H_dR_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_H_dR__6 = new TH1D("VH_tagFirst_H_dR__6","",30,0,6);
   VH_tagFirst_H_dR__6->SetBinContent(3,85191.43);
   VH_tagFirst_H_dR__6->SetBinContent(4,539111.1);
   VH_tagFirst_H_dR__6->SetBinContent(5,130651.5);
   VH_tagFirst_H_dR__6->SetBinContent(6,215580.2);
   VH_tagFirst_H_dR__6->SetBinContent(7,124843.1);
   VH_tagFirst_H_dR__6->SetBinContent(8,58596.8);
   VH_tagFirst_H_dR__6->SetBinContent(9,56221.69);
   VH_tagFirst_H_dR__6->SetBinContent(10,83009.61);
   VH_tagFirst_H_dR__6->SetBinContent(11,108744);
   VH_tagFirst_H_dR__6->SetBinContent(12,121211.4);
   VH_tagFirst_H_dR__6->SetBinContent(13,75474.1);
   VH_tagFirst_H_dR__6->SetBinContent(14,71137.94);
   VH_tagFirst_H_dR__6->SetBinContent(15,340266.2);
   VH_tagFirst_H_dR__6->SetBinContent(16,292013.4);
   VH_tagFirst_H_dR__6->SetBinContent(17,92585.06);
   VH_tagFirst_H_dR__6->SetBinContent(18,450099.2);
   VH_tagFirst_H_dR__6->SetBinContent(19,83170.68);
   VH_tagFirst_H_dR__6->SetBinContent(20,64941.17);
   VH_tagFirst_H_dR__6->SetBinContent(21,39728.03);
   VH_tagFirst_H_dR__6->SetBinContent(22,45778.13);
   VH_tagFirst_H_dR__6->SetBinContent(23,35453.88);
   VH_tagFirst_H_dR__6->SetBinContent(24,39615.59);
   VH_tagFirst_H_dR__6->SetBinContent(25,39049.69);
   VH_tagFirst_H_dR__6->SetBinContent(26,3749.33);
   VH_tagFirst_H_dR__6->SetBinContent(27,261270.7);
   VH_tagFirst_H_dR__6->SetBinContent(28,31182.87);
   VH_tagFirst_H_dR__6->SetBinContent(29,6727.572);
   VH_tagFirst_H_dR__6->SetBinContent(30,9232.05);
   VH_tagFirst_H_dR__6->SetBinContent(31,87714.3);
   VH_tagFirst_H_dR__6->SetBinError(3,22221.54);
   VH_tagFirst_H_dR__6->SetBinError(4,315280.2);
   VH_tagFirst_H_dR__6->SetBinError(5,65554.21);
   VH_tagFirst_H_dR__6->SetBinError(6,126362.3);
   VH_tagFirst_H_dR__6->SetBinError(7,41796.22);
   VH_tagFirst_H_dR__6->SetBinError(8,28812.94);
   VH_tagFirst_H_dR__6->SetBinError(9,26271.79);
   VH_tagFirst_H_dR__6->SetBinError(10,41414.28);
   VH_tagFirst_H_dR__6->SetBinError(11,54041.32);
   VH_tagFirst_H_dR__6->SetBinError(12,66599.84);
   VH_tagFirst_H_dR__6->SetBinError(13,24653.6);
   VH_tagFirst_H_dR__6->SetBinError(14,21784.86);
   VH_tagFirst_H_dR__6->SetBinError(15,191773.9);
   VH_tagFirst_H_dR__6->SetBinError(16,224323.9);
   VH_tagFirst_H_dR__6->SetBinError(17,27487.83);
   VH_tagFirst_H_dR__6->SetBinError(18,259795.4);
   VH_tagFirst_H_dR__6->SetBinError(19,25007.3);
   VH_tagFirst_H_dR__6->SetBinError(20,33301.5);
   VH_tagFirst_H_dR__6->SetBinError(21,17576.54);
   VH_tagFirst_H_dR__6->SetBinError(22,20775.07);
   VH_tagFirst_H_dR__6->SetBinError(23,20530.7);
   VH_tagFirst_H_dR__6->SetBinError(24,18217.48);
   VH_tagFirst_H_dR__6->SetBinError(25,15545.75);
   VH_tagFirst_H_dR__6->SetBinError(26,2314.62);
   VH_tagFirst_H_dR__6->SetBinError(27,249142.6);
   VH_tagFirst_H_dR__6->SetBinError(28,25956.35);
   VH_tagFirst_H_dR__6->SetBinError(29,2618.237);
   VH_tagFirst_H_dR__6->SetBinError(30,7272.827);
   VH_tagFirst_H_dR__6->SetBinError(31,62138.35);
   VH_tagFirst_H_dR__6->SetEntries(846);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_dR__6->SetLineColor(ci);
   VH_tagFirst_H_dR__6->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_tagFirst_H_dR__6->GetXaxis()->SetRange(1,31);
   VH_tagFirst_H_dR__6->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__6->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR__6->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__6->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_H_dR__6->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__6->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_H_dR__6->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_H_dR__6->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_H_dR__6->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__6->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_dR__6->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dR__6->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_dR__6->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tagFirst_18->Modified();
   H_dR_tagFirst_18->cd();
   H_dR_tagFirst_18->SetSelected(H_dR_tagFirst_18);
}
