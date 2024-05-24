#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetpt_noJEC_WW_DHZfirst_17_logY()
{
//=========Macro generated from canvas: Z_jetpt_noJEC_WW_DHZfirst_17/Z_jetpt_noJEC_WW_DHZfirst_17
//=========  (Fri May 24 12:42:34 2024) by ROOT version 6.28/10
   TCanvas *Z_jetpt_noJEC_WW_DHZfirst_17 = new TCanvas("Z_jetpt_noJEC_WW_DHZfirst_17", "Z_jetpt_noJEC_WW_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetpt_noJEC_WW_DHZfirst_17->SetHighLightColor(2);
   Z_jetpt_noJEC_WW_DHZfirst_17->Range(-60,-1.270392,340,0.2513152);
   Z_jetpt_noJEC_WW_DHZfirst_17->SetFillColor(0);
   Z_jetpt_noJEC_WW_DHZfirst_17->SetFillStyle(4000);
   Z_jetpt_noJEC_WW_DHZfirst_17->SetBorderMode(0);
   Z_jetpt_noJEC_WW_DHZfirst_17->SetBorderSize(2);
   Z_jetpt_noJEC_WW_DHZfirst_17->SetLogy();
   Z_jetpt_noJEC_WW_DHZfirst_17->SetLeftMargin(0.15);
   Z_jetpt_noJEC_WW_DHZfirst_17->SetFrameFillStyle(1000);
   Z_jetpt_noJEC_WW_DHZfirst_17->SetFrameBorderMode(0);
   Z_jetpt_noJEC_WW_DHZfirst_17->SetFrameFillStyle(1000);
   Z_jetpt_noJEC_WW_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetpt_noJEC__2063 = new TH1D("VH_DHZfirst_Z_jetpt_noJEC__2063","",75,0,300);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetBinContent(17,0.152338);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetBinContent(22,0.6631251);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetBinContent(25,0.1947795);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetBinContent(31,0.588241);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetBinContent(33,0.2553652);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetBinContent(37,0.4922072);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetBinContent(44,0.4893481);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetBinContent(48,0.2028034);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetBinContent(53,0.2290723);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetBinContent(70,0.2776511);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetBinContent(71,0.2037551);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetBinContent(76,0.2907317);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetBinError(17,0.152338);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetBinError(22,0.523173);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetBinError(25,0.1947795);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetBinError(31,0.4241776);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetBinError(33,0.2553652);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetBinError(37,0.4922072);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetBinError(44,0.4893481);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetBinError(48,0.2028034);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetBinError(53,0.2290723);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetBinError(70,0.2776511);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetBinError(71,0.2037551);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetBinError(76,0.2266314);
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetEntries(15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetpt_noJEC__2063->SetLineColor(ci);
   VH_DHZfirst_Z_jetpt_noJEC__2063->GetXaxis()->SetTitle("b-jet p_{T} [GeV]");
   VH_DHZfirst_Z_jetpt_noJEC__2063->GetXaxis()->SetRange(1,75);
   VH_DHZfirst_Z_jetpt_noJEC__2063->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetpt_noJEC__2063->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetpt_noJEC__2063->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetpt_noJEC__2063->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_DHZfirst_Z_jetpt_noJEC__2063->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetpt_noJEC__2063->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetpt_noJEC__2063->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetpt_noJEC__2063->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetpt_noJEC__2063->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetpt_noJEC__2063->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetpt_noJEC__2063->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetpt_noJEC__2063->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetpt_noJEC__2063->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetpt_noJEC_WW_DHZfirst_17->Modified();
   Z_jetpt_noJEC_WW_DHZfirst_17->cd();
   Z_jetpt_noJEC_WW_DHZfirst_17->SetSelected(Z_jetpt_noJEC_WW_DHZfirst_17);
}
