#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_WW_DHZfirst_17()
{
//=========Macro generated from canvas: H_dR_WW_DHZfirst_17/H_dR_WW_DHZfirst_17
//=========  (Fri May 24 12:42:28 2024) by ROOT version 6.28/10
   TCanvas *H_dR_WW_DHZfirst_17 = new TCanvas("H_dR_WW_DHZfirst_17", "H_dR_WW_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_WW_DHZfirst_17->SetHighLightColor(2);
   H_dR_WW_DHZfirst_17->Range(-1.24,-0.06830219,7.026667,0.6147197);
   H_dR_WW_DHZfirst_17->SetFillColor(0);
   H_dR_WW_DHZfirst_17->SetFillStyle(4000);
   H_dR_WW_DHZfirst_17->SetBorderMode(0);
   H_dR_WW_DHZfirst_17->SetBorderSize(2);
   H_dR_WW_DHZfirst_17->SetLeftMargin(0.15);
   H_dR_WW_DHZfirst_17->SetFrameFillStyle(1000);
   H_dR_WW_DHZfirst_17->SetFrameBorderMode(0);
   H_dR_WW_DHZfirst_17->SetFrameFillStyle(1000);
   H_dR_WW_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dR__1613 = new TH1D("VH_DHZfirst_H_dR__1613","",30,0,6);
   VH_DHZfirst_H_dR__1613->SetBinContent(4,0.2028034);
   VH_DHZfirst_H_dR__1613->SetBinContent(5,0.2553652);
   VH_DHZfirst_H_dR__1613->SetBinContent(8,0.4922072);
   VH_DHZfirst_H_dR__1613->SetBinContent(9,0.2037551);
   VH_DHZfirst_H_dR__1613->SetBinContent(11,0.4956396);
   VH_DHZfirst_H_dR__1613->SetBinContent(13,0.4904682);
   VH_DHZfirst_H_dR__1613->SetBinContent(16,0.07791458);
   VH_DHZfirst_H_dR__1613->SetBinContent(18,0.2290723);
   VH_DHZfirst_H_dR__1613->SetBinContent(21,0.4893481);
   VH_DHZfirst_H_dR__1613->SetBinContent(22,0.4301083);
   VH_DHZfirst_H_dR__1613->SetBinContent(23,0.152338);
   VH_DHZfirst_H_dR__1613->SetBinContent(28,0.5203976);
   VH_DHZfirst_H_dR__1613->SetBinError(4,0.2028034);
   VH_DHZfirst_H_dR__1613->SetBinError(5,0.2553652);
   VH_DHZfirst_H_dR__1613->SetBinError(8,0.4922072);
   VH_DHZfirst_H_dR__1613->SetBinError(9,0.2037551);
   VH_DHZfirst_H_dR__1613->SetBinError(11,0.4956396);
   VH_DHZfirst_H_dR__1613->SetBinError(13,0.3498303);
   VH_DHZfirst_H_dR__1613->SetBinError(16,0.07791458);
   VH_DHZfirst_H_dR__1613->SetBinError(18,0.2290723);
   VH_DHZfirst_H_dR__1613->SetBinError(21,0.4893481);
   VH_DHZfirst_H_dR__1613->SetBinError(22,0.3054811);
   VH_DHZfirst_H_dR__1613->SetBinError(23,0.152338);
   VH_DHZfirst_H_dR__1613->SetBinError(28,0.3906384);
   VH_DHZfirst_H_dR__1613->SetEntries(15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dR__1613->SetLineColor(ci);
   VH_DHZfirst_H_dR__1613->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_DHZfirst_H_dR__1613->GetXaxis()->SetRange(1,31);
   VH_DHZfirst_H_dR__1613->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__1613->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR__1613->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__1613->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_H_dR__1613->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__1613->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dR__1613->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dR__1613->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dR__1613->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__1613->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__1613->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR__1613->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__1613->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_WW_DHZfirst_17->Modified();
   H_dR_WW_DHZfirst_17->cd();
   H_dR_WW_DHZfirst_17->SetSelected(H_dR_WW_DHZfirst_17);
}
