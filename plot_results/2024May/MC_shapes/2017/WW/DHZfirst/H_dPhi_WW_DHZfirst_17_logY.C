#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dPhi_WW_DHZfirst_17_logY()
{
//=========Macro generated from canvas: H_dPhi_WW_DHZfirst_17/H_dPhi_WW_DHZfirst_17
//=========  (Thu May 23 20:48:48 2024) by ROOT version 6.28/10
   TCanvas *H_dPhi_WW_DHZfirst_17 = new TCanvas("H_dPhi_WW_DHZfirst_17", "H_dPhi_WW_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_WW_DHZfirst_17->SetHighLightColor(2);
   H_dPhi_WW_DHZfirst_17->Range(-0.8,-1.133819,4.533333,0.08949849);
   H_dPhi_WW_DHZfirst_17->SetFillColor(0);
   H_dPhi_WW_DHZfirst_17->SetFillStyle(4000);
   H_dPhi_WW_DHZfirst_17->SetBorderMode(0);
   H_dPhi_WW_DHZfirst_17->SetBorderSize(2);
   H_dPhi_WW_DHZfirst_17->SetLogy();
   H_dPhi_WW_DHZfirst_17->SetLeftMargin(0.15);
   H_dPhi_WW_DHZfirst_17->SetFrameFillStyle(1000);
   H_dPhi_WW_DHZfirst_17->SetFrameBorderMode(0);
   H_dPhi_WW_DHZfirst_17->SetFrameFillStyle(1000);
   H_dPhi_WW_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dPhi__1673 = new TH1D("VH_DHZfirst_H_dPhi__1673","",120,0,4);
   VH_DHZfirst_H_dPhi__1673->SetBinContent(0,2.922463);
   VH_DHZfirst_H_dPhi__1673->SetBinContent(1,0.2037551);
   VH_DHZfirst_H_dPhi__1673->SetBinContent(41,0.4893481);
   VH_DHZfirst_H_dPhi__1673->SetBinContent(57,0.1947795);
   VH_DHZfirst_H_dPhi__1673->SetBinContent(65,0.2290723);
   VH_DHZfirst_H_dPhi__1673->SetBinError(0,0.9766801);
   VH_DHZfirst_H_dPhi__1673->SetBinError(1,0.2037551);
   VH_DHZfirst_H_dPhi__1673->SetBinError(41,0.4893481);
   VH_DHZfirst_H_dPhi__1673->SetBinError(57,0.1947795);
   VH_DHZfirst_H_dPhi__1673->SetBinError(65,0.2290723);
   VH_DHZfirst_H_dPhi__1673->SetEntries(15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dPhi__1673->SetLineColor(ci);
   VH_DHZfirst_H_dPhi__1673->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VH_DHZfirst_H_dPhi__1673->GetXaxis()->SetRange(1,120);
   VH_DHZfirst_H_dPhi__1673->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dPhi__1673->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dPhi__1673->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dPhi__1673->GetYaxis()->SetTitle("Events/0.033");
   VH_DHZfirst_H_dPhi__1673->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dPhi__1673->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dPhi__1673->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dPhi__1673->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dPhi__1673->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dPhi__1673->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dPhi__1673->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dPhi__1673->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dPhi__1673->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_WW_DHZfirst_17->Modified();
   H_dPhi_WW_DHZfirst_17->cd();
   H_dPhi_WW_DHZfirst_17->SetSelected(H_dPhi_WW_DHZfirst_17);
}
