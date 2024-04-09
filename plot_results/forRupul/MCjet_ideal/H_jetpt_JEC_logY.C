#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetpt_JEC_logY()
{
//=========Macro generated from canvas: H_jetpt_JEC/H_jetpt_JEC
//=========  (Fri Mar 29 15:50:01 2024) by ROOT version 6.28/10
   TCanvas *H_jetpt_JEC = new TCanvas("H_jetpt_JEC", "H_jetpt_JEC",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC->SetHighLightColor(2);
   H_jetpt_JEC->Range(-60,-0.883533,340,7.951797);
   H_jetpt_JEC->SetFillColor(0);
   H_jetpt_JEC->SetFillStyle(4000);
   H_jetpt_JEC->SetBorderMode(0);
   H_jetpt_JEC->SetBorderSize(2);
   H_jetpt_JEC->SetLeftMargin(0.15);
   H_jetpt_JEC->SetFrameFillStyle(1000);
   H_jetpt_JEC->SetFrameBorderMode(0);
   H_jetpt_JEC->SetFrameFillStyle(1000);
   H_jetpt_JEC->SetFrameBorderMode(0);
   
   TH1D *VH_MCjet_ideal_H_jetpt_JEC__18 = new TH1D("VH_MCjet_ideal_H_jetpt_JEC__18","",75,0,300);
   VH_MCjet_ideal_H_jetpt_JEC__18->SetBinContent(0,7.304791);
   VH_MCjet_ideal_H_jetpt_JEC__18->SetBinContent(1,6.73168);
   VH_MCjet_ideal_H_jetpt_JEC__18->SetBinContent(2,0.04561146);
   VH_MCjet_ideal_H_jetpt_JEC__18->SetBinError(0,0.1602037);
   VH_MCjet_ideal_H_jetpt_JEC__18->SetBinError(1,0.1456832);
   VH_MCjet_ideal_H_jetpt_JEC__18->SetBinError(2,0.01281695);
   VH_MCjet_ideal_H_jetpt_JEC__18->SetEntries(5357);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_MCjet_ideal_H_jetpt_JEC__18->SetLineColor(ci);
   VH_MCjet_ideal_H_jetpt_JEC__18->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VH_MCjet_ideal_H_jetpt_JEC__18->GetXaxis()->SetRange(1,75);
   VH_MCjet_ideal_H_jetpt_JEC__18->GetXaxis()->SetLabelFont(42);
   VH_MCjet_ideal_H_jetpt_JEC__18->GetXaxis()->SetTitleOffset(1);
   VH_MCjet_ideal_H_jetpt_JEC__18->GetXaxis()->SetTitleFont(42);
   VH_MCjet_ideal_H_jetpt_JEC__18->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_MCjet_ideal_H_jetpt_JEC__18->GetYaxis()->SetLabelFont(42);
   VH_MCjet_ideal_H_jetpt_JEC__18->GetYaxis()->SetLabelSize(0.05);
   VH_MCjet_ideal_H_jetpt_JEC__18->GetYaxis()->SetTitleSize(0.057);
   VH_MCjet_ideal_H_jetpt_JEC__18->GetYaxis()->SetTitleOffset(1.2);
   VH_MCjet_ideal_H_jetpt_JEC__18->GetYaxis()->SetTitleFont(42);
   VH_MCjet_ideal_H_jetpt_JEC__18->GetZaxis()->SetLabelFont(42);
   VH_MCjet_ideal_H_jetpt_JEC__18->GetZaxis()->SetTitleOffset(1);
   VH_MCjet_ideal_H_jetpt_JEC__18->GetZaxis()->SetTitleFont(42);
   VH_MCjet_ideal_H_jetpt_JEC__18->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_JEC->Modified();
   H_jetpt_JEC->cd();
   H_jetpt_JEC->SetSelected(H_jetpt_JEC);
}
