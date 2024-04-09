#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetpt_JEC_logY()
{
//=========Macro generated from canvas: Z_jetpt_JEC/Z_jetpt_JEC
//=========  (Fri Mar 29 15:50:01 2024) by ROOT version 6.28/10
   TCanvas *Z_jetpt_JEC = new TCanvas("Z_jetpt_JEC", "Z_jetpt_JEC",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetpt_JEC->SetHighLightColor(2);
   Z_jetpt_JEC->Range(-60,-0.883533,340,7.951797);
   Z_jetpt_JEC->SetFillColor(0);
   Z_jetpt_JEC->SetFillStyle(4000);
   Z_jetpt_JEC->SetBorderMode(0);
   Z_jetpt_JEC->SetBorderSize(2);
   Z_jetpt_JEC->SetLeftMargin(0.15);
   Z_jetpt_JEC->SetFrameFillStyle(1000);
   Z_jetpt_JEC->SetFrameBorderMode(0);
   Z_jetpt_JEC->SetFrameFillStyle(1000);
   Z_jetpt_JEC->SetFrameBorderMode(0);
   
   TH1D *VH_MCjet_ideal_Z_jetpt_JEC__22 = new TH1D("VH_MCjet_ideal_Z_jetpt_JEC__22","",75,0,300);
   VH_MCjet_ideal_Z_jetpt_JEC__22->SetBinContent(0,7.304791);
   VH_MCjet_ideal_Z_jetpt_JEC__22->SetBinContent(1,6.73168);
   VH_MCjet_ideal_Z_jetpt_JEC__22->SetBinContent(2,0.04561146);
   VH_MCjet_ideal_Z_jetpt_JEC__22->SetBinError(0,0.1602037);
   VH_MCjet_ideal_Z_jetpt_JEC__22->SetBinError(1,0.1456832);
   VH_MCjet_ideal_Z_jetpt_JEC__22->SetBinError(2,0.01281695);
   VH_MCjet_ideal_Z_jetpt_JEC__22->SetEntries(5357);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_MCjet_ideal_Z_jetpt_JEC__22->SetLineColor(ci);
   VH_MCjet_ideal_Z_jetpt_JEC__22->GetXaxis()->SetTitle("b-jet p_{T} (w/ JEC) [GeV]");
   VH_MCjet_ideal_Z_jetpt_JEC__22->GetXaxis()->SetRange(1,75);
   VH_MCjet_ideal_Z_jetpt_JEC__22->GetXaxis()->SetLabelFont(42);
   VH_MCjet_ideal_Z_jetpt_JEC__22->GetXaxis()->SetTitleOffset(1);
   VH_MCjet_ideal_Z_jetpt_JEC__22->GetXaxis()->SetTitleFont(42);
   VH_MCjet_ideal_Z_jetpt_JEC__22->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_MCjet_ideal_Z_jetpt_JEC__22->GetYaxis()->SetLabelFont(42);
   VH_MCjet_ideal_Z_jetpt_JEC__22->GetYaxis()->SetLabelSize(0.05);
   VH_MCjet_ideal_Z_jetpt_JEC__22->GetYaxis()->SetTitleSize(0.057);
   VH_MCjet_ideal_Z_jetpt_JEC__22->GetYaxis()->SetTitleOffset(1.2);
   VH_MCjet_ideal_Z_jetpt_JEC__22->GetYaxis()->SetTitleFont(42);
   VH_MCjet_ideal_Z_jetpt_JEC__22->GetZaxis()->SetLabelFont(42);
   VH_MCjet_ideal_Z_jetpt_JEC__22->GetZaxis()->SetTitleOffset(1);
   VH_MCjet_ideal_Z_jetpt_JEC__22->GetZaxis()->SetTitleFont(42);
   VH_MCjet_ideal_Z_jetpt_JEC__22->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetpt_JEC->Modified();
   Z_jetpt_JEC->cd();
   Z_jetpt_JEC->SetSelected(Z_jetpt_JEC);
}
