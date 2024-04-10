#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_tagFirst_18_logY()
{
//=========Macro generated from canvas: pt_jet2_tagFirst_18/pt_jet2_tagFirst_18
//=========  (Tue Apr  9 15:53:53 2024) by ROOT version 6.28/10
   TCanvas *pt_jet2_tagFirst_18 = new TCanvas("pt_jet2_tagFirst_18", "pt_jet2_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   pt_jet2_tagFirst_18->SetHighLightColor(2);
   pt_jet2_tagFirst_18->Range(-200,-2.773566e+08,1133.333,2.496209e+09);
   pt_jet2_tagFirst_18->SetFillColor(0);
   pt_jet2_tagFirst_18->SetFillStyle(4000);
   pt_jet2_tagFirst_18->SetBorderMode(0);
   pt_jet2_tagFirst_18->SetBorderSize(2);
   pt_jet2_tagFirst_18->SetLeftMargin(0.15);
   pt_jet2_tagFirst_18->SetFrameFillStyle(1000);
   pt_jet2_tagFirst_18->SetFrameBorderMode(0);
   pt_jet2_tagFirst_18->SetFrameFillStyle(1000);
   pt_jet2_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_pt_jet2__82 = new TH1D("Jets_cut_pt_jet2__82","",500,0,2000);
   Jets_cut_pt_jet2__82->SetBinContent(12,2.113193e+09);
   Jets_cut_pt_jet2__82->SetBinContent(13,1.501636e+09);
   Jets_cut_pt_jet2__82->SetBinContent(14,6.259337e+08);
   Jets_cut_pt_jet2__82->SetBinContent(15,3.072081e+08);
   Jets_cut_pt_jet2__82->SetBinContent(16,1.176192e+08);
   Jets_cut_pt_jet2__82->SetBinContent(17,4.499409e+07);
   Jets_cut_pt_jet2__82->SetBinContent(18,3.110925e+07);
   Jets_cut_pt_jet2__82->SetBinContent(19,3.277859e+07);
   Jets_cut_pt_jet2__82->SetBinContent(20,5.494512e+07);
   Jets_cut_pt_jet2__82->SetBinContent(21,1.526797e+07);
   Jets_cut_pt_jet2__82->SetBinContent(22,1877240);
   Jets_cut_pt_jet2__82->SetBinContent(23,6295847);
   Jets_cut_pt_jet2__82->SetBinContent(24,1281903);
   Jets_cut_pt_jet2__82->SetBinContent(25,2064382);
   Jets_cut_pt_jet2__82->SetBinContent(26,1657846);
   Jets_cut_pt_jet2__82->SetBinContent(27,2082465);
   Jets_cut_pt_jet2__82->SetBinContent(29,4422224);
   Jets_cut_pt_jet2__82->SetBinContent(30,1086970);
   Jets_cut_pt_jet2__82->SetBinContent(31,1869483);
   Jets_cut_pt_jet2__82->SetBinContent(38,1865945);
   Jets_cut_pt_jet2__82->SetBinError(12,6.973639e+07);
   Jets_cut_pt_jet2__82->SetBinError(13,5.481262e+07);
   Jets_cut_pt_jet2__82->SetBinError(14,3.254544e+07);
   Jets_cut_pt_jet2__82->SetBinError(15,2.503934e+07);
   Jets_cut_pt_jet2__82->SetBinError(16,1.798562e+07);
   Jets_cut_pt_jet2__82->SetBinError(17,9938691);
   Jets_cut_pt_jet2__82->SetBinError(18,8047809);
   Jets_cut_pt_jet2__82->SetBinError(19,9102924);
   Jets_cut_pt_jet2__82->SetBinError(20,1.325941e+07);
   Jets_cut_pt_jet2__82->SetBinError(21,5990581);
   Jets_cut_pt_jet2__82->SetBinError(22,1877240);
   Jets_cut_pt_jet2__82->SetBinError(23,3662755);
   Jets_cut_pt_jet2__82->SetBinError(24,1281903);
   Jets_cut_pt_jet2__82->SetBinError(25,2064382);
   Jets_cut_pt_jet2__82->SetBinError(26,1657846);
   Jets_cut_pt_jet2__82->SetBinError(27,2082465);
   Jets_cut_pt_jet2__82->SetBinError(29,4422224);
   Jets_cut_pt_jet2__82->SetBinError(30,1086970);
   Jets_cut_pt_jet2__82->SetBinError(31,1869483);
   Jets_cut_pt_jet2__82->SetBinError(38,1865945);
   Jets_cut_pt_jet2__82->SetEntries(3369);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_pt_jet2__82->SetLineColor(ci);
   Jets_cut_pt_jet2__82->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   Jets_cut_pt_jet2__82->GetXaxis()->SetRange(1,250);
   Jets_cut_pt_jet2__82->GetXaxis()->SetLabelFont(42);
   Jets_cut_pt_jet2__82->GetXaxis()->SetTitleOffset(1);
   Jets_cut_pt_jet2__82->GetXaxis()->SetTitleFont(42);
   Jets_cut_pt_jet2__82->GetYaxis()->SetTitle("Events/4.0 GeV");
   Jets_cut_pt_jet2__82->GetYaxis()->SetLabelFont(42);
   Jets_cut_pt_jet2__82->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_pt_jet2__82->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_pt_jet2__82->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_pt_jet2__82->GetYaxis()->SetTitleFont(42);
   Jets_cut_pt_jet2__82->GetZaxis()->SetLabelFont(42);
   Jets_cut_pt_jet2__82->GetZaxis()->SetTitleOffset(1);
   Jets_cut_pt_jet2__82->GetZaxis()->SetTitleFont(42);
   Jets_cut_pt_jet2__82->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   pt_jet2_tagFirst_18->Modified();
   pt_jet2_tagFirst_18->cd();
   pt_jet2_tagFirst_18->SetSelected(pt_jet2_tagFirst_18);
}
