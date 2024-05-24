#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dR_HZ_WW_DHZfirst_18_logY()
{
//=========Macro generated from canvas: dR_HZ_WW_DHZfirst_18/dR_HZ_WW_DHZfirst_18
//=========  (Thu May 23 20:48:49 2024) by ROOT version 6.28/10
   TCanvas *dR_HZ_WW_DHZfirst_18 = new TCanvas("dR_HZ_WW_DHZfirst_18", "dR_HZ_WW_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_WW_DHZfirst_18->SetHighLightColor(2);
   dR_HZ_WW_DHZfirst_18->Range(-1.22,-0.7858376,6.913333,0.467503);
   dR_HZ_WW_DHZfirst_18->SetFillColor(0);
   dR_HZ_WW_DHZfirst_18->SetFillStyle(4000);
   dR_HZ_WW_DHZfirst_18->SetBorderMode(0);
   dR_HZ_WW_DHZfirst_18->SetBorderSize(2);
   dR_HZ_WW_DHZfirst_18->SetLogy();
   dR_HZ_WW_DHZfirst_18->SetLeftMargin(0.15);
   dR_HZ_WW_DHZfirst_18->SetFrameFillStyle(1000);
   dR_HZ_WW_DHZfirst_18->SetFrameBorderMode(0);
   dR_HZ_WW_DHZfirst_18->SetFrameFillStyle(1000);
   dR_HZ_WW_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_dR_HZ__1734 = new TH1D("VH_DHZfirst_dR_HZ__1734","",60,0,6);
   VH_DHZfirst_dR_HZ__1734->SetBinContent(15,0.4370453);
   VH_DHZfirst_dR_HZ__1734->SetBinContent(19,0.5541235);
   VH_DHZfirst_dR_HZ__1734->SetBinContent(20,0.741126);
   VH_DHZfirst_dR_HZ__1734->SetBinContent(27,0.6487306);
   VH_DHZfirst_dR_HZ__1734->SetBinContent(28,0.5284769);
   VH_DHZfirst_dR_HZ__1734->SetBinContent(36,1.160433);
   VH_DHZfirst_dR_HZ__1734->SetBinContent(39,0.6140818);
   VH_DHZfirst_dR_HZ__1734->SetBinContent(44,0.7744756);
   VH_DHZfirst_dR_HZ__1734->SetBinError(15,0.4370453);
   VH_DHZfirst_dR_HZ__1734->SetBinError(19,0.5541235);
   VH_DHZfirst_dR_HZ__1734->SetBinError(20,0.741126);
   VH_DHZfirst_dR_HZ__1734->SetBinError(27,0.6487306);
   VH_DHZfirst_dR_HZ__1734->SetBinError(28,0.5284769);
   VH_DHZfirst_dR_HZ__1734->SetBinError(36,0.8315168);
   VH_DHZfirst_dR_HZ__1734->SetBinError(39,0.6140818);
   VH_DHZfirst_dR_HZ__1734->SetBinError(44,0.7744756);
   VH_DHZfirst_dR_HZ__1734->SetEntries(9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_dR_HZ__1734->SetLineColor(ci);
   VH_DHZfirst_dR_HZ__1734->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VH_DHZfirst_dR_HZ__1734->GetXaxis()->SetRange(1,61);
   VH_DHZfirst_dR_HZ__1734->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_dR_HZ__1734->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_dR_HZ__1734->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_dR_HZ__1734->GetYaxis()->SetTitle("Events/0.1");
   VH_DHZfirst_dR_HZ__1734->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_dR_HZ__1734->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_dR_HZ__1734->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_dR_HZ__1734->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_dR_HZ__1734->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_dR_HZ__1734->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_dR_HZ__1734->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_dR_HZ__1734->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_dR_HZ__1734->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_WW_DHZfirst_18->Modified();
   dR_HZ_WW_DHZfirst_18->cd();
   dR_HZ_WW_DHZfirst_18->SetSelected(dR_HZ_WW_DHZfirst_18);
}
