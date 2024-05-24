#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZZ_DHZfirst_17_logY()
{
//=========Macro generated from canvas: CutFlow_ZZ_DHZfirst_17/CutFlow_ZZ_DHZfirst_17
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZZ_DHZfirst_17 = new TCanvas("CutFlow_ZZ_DHZfirst_17", "CutFlow_ZZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZZ_DHZfirst_17->SetHighLightColor(2);
   CutFlow_ZZ_DHZfirst_17->Range(-1.4,0.8037837,7.933333,6.644347);
   CutFlow_ZZ_DHZfirst_17->SetFillColor(0);
   CutFlow_ZZ_DHZfirst_17->SetFillStyle(4000);
   CutFlow_ZZ_DHZfirst_17->SetBorderMode(0);
   CutFlow_ZZ_DHZfirst_17->SetBorderSize(2);
   CutFlow_ZZ_DHZfirst_17->SetLogy();
   CutFlow_ZZ_DHZfirst_17->SetLeftMargin(0.15);
   CutFlow_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   CutFlow_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   CutFlow_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   CutFlow_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__89 = new TH1D("CutFlow_evt_DHZfirst__89","",8,0,8);
   CutFlow_evt_DHZfirst__89->SetBinContent(1,606375);
   CutFlow_evt_DHZfirst__89->SetBinContent(2,590445.2);
   CutFlow_evt_DHZfirst__89->SetBinContent(3,15527.55);
   CutFlow_evt_DHZfirst__89->SetBinContent(4,516.5168);
   CutFlow_evt_DHZfirst__89->SetBinContent(5,258.8186);
   CutFlow_evt_DHZfirst__89->SetBinContent(6,140.5015);
   CutFlow_evt_DHZfirst__89->SetBinContent(7,48.85061);
   CutFlow_evt_DHZfirst__89->SetBinContent(8,18.59909);
   CutFlow_evt_DHZfirst__89->SetBinError(1,368.6187);
   CutFlow_evt_DHZfirst__89->SetBinError(2,363.7446);
   CutFlow_evt_DHZfirst__89->SetBinError(3,58.98725);
   CutFlow_evt_DHZfirst__89->SetBinError(4,10.75843);
   CutFlow_evt_DHZfirst__89->SetBinError(5,7.615606);
   CutFlow_evt_DHZfirst__89->SetBinError(6,5.61109);
   CutFlow_evt_DHZfirst__89->SetBinError(7,3.308581);
   CutFlow_evt_DHZfirst__89->SetBinError(8,2.041515);
   CutFlow_evt_DHZfirst__89->SetEntries(5414593);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__89->SetLineColor(ci);
   CutFlow_evt_DHZfirst__89->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__89->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__89->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__89->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__89->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__89->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__89->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__89->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__89->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__89->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__89->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__89->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__89->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__89->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__89->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__89->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__89->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__89->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__89->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__89->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__89->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__89->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__89->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZZ_DHZfirst_17->Modified();
   CutFlow_ZZ_DHZfirst_17->cd();
   CutFlow_ZZ_DHZfirst_17->SetSelected(CutFlow_ZZ_DHZfirst_17);
}
