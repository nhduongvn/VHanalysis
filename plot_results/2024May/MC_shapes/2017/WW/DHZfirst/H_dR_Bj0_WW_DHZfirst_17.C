#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_WW_DHZfirst_17()
{
//=========Macro generated from canvas: H_dR_Bj0_WW_DHZfirst_17/H_dR_Bj0_WW_DHZfirst_17
//=========  (Fri May 24 12:42:30 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj0_WW_DHZfirst_17 = new TCanvas("H_dR_Bj0_WW_DHZfirst_17", "H_dR_Bj0_WW_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_WW_DHZfirst_17->SetHighLightColor(2);
   H_dR_Bj0_WW_DHZfirst_17->Range(-1.2,-0.183108,6.8,1.647972);
   H_dR_Bj0_WW_DHZfirst_17->SetFillColor(0);
   H_dR_Bj0_WW_DHZfirst_17->SetFillStyle(4000);
   H_dR_Bj0_WW_DHZfirst_17->SetBorderMode(0);
   H_dR_Bj0_WW_DHZfirst_17->SetBorderSize(2);
   H_dR_Bj0_WW_DHZfirst_17->SetLeftMargin(0.15);
   H_dR_Bj0_WW_DHZfirst_17->SetFrameFillStyle(1000);
   H_dR_Bj0_WW_DHZfirst_17->SetFrameBorderMode(0);
   H_dR_Bj0_WW_DHZfirst_17->SetFrameFillStyle(1000);
   H_dR_Bj0_WW_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dR_Bj0__1763 = new TH1D("VH_DHZfirst_H_dR_Bj0__1763","",30,0,6);
   VH_DHZfirst_H_dR_Bj0__1763->SetBinContent(1,0.2790217);
   VH_DHZfirst_H_dR_Bj0__1763->SetBinContent(2,1.395108);
   VH_DHZfirst_H_dR_Bj0__1763->SetBinContent(3,0.8370651);
   VH_DHZfirst_H_dR_Bj0__1763->SetBinContent(4,0.2790217);
   VH_DHZfirst_H_dR_Bj0__1763->SetBinContent(5,0.5580434);
   VH_DHZfirst_H_dR_Bj0__1763->SetBinContent(6,0.5580434);
   VH_DHZfirst_H_dR_Bj0__1763->SetBinContent(8,0.2790217);
   VH_DHZfirst_H_dR_Bj0__1763->SetBinError(1,0.2790217);
   VH_DHZfirst_H_dR_Bj0__1763->SetBinError(2,0.6239115);
   VH_DHZfirst_H_dR_Bj0__1763->SetBinError(3,0.4832797);
   VH_DHZfirst_H_dR_Bj0__1763->SetBinError(4,0.2790217);
   VH_DHZfirst_H_dR_Bj0__1763->SetBinError(5,0.3945962);
   VH_DHZfirst_H_dR_Bj0__1763->SetBinError(6,0.3945962);
   VH_DHZfirst_H_dR_Bj0__1763->SetBinError(8,0.2790217);
   VH_DHZfirst_H_dR_Bj0__1763->SetEntries(15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dR_Bj0__1763->SetLineColor(ci);
   VH_DHZfirst_H_dR_Bj0__1763->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VH_DHZfirst_H_dR_Bj0__1763->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_H_dR_Bj0__1763->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1763->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__1763->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1763->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_H_dR_Bj0__1763->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1763->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dR_Bj0__1763->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dR_Bj0__1763->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dR_Bj0__1763->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1763->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1763->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__1763->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1763->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_WW_DHZfirst_17->Modified();
   H_dR_Bj0_WW_DHZfirst_17->cd();
   H_dR_Bj0_WW_DHZfirst_17->SetSelected(H_dR_Bj0_WW_DHZfirst_17);
}
