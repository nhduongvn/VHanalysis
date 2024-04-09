#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_DHZfirst_18()
{
//=========Macro generated from canvas: H_dR_Bj0_DHZfirst_18/H_dR_Bj0_DHZfirst_18
//=========  (Mon Apr  8 11:27:52 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj0_DHZfirst_18 = new TCanvas("H_dR_Bj0_DHZfirst_18", "H_dR_Bj0_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_DHZfirst_18->SetHighLightColor(2);
   H_dR_Bj0_DHZfirst_18->Range(-1.2,-0.01960674,6.8,0.1764607);
   H_dR_Bj0_DHZfirst_18->SetFillColor(0);
   H_dR_Bj0_DHZfirst_18->SetFillStyle(4000);
   H_dR_Bj0_DHZfirst_18->SetBorderMode(0);
   H_dR_Bj0_DHZfirst_18->SetBorderSize(2);
   H_dR_Bj0_DHZfirst_18->SetLeftMargin(0.15);
   H_dR_Bj0_DHZfirst_18->SetFrameFillStyle(1000);
   H_dR_Bj0_DHZfirst_18->SetFrameBorderMode(0);
   H_dR_Bj0_DHZfirst_18->SetFrameFillStyle(1000);
   H_dR_Bj0_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dR_Bj0__177 = new TH1D("VH_DHZfirst_H_dR_Bj0__177","",30,0,6);
   VH_DHZfirst_H_dR_Bj0__177->SetBinContent(1,0.04694947);
   VH_DHZfirst_H_dR_Bj0__177->SetBinContent(2,0.1493847);
   VH_DHZfirst_H_dR_Bj0__177->SetBinContent(3,0.07469235);
   VH_DHZfirst_H_dR_Bj0__177->SetBinContent(4,0.03841321);
   VH_DHZfirst_H_dR_Bj0__177->SetBinContent(5,0.0128044);
   VH_DHZfirst_H_dR_Bj0__177->SetBinContent(6,0.004268134);
   VH_DHZfirst_H_dR_Bj0__177->SetBinContent(7,0.004268134);
   VH_DHZfirst_H_dR_Bj0__177->SetBinContent(8,0.008536268);
   VH_DHZfirst_H_dR_Bj0__177->SetBinContent(9,0.004268134);
   VH_DHZfirst_H_dR_Bj0__177->SetBinContent(11,0.004268134);
   VH_DHZfirst_H_dR_Bj0__177->SetBinContent(12,0.002134067);
   VH_DHZfirst_H_dR_Bj0__177->SetBinContent(13,0.002134067);
   VH_DHZfirst_H_dR_Bj0__177->SetBinContent(14,0.004268134);
   VH_DHZfirst_H_dR_Bj0__177->SetBinContent(15,0.002134067);
   VH_DHZfirst_H_dR_Bj0__177->SetBinContent(16,0.002134067);
   VH_DHZfirst_H_dR_Bj0__177->SetBinContent(17,0.004268134);
   VH_DHZfirst_H_dR_Bj0__177->SetBinContent(20,0.002134067);
   VH_DHZfirst_H_dR_Bj0__177->SetBinError(1,0.01000966);
   VH_DHZfirst_H_dR_Bj0__177->SetBinError(2,0.01785489);
   VH_DHZfirst_H_dR_Bj0__177->SetBinError(3,0.01262531);
   VH_DHZfirst_H_dR_Bj0__177->SetBinError(4,0.00905408);
   VH_DHZfirst_H_dR_Bj0__177->SetBinError(5,0.005227375);
   VH_DHZfirst_H_dR_Bj0__177->SetBinError(6,0.003018027);
   VH_DHZfirst_H_dR_Bj0__177->SetBinError(7,0.003018027);
   VH_DHZfirst_H_dR_Bj0__177->SetBinError(8,0.004268134);
   VH_DHZfirst_H_dR_Bj0__177->SetBinError(9,0.003018027);
   VH_DHZfirst_H_dR_Bj0__177->SetBinError(11,0.003018027);
   VH_DHZfirst_H_dR_Bj0__177->SetBinError(12,0.002134067);
   VH_DHZfirst_H_dR_Bj0__177->SetBinError(13,0.002134067);
   VH_DHZfirst_H_dR_Bj0__177->SetBinError(14,0.003018027);
   VH_DHZfirst_H_dR_Bj0__177->SetBinError(15,0.002134067);
   VH_DHZfirst_H_dR_Bj0__177->SetBinError(16,0.002134067);
   VH_DHZfirst_H_dR_Bj0__177->SetBinError(17,0.003018027);
   VH_DHZfirst_H_dR_Bj0__177->SetBinError(20,0.002134067);
   VH_DHZfirst_H_dR_Bj0__177->SetEntries(172);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dR_Bj0__177->SetLineColor(ci);
   VH_DHZfirst_H_dR_Bj0__177->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VH_DHZfirst_H_dR_Bj0__177->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_H_dR_Bj0__177->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__177->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__177->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__177->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_H_dR_Bj0__177->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__177->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dR_Bj0__177->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dR_Bj0__177->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dR_Bj0__177->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__177->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__177->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__177->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__177->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_DHZfirst_18->Modified();
   H_dR_Bj0_DHZfirst_18->cd();
   H_dR_Bj0_DHZfirst_18->SetSelected(H_dR_Bj0_DHZfirst_18);
}
