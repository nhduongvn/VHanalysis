#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_WW_DHZfirst_2b1c_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_WW_DHZfirst_2b1c_17/H_dR_Bj0_WW_DHZfirst_2b1c_17
//=========  (Thu May 23 20:49:23 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj0_WW_DHZfirst_2b1c_17 = new TCanvas("H_dR_Bj0_WW_DHZfirst_2b1c_17", "H_dR_Bj0_WW_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_WW_DHZfirst_2b1c_17->SetHighLightColor(2);
   H_dR_Bj0_WW_DHZfirst_2b1c_17->Range(-1.2,-1.100241,6.8,1.348247);
   H_dR_Bj0_WW_DHZfirst_2b1c_17->SetFillColor(0);
   H_dR_Bj0_WW_DHZfirst_2b1c_17->SetFillStyle(4000);
   H_dR_Bj0_WW_DHZfirst_2b1c_17->SetBorderMode(0);
   H_dR_Bj0_WW_DHZfirst_2b1c_17->SetBorderSize(2);
   H_dR_Bj0_WW_DHZfirst_2b1c_17->SetLogy();
   H_dR_Bj0_WW_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   H_dR_Bj0_WW_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   H_dR_Bj0_WW_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   H_dR_Bj0_WW_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   H_dR_Bj0_WW_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_H_dR_Bj0__3923 = new TH1D("VH_DHZfirst_2b1c_H_dR_Bj0__3923","",30,0,6);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinContent(1,2.790217);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinContent(2,6.69652);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinContent(3,4.185325);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinContent(4,3.069239);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinContent(5,1.67413);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinContent(6,1.395108);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinContent(7,0.2790217);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinContent(8,0.2790217);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinContent(9,0.5580434);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinContent(10,0.2790217);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinContent(13,0.2790217);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinContent(14,0.2790217);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinContent(16,0.5580434);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinError(1,0.882344);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinError(2,1.366922);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinError(3,1.080646);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinError(4,0.9254102);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinError(5,0.6834608);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinError(6,0.6239115);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinError(7,0.2790217);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinError(8,0.2790217);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinError(9,0.3945962);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinError(10,0.2790217);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinError(13,0.2790217);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinError(14,0.2790217);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetBinError(16,0.3945962);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetEntries(80);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->SetLineColor(ci);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_H_dR_Bj0__3923->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_WW_DHZfirst_2b1c_17->Modified();
   H_dR_Bj0_WW_DHZfirst_2b1c_17->cd();
   H_dR_Bj0_WW_DHZfirst_2b1c_17->SetSelected(H_dR_Bj0_WW_DHZfirst_2b1c_17);
}
