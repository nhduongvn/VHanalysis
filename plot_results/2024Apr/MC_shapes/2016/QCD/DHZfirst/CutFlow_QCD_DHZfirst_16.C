#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_QCD_DHZfirst_16()
{
//=========Macro generated from canvas: CutFlow_QCD_DHZfirst_16/CutFlow_QCD_DHZfirst_16
//=========  (Mon Apr 22 15:10:08 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_QCD_DHZfirst_16 = new TCanvas("CutFlow_QCD_DHZfirst_16", "CutFlow_QCD_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_QCD_DHZfirst_16->SetHighLightColor(2);
   CutFlow_QCD_DHZfirst_16->Range(-1.4,-1.416283e+11,7.933333,1.274655e+12);
   CutFlow_QCD_DHZfirst_16->SetFillColor(0);
   CutFlow_QCD_DHZfirst_16->SetFillStyle(4000);
   CutFlow_QCD_DHZfirst_16->SetBorderMode(0);
   CutFlow_QCD_DHZfirst_16->SetBorderSize(2);
   CutFlow_QCD_DHZfirst_16->SetLeftMargin(0.15);
   CutFlow_QCD_DHZfirst_16->SetFrameFillStyle(1000);
   CutFlow_QCD_DHZfirst_16->SetFrameBorderMode(0);
   CutFlow_QCD_DHZfirst_16->SetFrameFillStyle(1000);
   CutFlow_QCD_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__67 = new TH1D("CutFlow_evt_DHZfirst__67","",8,0,8);
   CutFlow_evt_DHZfirst__67->SetBinContent(1,1.079073e+12);
   CutFlow_evt_DHZfirst__67->SetBinContent(2,1.079054e+12);
   CutFlow_evt_DHZfirst__67->SetBinContent(3,2.306294e+09);
   CutFlow_evt_DHZfirst__67->SetBinContent(4,1.527181e+08);
   CutFlow_evt_DHZfirst__67->SetBinContent(5,2.035849e+07);
   CutFlow_evt_DHZfirst__67->SetBinContent(6,4591204);
   CutFlow_evt_DHZfirst__67->SetBinContent(7,1258090);
   CutFlow_evt_DHZfirst__67->SetBinContent(8,316013.6);
   CutFlow_evt_DHZfirst__67->SetBinError(1,1.560628e+08);
   CutFlow_evt_DHZfirst__67->SetBinError(2,1.56062e+08);
   CutFlow_evt_DHZfirst__67->SetBinError(3,2005018);
   CutFlow_evt_DHZfirst__67->SetBinError(4,382943);
   CutFlow_evt_DHZfirst__67->SetBinError(5,129191);
   CutFlow_evt_DHZfirst__67->SetBinError(6,67013.4);
   CutFlow_evt_DHZfirst__67->SetBinError(7,31443.4);
   CutFlow_evt_DHZfirst__67->SetBinError(8,9894.222);
   CutFlow_evt_DHZfirst__67->SetEntries(5.531897e+08);

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
