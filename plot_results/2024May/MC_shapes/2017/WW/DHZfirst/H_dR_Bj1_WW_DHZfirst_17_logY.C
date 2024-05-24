#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_WW_DHZfirst_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj1_WW_DHZfirst_17/H_dR_Bj1_WW_DHZfirst_17
//=========  (Thu May 23 20:48:50 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj1_WW_DHZfirst_17 = new TCanvas("H_dR_Bj1_WW_DHZfirst_17", "H_dR_Bj1_WW_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_WW_DHZfirst_17->SetHighLightColor(2);
   H_dR_Bj1_WW_DHZfirst_17->Range(-1.2,-0.9653432,6.8,0.134168);
   H_dR_Bj1_WW_DHZfirst_17->SetFillColor(0);
   H_dR_Bj1_WW_DHZfirst_17->SetFillStyle(4000);
   H_dR_Bj1_WW_DHZfirst_17->SetBorderMode(0);
   H_dR_Bj1_WW_DHZfirst_17->SetBorderSize(2);
   H_dR_Bj1_WW_DHZfirst_17->SetLogy();
   H_dR_Bj1_WW_DHZfirst_17->SetLeftMargin(0.15);
   H_dR_Bj1_WW_DHZfirst_17->SetFrameFillStyle(1000);
   H_dR_Bj1_WW_DHZfirst_17->SetFrameBorderMode(0);
   H_dR_Bj1_WW_DHZfirst_17->SetFrameFillStyle(1000);
   H_dR_Bj1_WW_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dR_Bj1__1793 = new TH1D("VH_DHZfirst_H_dR_Bj1__1793","",30,0,6);
   VH_DHZfirst_H_dR_Bj1__1793->SetBinContent(3,0.5580434);
   VH_DHZfirst_H_dR_Bj1__1793->SetBinContent(6,0.5580434);
   VH_DHZfirst_H_dR_Bj1__1793->SetBinContent(7,0.2790217);
   VH_DHZfirst_H_dR_Bj1__1793->SetBinContent(8,0.2790217);
   VH_DHZfirst_H_dR_Bj1__1793->SetBinContent(11,0.2790217);
   VH_DHZfirst_H_dR_Bj1__1793->SetBinContent(12,0.5580434);
   VH_DHZfirst_H_dR_Bj1__1793->SetBinContent(19,0.2790217);
   VH_DHZfirst_H_dR_Bj1__1793->SetBinContent(20,0.2790217);
   VH_DHZfirst_H_dR_Bj1__1793->SetBinContent(21,0.5580434);
   VH_DHZfirst_H_dR_Bj1__1793->SetBinContent(23,0.2790217);
   VH_DHZfirst_H_dR_Bj1__1793->SetBinContent(25,0.2790217);
   VH_DHZfirst_H_dR_Bj1__1793->SetBinError(3,0.3945962);
   VH_DHZfirst_H_dR_Bj1__1793->SetBinError(6,0.3945962);
   VH_DHZfirst_H_dR_Bj1__1793->SetBinError(7,0.2790217);
   VH_DHZfirst_H_dR_Bj1__1793->SetBinError(8,0.2790217);
   VH_DHZfirst_H_dR_Bj1__1793->SetBinError(11,0.2790217);
   VH_DHZfirst_H_dR_Bj1__1793->SetBinError(12,0.3945962);
   VH_DHZfirst_H_dR_Bj1__1793->SetBinError(19,0.2790217);
   VH_DHZfirst_H_dR_Bj1__1793->SetBinError(20,0.2790217);
   VH_DHZfirst_H_dR_Bj1__1793->SetBinError(21,0.3945962);
   VH_DHZfirst_H_dR_Bj1__1793->SetBinError(23,0.2790217);
   VH_DHZfirst_H_dR_Bj1__1793->SetBinError(25,0.2790217);
   VH_DHZfirst_H_dR_Bj1__1793->SetEntries(15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dR_Bj1__1793->SetLineColor(ci);
   VH_DHZfirst_H_dR_Bj1__1793->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   VH_DHZfirst_H_dR_Bj1__1793->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_H_dR_Bj1__1793->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj1__1793->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj1__1793->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj1__1793->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_H_dR_Bj1__1793->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj1__1793->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dR_Bj1__1793->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dR_Bj1__1793->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dR_Bj1__1793->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj1__1793->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj1__1793->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj1__1793->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj1__1793->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_WW_DHZfirst_17->Modified();
   H_dR_Bj1_WW_DHZfirst_17->cd();
   H_dR_Bj1_WW_DHZfirst_17->SetSelected(H_dR_Bj1_WW_DHZfirst_17);
}
