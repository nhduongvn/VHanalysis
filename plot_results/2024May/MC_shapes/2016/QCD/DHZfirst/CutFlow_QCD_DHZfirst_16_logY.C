#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_QCD_DHZfirst_16_logY()
{
//=========Macro generated from canvas: CutFlow_QCD_DHZfirst_16/CutFlow_QCD_DHZfirst_16
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_QCD_DHZfirst_16 = new TCanvas("CutFlow_QCD_DHZfirst_16", "CutFlow_QCD_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_QCD_DHZfirst_16->SetHighLightColor(2);
   CutFlow_QCD_DHZfirst_16->Range(-1.4,5.076402,7.933333,13.1144);
   CutFlow_QCD_DHZfirst_16->SetFillColor(0);
   CutFlow_QCD_DHZfirst_16->SetFillStyle(4000);
   CutFlow_QCD_DHZfirst_16->SetBorderMode(0);
   CutFlow_QCD_DHZfirst_16->SetBorderSize(2);
   CutFlow_QCD_DHZfirst_16->SetLogy();
   CutFlow_QCD_DHZfirst_16->SetLeftMargin(0.15);
   CutFlow_QCD_DHZfirst_16->SetFrameFillStyle(1000);
   CutFlow_QCD_DHZfirst_16->SetFrameBorderMode(0);
   CutFlow_QCD_DHZfirst_16->SetFrameFillStyle(1000);
   CutFlow_QCD_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__67 = new TH1D("CutFlow_evt_DHZfirst__67","",8,0,8);
   CutFlow_evt_DHZfirst__67->SetBinContent(1,1.079073e+12);
   CutFlow_evt_DHZfirst__67->SetBinContent(2,1.079054e+12);
   CutFlow_evt_DHZfirst__67->SetBinContent(3,2.306261e+09);
   CutFlow_evt_DHZfirst__67->SetBinContent(4,1.526046e+08);
   CutFlow_evt_DHZfirst__67->SetBinContent(5,2.209751e+07);
   CutFlow_evt_DHZfirst__67->SetBinContent(6,5128910);
   CutFlow_evt_DHZfirst__67->SetBinContent(7,1517859);
   CutFlow_evt_DHZfirst__67->SetBinContent(8,383527.4);
   CutFlow_evt_DHZfirst__67->SetBinError(1,1.511597e+08);
   CutFlow_evt_DHZfirst__67->SetBinError(2,1.51159e+08);
   CutFlow_evt_DHZfirst__67->SetBinError(3,1965746);
   CutFlow_evt_DHZfirst__67->SetBinError(4,375213.5);
   CutFlow_evt_DHZfirst__67->SetBinError(5,127004.5);
   CutFlow_evt_DHZfirst__67->SetBinError(6,61756.74);
   CutFlow_evt_DHZfirst__67->SetBinError(7,38909.47);
   CutFlow_evt_DHZfirst__67->SetBinError(8,11678.18);
   CutFlow_evt_DHZfirst__67->SetEntries(5.428856e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__67->SetLineColor(ci);
   CutFlow_evt_DHZfirst__67->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__67->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__67->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__67->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__67->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__67->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__67->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__67->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__67->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__67->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__67->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__67->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__67->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__67->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__67->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__67->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__67->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__67->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__67->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__67->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__67->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__67->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__67->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_QCD_DHZfirst_16->Modified();
   CutFlow_QCD_DHZfirst_16->cd();
   CutFlow_QCD_DHZfirst_16->SetSelected(CutFlow_QCD_DHZfirst_16);
}
