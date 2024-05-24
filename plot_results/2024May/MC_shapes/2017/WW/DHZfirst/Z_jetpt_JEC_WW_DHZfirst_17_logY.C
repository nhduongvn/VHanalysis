#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetpt_JEC_WW_DHZfirst_17_logY()
{
//=========Macro generated from canvas: Z_jetpt_JEC_WW_DHZfirst_17/Z_jetpt_JEC_WW_DHZfirst_17
//=========  (Fri May 24 12:42:35 2024) by ROOT version 6.28/10
   TCanvas *Z_jetpt_JEC_WW_DHZfirst_17 = new TCanvas("Z_jetpt_JEC_WW_DHZfirst_17", "Z_jetpt_JEC_WW_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetpt_JEC_WW_DHZfirst_17->SetHighLightColor(2);
   Z_jetpt_JEC_WW_DHZfirst_17->Range(-60,-1.254589,340,0.109082);
   Z_jetpt_JEC_WW_DHZfirst_17->SetFillColor(0);
   Z_jetpt_JEC_WW_DHZfirst_17->SetFillStyle(4000);
   Z_jetpt_JEC_WW_DHZfirst_17->SetBorderMode(0);
   Z_jetpt_JEC_WW_DHZfirst_17->SetBorderSize(2);
   Z_jetpt_JEC_WW_DHZfirst_17->SetLogy();
   Z_jetpt_JEC_WW_DHZfirst_17->SetLeftMargin(0.15);
   Z_jetpt_JEC_WW_DHZfirst_17->SetFrameFillStyle(1000);
   Z_jetpt_JEC_WW_DHZfirst_17->SetFrameBorderMode(0);
   Z_jetpt_JEC_WW_DHZfirst_17->SetFrameFillStyle(1000);
   Z_jetpt_JEC_WW_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetpt_JEC__2093 = new TH1D("VH_DHZfirst_Z_jetpt_JEC__2093","",75,0,300);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinContent(21,0.152338);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinContent(23,0.1674855);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinContent(24,0.4956396);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinContent(25,0.1947795);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinContent(31,0.490694);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinContent(32,0.3529121);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinContent(36,0.4922072);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinContent(42,0.4893481);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinContent(48,0.2028034);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinContent(55,0.2290723);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinContent(70,0.2776511);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinContent(71,0.2037551);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinContent(76,0.2907317);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinError(21,0.152338);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinError(23,0.1674855);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinError(24,0.4956396);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinError(25,0.1947795);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinError(31,0.3472622);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinError(32,0.3529121);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinError(36,0.4922072);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinError(42,0.4893481);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinError(48,0.2028034);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinError(55,0.2290723);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinError(70,0.2776511);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinError(71,0.2037551);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetBinError(76,0.2266314);
   VH_DHZfirst_Z_jetpt_JEC__2093->SetEntries(15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetpt_JEC__2093->SetLineColor(ci);
   VH_DHZfirst_Z_jetpt_JEC__2093->GetXaxis()->SetTitle("b-jet p_{T} (w/ JEC) [GeV]");
   VH_DHZfirst_Z_jetpt_JEC__2093->GetXaxis()->SetRange(1,75);
   VH_DHZfirst_Z_jetpt_JEC__2093->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetpt_JEC__2093->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetpt_JEC__2093->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetpt_JEC__2093->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_DHZfirst_Z_jetpt_JEC__2093->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetpt_JEC__2093->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetpt_JEC__2093->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetpt_JEC__2093->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetpt_JEC__2093->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetpt_JEC__2093->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetpt_JEC__2093->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetpt_JEC__2093->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetpt_JEC__2093->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetpt_JEC_WW_DHZfirst_17->Modified();
   Z_jetpt_JEC_WW_DHZfirst_17->cd();
   Z_jetpt_JEC_WW_DHZfirst_17->SetSelected(Z_jetpt_JEC_WW_DHZfirst_17);
}
