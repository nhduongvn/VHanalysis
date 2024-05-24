#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_QCD_DHZfirst_17_logY()
{
//=========Macro generated from canvas: CutFlow_QCD_DHZfirst_17/CutFlow_QCD_DHZfirst_17
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_QCD_DHZfirst_17 = new TCanvas("CutFlow_QCD_DHZfirst_17", "CutFlow_QCD_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_QCD_DHZfirst_17->SetHighLightColor(2);
   CutFlow_QCD_DHZfirst_17->Range(-1.4,4.545839,7.933333,13.18515);
   CutFlow_QCD_DHZfirst_17->SetFillColor(0);
   CutFlow_QCD_DHZfirst_17->SetFillStyle(4000);
   CutFlow_QCD_DHZfirst_17->SetBorderMode(0);
   CutFlow_QCD_DHZfirst_17->SetBorderSize(2);
   CutFlow_QCD_DHZfirst_17->SetLogy();
   CutFlow_QCD_DHZfirst_17->SetLeftMargin(0.15);
   CutFlow_QCD_DHZfirst_17->SetFrameFillStyle(1000);
   CutFlow_QCD_DHZfirst_17->SetFrameBorderMode(0);
   CutFlow_QCD_DHZfirst_17->SetFrameFillStyle(1000);
   CutFlow_QCD_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__68 = new TH1D("CutFlow_evt_DHZfirst__68","",8,0,8);
   CutFlow_evt_DHZfirst__68->SetBinContent(1,1.105792e+12);
   CutFlow_evt_DHZfirst__68->SetBinContent(2,1.10569e+12);
   CutFlow_evt_DHZfirst__68->SetBinContent(3,2.404051e+09);
   CutFlow_evt_DHZfirst__68->SetBinContent(4,1.431858e+07);
   CutFlow_evt_DHZfirst__68->SetBinContent(5,4567561);
   CutFlow_evt_DHZfirst__68->SetBinContent(6,1641187);
   CutFlow_evt_DHZfirst__68->SetBinContent(7,513807.5);
   CutFlow_evt_DHZfirst__68->SetBinContent(8,140169.6);
   CutFlow_evt_DHZfirst__68->SetBinError(1,1.187731e+08);
   CutFlow_evt_DHZfirst__68->SetBinError(2,1.187684e+08);
   CutFlow_evt_DHZfirst__68->SetBinError(3,1723109);
   CutFlow_evt_DHZfirst__68->SetBinError(4,117052.5);
   CutFlow_evt_DHZfirst__68->SetBinError(5,68562.38);
   CutFlow_evt_DHZfirst__68->SetBinError(6,41995.54);
   CutFlow_evt_DHZfirst__68->SetBinError(7,16366.04);
   CutFlow_evt_DHZfirst__68->SetBinError(8,4845.083);
   CutFlow_evt_DHZfirst__68->SetEntries(6.756588e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__68->SetLineColor(ci);
   CutFlow_evt_DHZfirst__68->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__68->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__68->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__68->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__68->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__68->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__68->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__68->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__68->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__68->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__68->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__68->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__68->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__68->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__68->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__68->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__68->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__68->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__68->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__68->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__68->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__68->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__68->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_QCD_DHZfirst_17->Modified();
   CutFlow_QCD_DHZfirst_17->cd();
   CutFlow_QCD_DHZfirst_17->SetSelected(CutFlow_QCD_DHZfirst_17);
}
