#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_QCD_tagFirst_17_logY()
{
//=========Macro generated from canvas: CutFlow_QCD_tagFirst_17/CutFlow_QCD_tagFirst_17
//=========  (Mon Apr 22 15:12:11 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_QCD_tagFirst_17 = new TCanvas("CutFlow_QCD_tagFirst_17", "CutFlow_QCD_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_QCD_tagFirst_17->SetHighLightColor(2);
   CutFlow_QCD_tagFirst_17->Range(-1.2,4.967769,6.8,13.13827);
   CutFlow_QCD_tagFirst_17->SetFillColor(0);
   CutFlow_QCD_tagFirst_17->SetFillStyle(4000);
   CutFlow_QCD_tagFirst_17->SetBorderMode(0);
   CutFlow_QCD_tagFirst_17->SetBorderSize(2);
   CutFlow_QCD_tagFirst_17->SetLogy();
   CutFlow_QCD_tagFirst_17->SetLeftMargin(0.15);
   CutFlow_QCD_tagFirst_17->SetFrameFillStyle(1000);
   CutFlow_QCD_tagFirst_17->SetFrameBorderMode(0);
   CutFlow_QCD_tagFirst_17->SetFrameFillStyle(1000);
   CutFlow_QCD_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__8 = new TH1D("CutFlow_evt_tagFirst__8","",5,0,5);
   CutFlow_evt_tagFirst__8->SetBinContent(1,1.105792e+12);
   CutFlow_evt_tagFirst__8->SetBinContent(2,1.105691e+12);
   CutFlow_evt_tagFirst__8->SetBinContent(3,2.404372e+09);
   CutFlow_evt_tagFirst__8->SetBinContent(4,1.43858e+07);
   CutFlow_evt_tagFirst__8->SetBinContent(5,1218566);
   CutFlow_evt_tagFirst__8->SetBinError(1,1.191085e+08);
   CutFlow_evt_tagFirst__8->SetBinError(2,1.191038e+08);
   CutFlow_evt_tagFirst__8->SetBinError(3,1731474);
   CutFlow_evt_tagFirst__8->SetBinError(4,121648.7);
   CutFlow_evt_tagFirst__8->SetBinError(5,27588.78);
   CutFlow_evt_tagFirst__8->SetEntries(6.593275e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__8->SetLineColor(ci);
   CutFlow_evt_tagFirst__8->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__8->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__8->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__8->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__8->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__8->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__8->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__8->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__8->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__8->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__8->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__8->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__8->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__8->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__8->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__8->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__8->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__8->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__8->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__8->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_QCD_tagFirst_17->Modified();
   CutFlow_QCD_tagFirst_17->cd();
   CutFlow_QCD_tagFirst_17->SetSelected(CutFlow_QCD_tagFirst_17);
}
