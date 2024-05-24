#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetpt_JEC_WW_DHZfirst_18_logY()
{
//=========Macro generated from canvas: H_jetpt_JEC_WW_DHZfirst_18/H_jetpt_JEC_WW_DHZfirst_18
//=========  (Fri May 24 12:42:33 2024) by ROOT version 6.28/10
   TCanvas *H_jetpt_JEC_WW_DHZfirst_18 = new TCanvas("H_jetpt_JEC_WW_DHZfirst_18", "H_jetpt_JEC_WW_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_WW_DHZfirst_18->SetHighLightColor(2);
   H_jetpt_JEC_WW_DHZfirst_18->Range(-60,-0.763886,340,0.2699391);
   H_jetpt_JEC_WW_DHZfirst_18->SetFillColor(0);
   H_jetpt_JEC_WW_DHZfirst_18->SetFillStyle(4000);
   H_jetpt_JEC_WW_DHZfirst_18->SetBorderMode(0);
   H_jetpt_JEC_WW_DHZfirst_18->SetBorderSize(2);
   H_jetpt_JEC_WW_DHZfirst_18->SetLogy();
   H_jetpt_JEC_WW_DHZfirst_18->SetLeftMargin(0.15);
   H_jetpt_JEC_WW_DHZfirst_18->SetFrameFillStyle(1000);
   H_jetpt_JEC_WW_DHZfirst_18->SetFrameBorderMode(0);
   H_jetpt_JEC_WW_DHZfirst_18->SetFrameFillStyle(1000);
   H_jetpt_JEC_WW_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_jetpt_JEC__1974 = new TH1D("VH_DHZfirst_H_jetpt_JEC__1974","",75,0,300);
   VH_DHZfirst_H_jetpt_JEC__1974->SetBinContent(30,0.4370453);
   VH_DHZfirst_H_jetpt_JEC__1974->SetBinContent(37,0.4850375);
   VH_DHZfirst_H_jetpt_JEC__1974->SetBinContent(38,0.6487306);
   VH_DHZfirst_H_jetpt_JEC__1974->SetBinContent(41,0.5541235);
   VH_DHZfirst_H_jetpt_JEC__1974->SetBinContent(44,0.7744756);
   VH_DHZfirst_H_jetpt_JEC__1974->SetBinContent(48,0.741126);
   VH_DHZfirst_H_jetpt_JEC__1974->SetBinContent(76,1.817954);
   VH_DHZfirst_H_jetpt_JEC__1974->SetBinError(30,0.4370453);
   VH_DHZfirst_H_jetpt_JEC__1974->SetBinError(37,0.4850375);
   VH_DHZfirst_H_jetpt_JEC__1974->SetBinError(38,0.6487306);
   VH_DHZfirst_H_jetpt_JEC__1974->SetBinError(41,0.5541235);
   VH_DHZfirst_H_jetpt_JEC__1974->SetBinError(44,0.7744756);
   VH_DHZfirst_H_jetpt_JEC__1974->SetBinError(48,0.741126);
   VH_DHZfirst_H_jetpt_JEC__1974->SetBinError(76,1.054772);
   VH_DHZfirst_H_jetpt_JEC__1974->SetEntries(9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_jetpt_JEC__1974->SetLineColor(ci);
   VH_DHZfirst_H_jetpt_JEC__1974->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VH_DHZfirst_H_jetpt_JEC__1974->GetXaxis()->SetRange(1,75);
   VH_DHZfirst_H_jetpt_JEC__1974->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetpt_JEC__1974->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetpt_JEC__1974->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetpt_JEC__1974->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_DHZfirst_H_jetpt_JEC__1974->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetpt_JEC__1974->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_jetpt_JEC__1974->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_jetpt_JEC__1974->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_jetpt_JEC__1974->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetpt_JEC__1974->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetpt_JEC__1974->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetpt_JEC__1974->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetpt_JEC__1974->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_JEC_WW_DHZfirst_18->Modified();
   H_jetpt_JEC_WW_DHZfirst_18->cd();
   H_jetpt_JEC_WW_DHZfirst_18->SetSelected(H_jetpt_JEC_WW_DHZfirst_18);
}
