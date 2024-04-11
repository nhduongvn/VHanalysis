#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetpt_noJEC_DHZfirst_18_logY()
{
//=========Macro generated from canvas: Z_jetpt_noJEC_DHZfirst_18/Z_jetpt_noJEC_DHZfirst_18
//=========  (Thu Apr 11 14:04:09 2024) by ROOT version 6.28/10
   TCanvas *Z_jetpt_noJEC_DHZfirst_18 = new TCanvas("Z_jetpt_noJEC_DHZfirst_18", "Z_jetpt_noJEC_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetpt_noJEC_DHZfirst_18->SetHighLightColor(2);
   Z_jetpt_noJEC_DHZfirst_18->Range(-60,-23520.62,340,211685.6);
   Z_jetpt_noJEC_DHZfirst_18->SetFillColor(0);
   Z_jetpt_noJEC_DHZfirst_18->SetFillStyle(4000);
   Z_jetpt_noJEC_DHZfirst_18->SetBorderMode(0);
   Z_jetpt_noJEC_DHZfirst_18->SetBorderSize(2);
   Z_jetpt_noJEC_DHZfirst_18->SetLeftMargin(0.15);
   Z_jetpt_noJEC_DHZfirst_18->SetFrameFillStyle(1000);
   Z_jetpt_noJEC_DHZfirst_18->SetFrameBorderMode(0);
   Z_jetpt_noJEC_DHZfirst_18->SetFrameFillStyle(1000);
   Z_jetpt_noJEC_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetpt_noJEC__69 = new TH1D("VH_DHZfirst_Z_jetpt_noJEC__69","",75,0,300);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinContent(30,179204.7);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinContent(37,739.995);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinContent(38,7507.148);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinContent(39,11024.37);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinContent(42,535.1176);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinContent(43,19236.66);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinContent(45,8313.37);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinContent(46,1471.516);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinContent(47,2021.194);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinContent(49,8235.33);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinContent(51,603.1441);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinContent(54,622.8327);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinContent(55,1692.794);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinContent(63,693.8003);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinContent(64,1422.305);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinContent(65,1516.11);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinContent(67,14514.81);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinContent(69,577.9946);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinContent(70,1154.508);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinContent(73,1546.174);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinContent(75,1822.192);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinContent(76,19381.98);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinError(30,179204.7);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinError(37,739.995);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinError(38,7507.148);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinError(39,11024.37);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinError(42,535.1176);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinError(43,19236.66);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinError(45,8313.37);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinError(46,1047.42);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinError(47,1551);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinError(49,8235.33);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinError(51,603.1441);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinError(54,622.8327);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinError(55,1306.929);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinError(63,693.8003);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinError(64,1422.305);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinError(65,1516.11);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinError(67,14514.81);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinError(69,577.9946);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinError(70,1154.508);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinError(73,1546.174);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinError(75,1324.454);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetBinError(76,6381.866);
   VH_DHZfirst_Z_jetpt_noJEC__69->SetEntries(46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetpt_noJEC__69->SetLineColor(ci);
   VH_DHZfirst_Z_jetpt_noJEC__69->GetXaxis()->SetTitle("b-jet p_{T} [GeV]");
   VH_DHZfirst_Z_jetpt_noJEC__69->GetXaxis()->SetRange(1,75);
   VH_DHZfirst_Z_jetpt_noJEC__69->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetpt_noJEC__69->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetpt_noJEC__69->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetpt_noJEC__69->GetYaxis()->SetTitle("Events/4.0 GeV");
   VH_DHZfirst_Z_jetpt_noJEC__69->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetpt_noJEC__69->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetpt_noJEC__69->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetpt_noJEC__69->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetpt_noJEC__69->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetpt_noJEC__69->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetpt_noJEC__69->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetpt_noJEC__69->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetpt_noJEC__69->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetpt_noJEC_DHZfirst_18->Modified();
   Z_jetpt_noJEC_DHZfirst_18->cd();
   Z_jetpt_noJEC_DHZfirst_18->SetSelected(Z_jetpt_noJEC_DHZfirst_18);
}
