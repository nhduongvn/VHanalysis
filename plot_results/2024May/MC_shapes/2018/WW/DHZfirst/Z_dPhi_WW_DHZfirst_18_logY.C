#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dPhi_WW_DHZfirst_18_logY()
{
//=========Macro generated from canvas: Z_dPhi_WW_DHZfirst_18/Z_dPhi_WW_DHZfirst_18
//=========  (Thu May 23 20:48:48 2024) by ROOT version 6.28/10
   TCanvas *Z_dPhi_WW_DHZfirst_18 = new TCanvas("Z_dPhi_WW_DHZfirst_18", "Z_dPhi_WW_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_WW_DHZfirst_18->SetHighLightColor(2);
   Z_dPhi_WW_DHZfirst_18->Range(-0.8,-0.7512884,4.533333,0.1565599);
   Z_dPhi_WW_DHZfirst_18->SetFillColor(0);
   Z_dPhi_WW_DHZfirst_18->SetFillStyle(4000);
   Z_dPhi_WW_DHZfirst_18->SetBorderMode(0);
   Z_dPhi_WW_DHZfirst_18->SetBorderSize(2);
   Z_dPhi_WW_DHZfirst_18->SetLogy();
   Z_dPhi_WW_DHZfirst_18->SetLeftMargin(0.15);
   Z_dPhi_WW_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dPhi_WW_DHZfirst_18->SetFrameBorderMode(0);
   Z_dPhi_WW_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dPhi_WW_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dPhi__1644 = new TH1D("VH_DHZfirst_Z_dPhi__1644","",120,0,4);
   VH_DHZfirst_Z_dPhi__1644->SetBinContent(0,4.407365);
   VH_DHZfirst_Z_dPhi__1644->SetBinContent(7,0.4370453);
   VH_DHZfirst_Z_dPhi__1644->SetBinContent(44,0.6140818);
   VH_DHZfirst_Z_dPhi__1644->SetBinError(0,1.687511);
   VH_DHZfirst_Z_dPhi__1644->SetBinError(7,0.4370453);
   VH_DHZfirst_Z_dPhi__1644->SetBinError(44,0.6140818);
   VH_DHZfirst_Z_dPhi__1644->SetEntries(9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dPhi__1644->SetLineColor(ci);
   VH_DHZfirst_Z_dPhi__1644->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VH_DHZfirst_Z_dPhi__1644->GetXaxis()->SetRange(1,120);
   VH_DHZfirst_Z_dPhi__1644->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dPhi__1644->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dPhi__1644->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dPhi__1644->GetYaxis()->SetTitle("Events/0.033");
   VH_DHZfirst_Z_dPhi__1644->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dPhi__1644->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dPhi__1644->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dPhi__1644->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dPhi__1644->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dPhi__1644->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dPhi__1644->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dPhi__1644->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dPhi__1644->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_WW_DHZfirst_18->Modified();
   Z_dPhi_WW_DHZfirst_18->cd();
   Z_dPhi_WW_DHZfirst_18->SetSelected(Z_dPhi_WW_DHZfirst_18);
}
