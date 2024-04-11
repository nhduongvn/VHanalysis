#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetpt_JEC_DHZfirst_18_logY()
{
//=========Macro generated from canvas: Z_jetpt_JEC_DHZfirst_18/Z_jetpt_JEC_DHZfirst_18
//=========  (Thu Apr 11 14:04:09 2024) by ROOT version 6.28/10
   TCanvas *Z_jetpt_JEC_DHZfirst_18 = new TCanvas("Z_jetpt_JEC_DHZfirst_18", "Z_jetpt_JEC_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetpt_JEC_DHZfirst_18->SetHighLightColor(2);
   Z_jetpt_JEC_DHZfirst_18->Range(-60,-23520.62,340,211685.6);
   Z_jetpt_JEC_DHZfirst_18->SetFillColor(0);
   Z_jetpt_JEC_DHZfirst_18->SetFillStyle(4000);
   Z_jetpt_JEC_DHZfirst_18->SetBorderMode(0);
   Z_jetpt_JEC_DHZfirst_18->SetBorderSize(2);
   Z_jetpt_JEC_DHZfirst_18->SetLeftMargin(0.15);
   Z_jetpt_JEC_DHZfirst_18->SetFrameFillStyle(1000);
   Z_jetpt_JEC_DHZfirst_18->SetFrameBorderMode(0);
   Z_jetpt_JEC_DHZfirst_18->SetFrameFillStyle(1000);
   Z_jetpt_JEC_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetpt_JEC__70 = new TH1D("VH_DHZfirst_Z_jetpt_JEC__70","",75,0,300);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinContent(29,179204.7);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinContent(38,8042.265);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinContent(39,11024.37);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinContent(41,19236.66);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinContent(42,8313.37);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinContent(43,2145.204);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinContent(46,1436.619);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinContent(47,650.8824);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinContent(48,475.393);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinContent(50,8235.33);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinContent(51,603.1441);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinContent(53,1217.401);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinContent(55,622.8327);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinContent(62,2116.105);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinContent(63,1516.11);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinContent(67,14514.81);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinContent(68,577.9946);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinContent(73,1154.508);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinContent(75,1308.763);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinContent(76,21441.58);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinError(29,179204.7);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinError(38,7526.196);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinError(39,11024.37);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinError(41,19236.66);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinError(42,8313.37);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinError(43,1250.104);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinError(46,1436.619);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinError(47,650.8824);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinError(48,475.393);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinError(50,8235.33);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinError(51,603.1441);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinError(53,1217.401);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinError(55,622.8327);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinError(62,1582.501);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinError(63,1516.11);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinError(67,14514.81);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinError(68,577.9946);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinError(73,1154.508);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinError(75,927.157);
   VH_DHZfirst_Z_jetpt_JEC__70->SetBinError(76,6634.262);
   VH_DHZfirst_Z_jetpt_JEC__70->SetEntries(46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetpt_JEC__70->SetLineColor(ci);
   VH_DHZfirst_Z_jetpt_JEC__70->GetXaxis()->SetTitle("b-jet p_{T} (w/ JEC) [GeV]");
   VH_DHZfirst_Z_jetpt_JEC__70->GetXaxis()->SetRange(1,75);
   VH_DHZfirst_Z_jetpt_JEC__70->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetpt_JEC__70->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetpt_JEC__70->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetpt_JEC__70->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_DHZfirst_Z_jetpt_JEC__70->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetpt_JEC__70->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetpt_JEC__70->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetpt_JEC__70->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetpt_JEC__70->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetpt_JEC__70->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetpt_JEC__70->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetpt_JEC__70->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetpt_JEC__70->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetpt_JEC_DHZfirst_18->Modified();
   Z_jetpt_JEC_DHZfirst_18->cd();
   Z_jetpt_JEC_DHZfirst_18->SetSelected(Z_jetpt_JEC_DHZfirst_18);
}
