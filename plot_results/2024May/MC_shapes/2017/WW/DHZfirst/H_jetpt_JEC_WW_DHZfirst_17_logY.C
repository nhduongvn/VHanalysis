#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetpt_JEC_WW_DHZfirst_17_logY()
{
//=========Macro generated from canvas: H_jetpt_JEC_WW_DHZfirst_17/H_jetpt_JEC_WW_DHZfirst_17
//=========  (Thu May 23 20:48:53 2024) by ROOT version 6.28/10
   TCanvas *H_jetpt_JEC_WW_DHZfirst_17 = new TCanvas("H_jetpt_JEC_WW_DHZfirst_17", "H_jetpt_JEC_WW_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_WW_DHZfirst_17->SetHighLightColor(2);
   H_jetpt_JEC_WW_DHZfirst_17->Range(-60,-1.254589,340,0.109082);
   H_jetpt_JEC_WW_DHZfirst_17->SetFillColor(0);
   H_jetpt_JEC_WW_DHZfirst_17->SetFillStyle(4000);
   H_jetpt_JEC_WW_DHZfirst_17->SetBorderMode(0);
   H_jetpt_JEC_WW_DHZfirst_17->SetBorderSize(2);
   H_jetpt_JEC_WW_DHZfirst_17->SetLogy();
   H_jetpt_JEC_WW_DHZfirst_17->SetLeftMargin(0.15);
   H_jetpt_JEC_WW_DHZfirst_17->SetFrameFillStyle(1000);
   H_jetpt_JEC_WW_DHZfirst_17->SetFrameBorderMode(0);
   H_jetpt_JEC_WW_DHZfirst_17->SetFrameFillStyle(1000);
   H_jetpt_JEC_WW_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_jetpt_JEC__1973 = new TH1D("VH_DHZfirst_H_jetpt_JEC__1973","",75,0,300);
   VH_DHZfirst_H_jetpt_JEC__1973->SetBinContent(24,0.4956396);
   VH_DHZfirst_H_jetpt_JEC__1973->SetBinContent(31,0.1674855);
   VH_DHZfirst_H_jetpt_JEC__1973->SetBinContent(32,0.490694);
   VH_DHZfirst_H_jetpt_JEC__1973->SetBinContent(33,0.3529121);
   VH_DHZfirst_H_jetpt_JEC__1973->SetBinContent(35,0.1947795);
   VH_DHZfirst_H_jetpt_JEC__1973->SetBinContent(43,0.152338);
   VH_DHZfirst_H_jetpt_JEC__1973->SetBinContent(50,0.2028034);
   VH_DHZfirst_H_jetpt_JEC__1973->SetBinContent(54,0.4893481);
   VH_DHZfirst_H_jetpt_JEC__1973->SetBinContent(62,0.4922072);
   VH_DHZfirst_H_jetpt_JEC__1973->SetBinContent(76,1.00121);
   VH_DHZfirst_H_jetpt_JEC__1973->SetBinError(24,0.4956396);
   VH_DHZfirst_H_jetpt_JEC__1973->SetBinError(31,0.1674855);
   VH_DHZfirst_H_jetpt_JEC__1973->SetBinError(32,0.3472622);
   VH_DHZfirst_H_jetpt_JEC__1973->SetBinError(33,0.3529121);
   VH_DHZfirst_H_jetpt_JEC__1973->SetBinError(35,0.1947795);
   VH_DHZfirst_H_jetpt_JEC__1973->SetBinError(43,0.152338);
   VH_DHZfirst_H_jetpt_JEC__1973->SetBinError(50,0.2028034);
   VH_DHZfirst_H_jetpt_JEC__1973->SetBinError(54,0.4893481);
   VH_DHZfirst_H_jetpt_JEC__1973->SetBinError(62,0.4922072);
   VH_DHZfirst_H_jetpt_JEC__1973->SetBinError(76,0.4716378);
   VH_DHZfirst_H_jetpt_JEC__1973->SetEntries(15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_jetpt_JEC__1973->SetLineColor(ci);
   VH_DHZfirst_H_jetpt_JEC__1973->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VH_DHZfirst_H_jetpt_JEC__1973->GetXaxis()->SetRange(1,75);
   VH_DHZfirst_H_jetpt_JEC__1973->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetpt_JEC__1973->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetpt_JEC__1973->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetpt_JEC__1973->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_DHZfirst_H_jetpt_JEC__1973->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetpt_JEC__1973->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_jetpt_JEC__1973->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_jetpt_JEC__1973->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_jetpt_JEC__1973->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetpt_JEC__1973->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetpt_JEC__1973->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetpt_JEC__1973->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetpt_JEC__1973->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_JEC_WW_DHZfirst_17->Modified();
   H_jetpt_JEC_WW_DHZfirst_17->cd();
   H_jetpt_JEC_WW_DHZfirst_17->SetSelected(H_jetpt_JEC_WW_DHZfirst_17);
}
