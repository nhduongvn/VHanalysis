#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_WW_DHZfirst_18_logY()
{
//=========Macro generated from canvas: H_dR_WW_DHZfirst_18/H_dR_WW_DHZfirst_18
//=========  (Thu May 23 20:48:47 2024) by ROOT version 6.28/10
   TCanvas *H_dR_WW_DHZfirst_18 = new TCanvas("H_dR_WW_DHZfirst_18", "H_dR_WW_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_WW_DHZfirst_18->SetHighLightColor(2);
   H_dR_WW_DHZfirst_18->Range(-1.24,-0.6938492,7.026667,0.4646025);
   H_dR_WW_DHZfirst_18->SetFillColor(0);
   H_dR_WW_DHZfirst_18->SetFillStyle(4000);
   H_dR_WW_DHZfirst_18->SetBorderMode(0);
   H_dR_WW_DHZfirst_18->SetBorderSize(2);
   H_dR_WW_DHZfirst_18->SetLogy();
   H_dR_WW_DHZfirst_18->SetLeftMargin(0.15);
   H_dR_WW_DHZfirst_18->SetFrameFillStyle(1000);
   H_dR_WW_DHZfirst_18->SetFrameBorderMode(0);
   H_dR_WW_DHZfirst_18->SetFrameFillStyle(1000);
   H_dR_WW_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dR__1614 = new TH1D("VH_DHZfirst_H_dR__1614","",30,0,6);
   VH_DHZfirst_H_dR__1614->SetBinContent(5,0.6140818);
   VH_DHZfirst_H_dR__1614->SetBinContent(7,0.6753953);
   VH_DHZfirst_H_dR__1614->SetBinContent(12,0.5541235);
   VH_DHZfirst_H_dR__1614->SetBinContent(14,0.7744756);
   VH_DHZfirst_H_dR__1614->SetBinContent(15,1.133768);
   VH_DHZfirst_H_dR__1614->SetBinContent(16,1.178171);
   VH_DHZfirst_H_dR__1614->SetBinContent(20,0.5284769);
   VH_DHZfirst_H_dR__1614->SetBinError(5,0.6140818);
   VH_DHZfirst_H_dR__1614->SetBinError(7,0.6753953);
   VH_DHZfirst_H_dR__1614->SetBinError(12,0.5541235);
   VH_DHZfirst_H_dR__1614->SetBinError(14,0.7744756);
   VH_DHZfirst_H_dR__1614->SetBinError(15,0.8100079);
   VH_DHZfirst_H_dR__1614->SetBinError(16,0.8603932);
   VH_DHZfirst_H_dR__1614->SetBinError(20,0.5284769);
   VH_DHZfirst_H_dR__1614->SetEntries(9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dR__1614->SetLineColor(ci);
   VH_DHZfirst_H_dR__1614->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_DHZfirst_H_dR__1614->GetXaxis()->SetRange(1,31);
   VH_DHZfirst_H_dR__1614->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__1614->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR__1614->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__1614->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_H_dR__1614->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__1614->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dR__1614->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dR__1614->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dR__1614->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__1614->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__1614->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR__1614->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__1614->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_WW_DHZfirst_18->Modified();
   H_dR_WW_DHZfirst_18->cd();
   H_dR_WW_DHZfirst_18->SetSelected(H_dR_WW_DHZfirst_18);
}
