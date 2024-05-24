#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetpt_JEC_WW_DHZfirst_18_logY()
{
//=========Macro generated from canvas: Z_jetpt_JEC_WW_DHZfirst_18/Z_jetpt_JEC_WW_DHZfirst_18
//=========  (Fri May 24 12:42:35 2024) by ROOT version 6.28/10
   TCanvas *Z_jetpt_JEC_WW_DHZfirst_18 = new TCanvas("Z_jetpt_JEC_WW_DHZfirst_18", "Z_jetpt_JEC_WW_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetpt_JEC_WW_DHZfirst_18->SetHighLightColor(2);
   Z_jetpt_JEC_WW_DHZfirst_18->Range(-60,-0.763886,340,0.2699391);
   Z_jetpt_JEC_WW_DHZfirst_18->SetFillColor(0);
   Z_jetpt_JEC_WW_DHZfirst_18->SetFillStyle(4000);
   Z_jetpt_JEC_WW_DHZfirst_18->SetBorderMode(0);
   Z_jetpt_JEC_WW_DHZfirst_18->SetBorderSize(2);
   Z_jetpt_JEC_WW_DHZfirst_18->SetLogy();
   Z_jetpt_JEC_WW_DHZfirst_18->SetLeftMargin(0.15);
   Z_jetpt_JEC_WW_DHZfirst_18->SetFrameFillStyle(1000);
   Z_jetpt_JEC_WW_DHZfirst_18->SetFrameBorderMode(0);
   Z_jetpt_JEC_WW_DHZfirst_18->SetFrameFillStyle(1000);
   Z_jetpt_JEC_WW_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetpt_JEC__2094 = new TH1D("VH_DHZfirst_Z_jetpt_JEC__2094","",75,0,300);
   VH_DHZfirst_Z_jetpt_JEC__2094->SetBinContent(20,0.7744756);
   VH_DHZfirst_Z_jetpt_JEC__2094->SetBinContent(22,0.4370453);
   VH_DHZfirst_Z_jetpt_JEC__2094->SetBinContent(25,0.6487306);
   VH_DHZfirst_Z_jetpt_JEC__2094->SetBinContent(30,0.4850375);
   VH_DHZfirst_Z_jetpt_JEC__2094->SetBinContent(33,0.5541235);
   VH_DHZfirst_Z_jetpt_JEC__2094->SetBinContent(42,0.741126);
   VH_DHZfirst_Z_jetpt_JEC__2094->SetBinContent(59,0.6753953);
   VH_DHZfirst_Z_jetpt_JEC__2094->SetBinContent(62,0.6140818);
   VH_DHZfirst_Z_jetpt_JEC__2094->SetBinContent(76,0.5284769);
   VH_DHZfirst_Z_jetpt_JEC__2094->SetBinError(20,0.7744756);
   VH_DHZfirst_Z_jetpt_JEC__2094->SetBinError(22,0.4370453);
   VH_DHZfirst_Z_jetpt_JEC__2094->SetBinError(25,0.6487306);
   VH_DHZfirst_Z_jetpt_JEC__2094->SetBinError(30,0.4850375);
   VH_DHZfirst_Z_jetpt_JEC__2094->SetBinError(33,0.5541235);
   VH_DHZfirst_Z_jetpt_JEC__2094->SetBinError(42,0.741126);
   VH_DHZfirst_Z_jetpt_JEC__2094->SetBinError(59,0.6753953);
   VH_DHZfirst_Z_jetpt_JEC__2094->SetBinError(62,0.6140818);
   VH_DHZfirst_Z_jetpt_JEC__2094->SetBinError(76,0.5284769);
   VH_DHZfirst_Z_jetpt_JEC__2094->SetEntries(9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetpt_JEC__2094->SetLineColor(ci);
   VH_DHZfirst_Z_jetpt_JEC__2094->GetXaxis()->SetTitle("b-jet p_{T} (w/ JEC) [GeV]");
   VH_DHZfirst_Z_jetpt_JEC__2094->GetXaxis()->SetRange(1,75);
   VH_DHZfirst_Z_jetpt_JEC__2094->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetpt_JEC__2094->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetpt_JEC__2094->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetpt_JEC__2094->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_DHZfirst_Z_jetpt_JEC__2094->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetpt_JEC__2094->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetpt_JEC__2094->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetpt_JEC__2094->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetpt_JEC__2094->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetpt_JEC__2094->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetpt_JEC__2094->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetpt_JEC__2094->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetpt_JEC__2094->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetpt_JEC_WW_DHZfirst_18->Modified();
   Z_jetpt_JEC_WW_DHZfirst_18->cd();
   Z_jetpt_JEC_WW_DHZfirst_18->SetSelected(Z_jetpt_JEC_WW_DHZfirst_18);
}
