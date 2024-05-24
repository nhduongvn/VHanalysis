#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_QCD_tagFirst_16_logY()
{
//=========Macro generated from canvas: CutFlow_QCD_tagFirst_16/CutFlow_QCD_tagFirst_16
//=========  (Thu May 23 15:31:42 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_QCD_tagFirst_16 = new TCanvas("CutFlow_QCD_tagFirst_16", "CutFlow_QCD_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_QCD_tagFirst_16->SetHighLightColor(2);
   CutFlow_QCD_tagFirst_16->Range(-1.2,5.367224,6.8,13.08209);
   CutFlow_QCD_tagFirst_16->SetFillColor(0);
   CutFlow_QCD_tagFirst_16->SetFillStyle(4000);
   CutFlow_QCD_tagFirst_16->SetBorderMode(0);
   CutFlow_QCD_tagFirst_16->SetBorderSize(2);
   CutFlow_QCD_tagFirst_16->SetLogy();
   CutFlow_QCD_tagFirst_16->SetLeftMargin(0.15);
   CutFlow_QCD_tagFirst_16->SetFrameFillStyle(1000);
   CutFlow_QCD_tagFirst_16->SetFrameBorderMode(0);
   CutFlow_QCD_tagFirst_16->SetFrameFillStyle(1000);
   CutFlow_QCD_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__7 = new TH1D("CutFlow_evt_tagFirst__7","",5,0,5);
   CutFlow_evt_tagFirst__7->SetBinContent(1,1.079073e+12);
   CutFlow_evt_tagFirst__7->SetBinContent(2,1.079054e+12);
   CutFlow_evt_tagFirst__7->SetBinContent(3,2.306261e+09);
   CutFlow_evt_tagFirst__7->SetBinContent(4,1.526046e+08);
   CutFlow_evt_tagFirst__7->SetBinContent(5,2752580);
   CutFlow_evt_tagFirst__7->SetBinError(1,1.511597e+08);
   CutFlow_evt_tagFirst__7->SetBinError(2,1.51159e+08);
   CutFlow_evt_tagFirst__7->SetBinError(3,1965746);
   CutFlow_evt_tagFirst__7->SetBinError(4,375213.5);
   CutFlow_evt_tagFirst__7->SetBinError(5,42083.17);
   CutFlow_evt_tagFirst__7->SetEntries(5.419351e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__7->SetLineColor(ci);
   CutFlow_evt_tagFirst__7->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__7->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__7->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__7->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__7->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__7->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__7->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__7->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__7->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__7->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__7->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__7->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__7->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__7->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__7->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__7->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__7->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__7->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__7->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__7->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_QCD_tagFirst_16->Modified();
   CutFlow_QCD_tagFirst_16->cd();
   CutFlow_QCD_tagFirst_16->SetSelected(CutFlow_QCD_tagFirst_16);
}
