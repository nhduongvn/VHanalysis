#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dR_HZ_WW_DHZfirst_17_logY()
{
//=========Macro generated from canvas: dR_HZ_WW_DHZfirst_17/dR_HZ_WW_DHZfirst_17
//=========  (Thu May 23 20:48:49 2024) by ROOT version 6.28/10
   TCanvas *dR_HZ_WW_DHZfirst_17 = new TCanvas("dR_HZ_WW_DHZfirst_17", "dR_HZ_WW_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_WW_DHZfirst_17->SetHighLightColor(2);
   dR_HZ_WW_DHZfirst_17->Range(-1.22,-1.58322,6.913333,0.1548637);
   dR_HZ_WW_DHZfirst_17->SetFillColor(0);
   dR_HZ_WW_DHZfirst_17->SetFillStyle(4000);
   dR_HZ_WW_DHZfirst_17->SetBorderMode(0);
   dR_HZ_WW_DHZfirst_17->SetBorderSize(2);
   dR_HZ_WW_DHZfirst_17->SetLogy();
   dR_HZ_WW_DHZfirst_17->SetLeftMargin(0.15);
   dR_HZ_WW_DHZfirst_17->SetFrameFillStyle(1000);
   dR_HZ_WW_DHZfirst_17->SetFrameBorderMode(0);
   dR_HZ_WW_DHZfirst_17->SetFrameFillStyle(1000);
   dR_HZ_WW_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_dR_HZ__1733 = new TH1D("VH_DHZfirst_dR_HZ__1733","",60,0,6);
   VH_DHZfirst_dR_HZ__1733->SetBinContent(8,0.2290723);
   VH_DHZfirst_dR_HZ__1733->SetBinContent(14,0.4956396);
   VH_DHZfirst_dR_HZ__1733->SetBinContent(21,0.1674855);
   VH_DHZfirst_dR_HZ__1733->SetBinContent(26,0.1947795);
   VH_DHZfirst_dR_HZ__1733->SetBinContent(30,0.5052501);
   VH_DHZfirst_dR_HZ__1733->SetBinContent(32,0.2776511);
   VH_DHZfirst_dR_HZ__1733->SetBinContent(34,0.2553652);
   VH_DHZfirst_dR_HZ__1733->SetBinContent(35,0.2028034);
   VH_DHZfirst_dR_HZ__1733->SetBinContent(37,0.2353289);
   VH_DHZfirst_dR_HZ__1733->SetBinContent(38,0.07791458);
   VH_DHZfirst_dR_HZ__1733->SetBinContent(39,0.4893481);
   VH_DHZfirst_dR_HZ__1733->SetBinContent(41,0.2037551);
   VH_DHZfirst_dR_HZ__1733->SetBinContent(43,0.2128171);
   VH_DHZfirst_dR_HZ__1733->SetBinContent(48,0.4922072);
   VH_DHZfirst_dR_HZ__1733->SetBinError(8,0.2290723);
   VH_DHZfirst_dR_HZ__1733->SetBinError(14,0.4956396);
   VH_DHZfirst_dR_HZ__1733->SetBinError(21,0.1674855);
   VH_DHZfirst_dR_HZ__1733->SetBinError(26,0.1947795);
   VH_DHZfirst_dR_HZ__1733->SetBinError(30,0.3843876);
   VH_DHZfirst_dR_HZ__1733->SetBinError(32,0.2776511);
   VH_DHZfirst_dR_HZ__1733->SetBinError(34,0.2553652);
   VH_DHZfirst_dR_HZ__1733->SetBinError(35,0.2028034);
   VH_DHZfirst_dR_HZ__1733->SetBinError(37,0.2353289);
   VH_DHZfirst_dR_HZ__1733->SetBinError(38,0.07791458);
   VH_DHZfirst_dR_HZ__1733->SetBinError(39,0.4893481);
   VH_DHZfirst_dR_HZ__1733->SetBinError(41,0.2037551);
   VH_DHZfirst_dR_HZ__1733->SetBinError(43,0.2128171);
   VH_DHZfirst_dR_HZ__1733->SetBinError(48,0.4922072);
   VH_DHZfirst_dR_HZ__1733->SetEntries(15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_dR_HZ__1733->SetLineColor(ci);
   VH_DHZfirst_dR_HZ__1733->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VH_DHZfirst_dR_HZ__1733->GetXaxis()->SetRange(1,61);
   VH_DHZfirst_dR_HZ__1733->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_dR_HZ__1733->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_dR_HZ__1733->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_dR_HZ__1733->GetYaxis()->SetTitle("Events/0.1");
   VH_DHZfirst_dR_HZ__1733->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_dR_HZ__1733->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_dR_HZ__1733->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_dR_HZ__1733->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_dR_HZ__1733->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_dR_HZ__1733->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_dR_HZ__1733->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_dR_HZ__1733->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_dR_HZ__1733->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_WW_DHZfirst_17->Modified();
   dR_HZ_WW_DHZfirst_17->cd();
   dR_HZ_WW_DHZfirst_17->SetSelected(dR_HZ_WW_DHZfirst_17);
}
