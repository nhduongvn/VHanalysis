#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dPhi_HZ_WW_DHZfirst_18_logY()
{
//=========Macro generated from canvas: dPhi_HZ_WW_DHZfirst_18/dPhi_HZ_WW_DHZfirst_18
//=========  (Thu May 23 20:48:49 2024) by ROOT version 6.28/10
   TCanvas *dPhi_HZ_WW_DHZfirst_18 = new TCanvas("dPhi_HZ_WW_DHZfirst_18", "dPhi_HZ_WW_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   dPhi_HZ_WW_DHZfirst_18->SetHighLightColor(2);
   dPhi_HZ_WW_DHZfirst_18->Range(-5.6,-0.763886,5.066667,0.2699391);
   dPhi_HZ_WW_DHZfirst_18->SetFillColor(0);
   dPhi_HZ_WW_DHZfirst_18->SetFillStyle(4000);
   dPhi_HZ_WW_DHZfirst_18->SetBorderMode(0);
   dPhi_HZ_WW_DHZfirst_18->SetBorderSize(2);
   dPhi_HZ_WW_DHZfirst_18->SetLogy();
   dPhi_HZ_WW_DHZfirst_18->SetLeftMargin(0.15);
   dPhi_HZ_WW_DHZfirst_18->SetFrameFillStyle(1000);
   dPhi_HZ_WW_DHZfirst_18->SetFrameBorderMode(0);
   dPhi_HZ_WW_DHZfirst_18->SetFrameFillStyle(1000);
   dPhi_HZ_WW_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_dPhi_HZ__1704 = new TH1D("VH_DHZfirst_dPhi_HZ__1704","",480,-4,4);
   VH_DHZfirst_dPhi_HZ__1704->SetBinContent(129,0.5541235);
   VH_DHZfirst_dPhi_HZ__1704->SetBinContent(142,0.6140818);
   VH_DHZfirst_dPhi_HZ__1704->SetBinContent(152,0.6753953);
   VH_DHZfirst_dPhi_HZ__1704->SetBinContent(159,0.741126);
   VH_DHZfirst_dPhi_HZ__1704->SetBinContent(167,0.4370453);
   VH_DHZfirst_dPhi_HZ__1704->SetBinContent(262,0.7744756);
   VH_DHZfirst_dPhi_HZ__1704->SetBinContent(298,0.6487306);
   VH_DHZfirst_dPhi_HZ__1704->SetBinContent(320,0.5284769);
   VH_DHZfirst_dPhi_HZ__1704->SetBinContent(332,0.4850375);
   VH_DHZfirst_dPhi_HZ__1704->SetBinError(129,0.5541235);
   VH_DHZfirst_dPhi_HZ__1704->SetBinError(142,0.6140818);
   VH_DHZfirst_dPhi_HZ__1704->SetBinError(152,0.6753953);
   VH_DHZfirst_dPhi_HZ__1704->SetBinError(159,0.741126);
   VH_DHZfirst_dPhi_HZ__1704->SetBinError(167,0.4370453);
   VH_DHZfirst_dPhi_HZ__1704->SetBinError(262,0.7744756);
   VH_DHZfirst_dPhi_HZ__1704->SetBinError(298,0.6487306);
   VH_DHZfirst_dPhi_HZ__1704->SetBinError(320,0.5284769);
   VH_DHZfirst_dPhi_HZ__1704->SetBinError(332,0.4850375);
   VH_DHZfirst_dPhi_HZ__1704->SetEntries(9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_dPhi_HZ__1704->SetLineColor(ci);
   VH_DHZfirst_dPhi_HZ__1704->GetXaxis()->SetTitle("#Delta#Phi_{ZH}");
   VH_DHZfirst_dPhi_HZ__1704->GetXaxis()->SetRange(1,480);
   VH_DHZfirst_dPhi_HZ__1704->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_dPhi_HZ__1704->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_dPhi_HZ__1704->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_dPhi_HZ__1704->GetYaxis()->SetTitle("Events/0.017");
   VH_DHZfirst_dPhi_HZ__1704->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_dPhi_HZ__1704->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_dPhi_HZ__1704->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_dPhi_HZ__1704->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_dPhi_HZ__1704->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_dPhi_HZ__1704->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_dPhi_HZ__1704->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_dPhi_HZ__1704->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_dPhi_HZ__1704->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dPhi_HZ_WW_DHZfirst_18->Modified();
   dPhi_HZ_WW_DHZfirst_18->cd();
   dPhi_HZ_WW_DHZfirst_18->SetSelected(dPhi_HZ_WW_DHZfirst_18);
}
