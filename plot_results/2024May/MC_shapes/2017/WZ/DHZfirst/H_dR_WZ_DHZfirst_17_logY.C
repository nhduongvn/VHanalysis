#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_WZ_DHZfirst_17_logY()
{
//=========Macro generated from canvas: H_dR_WZ_DHZfirst_17/H_dR_WZ_DHZfirst_17
//=========  (Thu May 23 20:48:47 2024) by ROOT version 6.28/10
   TCanvas *H_dR_WZ_DHZfirst_17 = new TCanvas("H_dR_WZ_DHZfirst_17", "H_dR_WZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_WZ_DHZfirst_17->SetHighLightColor(2);
   H_dR_WZ_DHZfirst_17->Range(-1.24,-1.476735,7.026667,1.529288);
   H_dR_WZ_DHZfirst_17->SetFillColor(0);
   H_dR_WZ_DHZfirst_17->SetFillStyle(4000);
   H_dR_WZ_DHZfirst_17->SetBorderMode(0);
   H_dR_WZ_DHZfirst_17->SetBorderSize(2);
   H_dR_WZ_DHZfirst_17->SetLogy();
   H_dR_WZ_DHZfirst_17->SetLeftMargin(0.15);
   H_dR_WZ_DHZfirst_17->SetFrameFillStyle(1000);
   H_dR_WZ_DHZfirst_17->SetFrameBorderMode(0);
   H_dR_WZ_DHZfirst_17->SetFrameFillStyle(1000);
   H_dR_WZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dR__1616 = new TH1D("VH_DHZfirst_H_dR__1616","",30,0,6);
   VH_DHZfirst_H_dR__1616->SetBinContent(3,3.087015);
   VH_DHZfirst_H_dR__1616->SetBinContent(4,8.935863);
   VH_DHZfirst_H_dR__1616->SetBinContent(5,3.745518);
   VH_DHZfirst_H_dR__1616->SetBinContent(6,2.181146);
   VH_DHZfirst_H_dR__1616->SetBinContent(7,0.4882134);
   VH_DHZfirst_H_dR__1616->SetBinContent(8,0.1333207);
   VH_DHZfirst_H_dR__1616->SetBinContent(9,0.5691121);
   VH_DHZfirst_H_dR__1616->SetBinContent(10,0.3081694);
   VH_DHZfirst_H_dR__1616->SetBinContent(11,0.6252244);
   VH_DHZfirst_H_dR__1616->SetBinContent(12,0.7710917);
   VH_DHZfirst_H_dR__1616->SetBinContent(13,0.9103823);
   VH_DHZfirst_H_dR__1616->SetBinContent(14,0.2038548);
   VH_DHZfirst_H_dR__1616->SetBinContent(15,0.275312);
   VH_DHZfirst_H_dR__1616->SetBinContent(16,0.5399276);
   VH_DHZfirst_H_dR__1616->SetBinContent(17,0.3682224);
   VH_DHZfirst_H_dR__1616->SetBinContent(18,0.3288176);
   VH_DHZfirst_H_dR__1616->SetBinContent(19,0.6233857);
   VH_DHZfirst_H_dR__1616->SetBinContent(20,1.025682);
   VH_DHZfirst_H_dR__1616->SetBinContent(21,0.1376002);
   VH_DHZfirst_H_dR__1616->SetBinContent(24,0.3472095);
   VH_DHZfirst_H_dR__1616->SetBinContent(25,0.5316647);
   VH_DHZfirst_H_dR__1616->SetBinContent(28,0.1467719);
   VH_DHZfirst_H_dR__1616->SetBinContent(29,0.4781104);
   VH_DHZfirst_H_dR__1616->SetBinError(3,0.9929252);
   VH_DHZfirst_H_dR__1616->SetBinError(4,1.886881);
   VH_DHZfirst_H_dR__1616->SetBinError(5,1.048413);
   VH_DHZfirst_H_dR__1616->SetBinError(6,1.241023);
   VH_DHZfirst_H_dR__1616->SetBinError(7,0.2864886);
   VH_DHZfirst_H_dR__1616->SetBinError(8,0.1333207);
   VH_DHZfirst_H_dR__1616->SetBinError(9,0.3293274);
   VH_DHZfirst_H_dR__1616->SetBinError(10,0.219647);
   VH_DHZfirst_H_dR__1616->SetBinError(11,0.3760328);
   VH_DHZfirst_H_dR__1616->SetBinError(12,0.3867106);
   VH_DHZfirst_H_dR__1616->SetBinError(13,0.6149039);
   VH_DHZfirst_H_dR__1616->SetBinError(14,0.1838707);
   VH_DHZfirst_H_dR__1616->SetBinError(15,0.275312);
   VH_DHZfirst_H_dR__1616->SetBinError(16,0.316801);
   VH_DHZfirst_H_dR__1616->SetBinError(17,0.2617161);
   VH_DHZfirst_H_dR__1616->SetBinError(18,0.3288176);
   VH_DHZfirst_H_dR__1616->SetBinError(19,0.4746642);
   VH_DHZfirst_H_dR__1616->SetBinError(20,0.6710153);
   VH_DHZfirst_H_dR__1616->SetBinError(21,0.1376002);
   VH_DHZfirst_H_dR__1616->SetBinError(24,0.2556104);
   VH_DHZfirst_H_dR__1616->SetBinError(25,0.5316647);
   VH_DHZfirst_H_dR__1616->SetBinError(28,0.1467719);
   VH_DHZfirst_H_dR__1616->SetBinError(29,0.3145331);
   VH_DHZfirst_H_dR__1616->SetEntries(105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dR__1616->SetLineColor(ci);
   VH_DHZfirst_H_dR__1616->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_DHZfirst_H_dR__1616->GetXaxis()->SetRange(1,31);
   VH_DHZfirst_H_dR__1616->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__1616->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR__1616->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__1616->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_H_dR__1616->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__1616->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dR__1616->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dR__1616->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dR__1616->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__1616->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__1616->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR__1616->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__1616->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_WZ_DHZfirst_17->Modified();
   H_dR_WZ_DHZfirst_17->cd();
   H_dR_WZ_DHZfirst_17->SetSelected(H_dR_WZ_DHZfirst_17);
}
