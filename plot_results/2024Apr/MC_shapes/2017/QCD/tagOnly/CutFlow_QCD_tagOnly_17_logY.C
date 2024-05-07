#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_QCD_tagOnly_17_logY()
{
//=========Macro generated from canvas: CutFlow_QCD_tagOnly_17/CutFlow_QCD_tagOnly_17
//=========  (Mon Apr 22 15:12:12 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_QCD_tagOnly_17 = new TCanvas("CutFlow_QCD_tagOnly_17", "CutFlow_QCD_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_QCD_tagOnly_17->SetHighLightColor(2);
   CutFlow_QCD_tagOnly_17->Range(-1.4,5.544138,7.933333,13.07423);
   CutFlow_QCD_tagOnly_17->SetFillColor(0);
   CutFlow_QCD_tagOnly_17->SetFillStyle(4000);
   CutFlow_QCD_tagOnly_17->SetBorderMode(0);
   CutFlow_QCD_tagOnly_17->SetBorderSize(2);
   CutFlow_QCD_tagOnly_17->SetLogy();
   CutFlow_QCD_tagOnly_17->SetLeftMargin(0.15);
   CutFlow_QCD_tagOnly_17->SetFrameFillStyle(1000);
   CutFlow_QCD_tagOnly_17->SetFrameBorderMode(0);
   CutFlow_QCD_tagOnly_17->SetFrameFillStyle(1000);
   CutFlow_QCD_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagOnly__38 = new TH1D("CutFlow_evt_tagOnly__38","",8,0,8);
   CutFlow_evt_tagOnly__38->SetBinContent(1,1.105792e+12);
   CutFlow_evt_tagOnly__38->SetBinContent(2,1.105691e+12);
   CutFlow_evt_tagOnly__38->SetBinContent(3,2.404372e+09);
   CutFlow_evt_tagOnly__38->SetBinContent(4,1.43858e+07);
   CutFlow_evt_tagOnly__38->SetBinContent(5,1.089316e+07);
   CutFlow_evt_tagOnly__38->SetBinContent(6,6402624);
   CutFlow_evt_tagOnly__38->SetBinContent(7,3964402);
   CutFlow_evt_tagOnly__38->SetBinContent(8,1169118);
   CutFlow_evt_tagOnly__38->SetBinError(1,1.191085e+08);
   CutFlow_evt_tagOnly__38->SetBinError(2,1.191038e+08);
   CutFlow_evt_tagOnly__38->SetBinError(3,1731474);
   CutFlow_evt_tagOnly__38->SetBinError(4,121648.7);
   CutFlow_evt_tagOnly__38->SetBinError(5,102243.7);
   CutFlow_evt_tagOnly__38->SetBinError(6,73715.2);
   CutFlow_evt_tagOnly__38->SetBinError(7,55881.01);
   CutFlow_evt_tagOnly__38->SetBinError(8,27464.48);
   CutFlow_evt_tagOnly__38->SetEntries(6.60584e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagOnly__38->SetLineColor(ci);
   CutFlow_evt_tagOnly__38->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagOnly__38->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagOnly__38->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagOnly__38->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagOnly__38->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_tagOnly__38->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_tagOnly__38->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_tagOnly__38->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_tagOnly__38->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_tagOnly__38->GetXaxis()->SetRange(1,7);
   CutFlow_evt_tagOnly__38->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__38->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__38->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__38->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagOnly__38->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__38->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagOnly__38->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagOnly__38->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagOnly__38->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__38->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__38->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__38->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__38->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_QCD_tagOnly_17->Modified();
   CutFlow_QCD_tagOnly_17->cd();
   CutFlow_QCD_tagOnly_17->SetSelected(CutFlow_QCD_tagOnly_17);
}
