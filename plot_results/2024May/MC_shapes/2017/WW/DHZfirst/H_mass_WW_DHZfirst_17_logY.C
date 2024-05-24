#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_WW_DHZfirst_17_logY()
{
//=========Macro generated from canvas: H_mass_WW_DHZfirst_17/H_mass_WW_DHZfirst_17
//=========  (Thu May 23 20:48:46 2024) by ROOT version 6.28/10
   TCanvas *H_mass_WW_DHZfirst_17 = new TCanvas("H_mass_WW_DHZfirst_17", "H_mass_WW_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_WW_DHZfirst_17->SetHighLightColor(2);
   H_mass_WW_DHZfirst_17->Range(-60,-1.114788,340,0.09354861);
   H_mass_WW_DHZfirst_17->SetFillColor(0);
   H_mass_WW_DHZfirst_17->SetFillStyle(4000);
   H_mass_WW_DHZfirst_17->SetBorderMode(0);
   H_mass_WW_DHZfirst_17->SetBorderSize(2);
   H_mass_WW_DHZfirst_17->SetLogy();
   H_mass_WW_DHZfirst_17->SetLeftMargin(0.15);
   H_mass_WW_DHZfirst_17->SetFrameFillStyle(1000);
   H_mass_WW_DHZfirst_17->SetFrameBorderMode(0);
   H_mass_WW_DHZfirst_17->SetFrameFillStyle(1000);
   H_mass_WW_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_mass__1493 = new TH1D("VH_DHZfirst_H_mass__1493","",200,0,2000);
   VH_DHZfirst_H_mass__1493->SetBinContent(7,0.2028034);
   VH_DHZfirst_H_mass__1493->SetBinContent(10,0.2553652);
   VH_DHZfirst_H_mass__1493->SetBinContent(16,0.4956396);
   VH_DHZfirst_H_mass__1493->SetBinContent(36,0.2037551);
   VH_DHZfirst_H_mass__1493->SetBinContent(39,0.4922072);
   VH_DHZfirst_H_mass__1493->SetBinContent(41,0.2776511);
   VH_DHZfirst_H_mass__1493->SetBinContent(63,0.1947795);
   VH_DHZfirst_H_mass__1493->SetBinContent(71,0.2290723);
   VH_DHZfirst_H_mass__1493->SetBinContent(73,0.2353289);
   VH_DHZfirst_H_mass__1493->SetBinContent(86,0.07791458);
   VH_DHZfirst_H_mass__1493->SetBinContent(92,0.4893481);
   VH_DHZfirst_H_mass__1493->SetBinContent(93,0.152338);
   VH_DHZfirst_H_mass__1493->SetBinContent(120,0.3529121);
   VH_DHZfirst_H_mass__1493->SetBinContent(131,0.2128171);
   VH_DHZfirst_H_mass__1493->SetBinContent(134,0.1674855);
   VH_DHZfirst_H_mass__1493->SetBinError(7,0.2028034);
   VH_DHZfirst_H_mass__1493->SetBinError(10,0.2553652);
   VH_DHZfirst_H_mass__1493->SetBinError(16,0.4956396);
   VH_DHZfirst_H_mass__1493->SetBinError(36,0.2037551);
   VH_DHZfirst_H_mass__1493->SetBinError(39,0.4922072);
   VH_DHZfirst_H_mass__1493->SetBinError(41,0.2776511);
   VH_DHZfirst_H_mass__1493->SetBinError(63,0.1947795);
   VH_DHZfirst_H_mass__1493->SetBinError(71,0.2290723);
   VH_DHZfirst_H_mass__1493->SetBinError(73,0.2353289);
   VH_DHZfirst_H_mass__1493->SetBinError(86,0.07791458);
   VH_DHZfirst_H_mass__1493->SetBinError(92,0.4893481);
   VH_DHZfirst_H_mass__1493->SetBinError(93,0.152338);
   VH_DHZfirst_H_mass__1493->SetBinError(120,0.3529121);
   VH_DHZfirst_H_mass__1493->SetBinError(131,0.2128171);
   VH_DHZfirst_H_mass__1493->SetBinError(134,0.1674855);
   VH_DHZfirst_H_mass__1493->SetEntries(15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_mass__1493->SetLineColor(ci);
   VH_DHZfirst_H_mass__1493->GetXaxis()->SetTitle("M_{H} [GeV]");
   VH_DHZfirst_H_mass__1493->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_H_mass__1493->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__1493->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_mass__1493->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__1493->GetYaxis()->SetTitle("Events/10.0 GeV");
   VH_DHZfirst_H_mass__1493->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__1493->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_mass__1493->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_mass__1493->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_mass__1493->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__1493->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_mass__1493->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_mass__1493->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_mass__1493->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_WW_DHZfirst_17->Modified();
   H_mass_WW_DHZfirst_17->cd();
   H_mass_WW_DHZfirst_17->SetSelected(H_mass_WW_DHZfirst_17);
}
