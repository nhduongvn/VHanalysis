#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZHbb_DHZfirst_18_logY()
{
//=========Macro generated from canvas: CutFlow_ZHbb_DHZfirst_18/CutFlow_ZHbb_DHZfirst_18
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZHbb_DHZfirst_18 = new TCanvas("CutFlow_ZHbb_DHZfirst_18", "CutFlow_ZHbb_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZHbb_DHZfirst_18->SetHighLightColor(2);
   CutFlow_ZHbb_DHZfirst_18->Range(-1.4,1.153951,7.933333,5.05586);
   CutFlow_ZHbb_DHZfirst_18->SetFillColor(0);
   CutFlow_ZHbb_DHZfirst_18->SetFillStyle(4000);
   CutFlow_ZHbb_DHZfirst_18->SetBorderMode(0);
   CutFlow_ZHbb_DHZfirst_18->SetBorderSize(2);
   CutFlow_ZHbb_DHZfirst_18->SetLogy();
   CutFlow_ZHbb_DHZfirst_18->SetLeftMargin(0.15);
   CutFlow_ZHbb_DHZfirst_18->SetFrameFillStyle(1000);
   CutFlow_ZHbb_DHZfirst_18->SetFrameBorderMode(0);
   CutFlow_ZHbb_DHZfirst_18->SetFrameFillStyle(1000);
   CutFlow_ZHbb_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__66 = new TH1D("CutFlow_evt_DHZfirst__66","",8,0,8);
   CutFlow_evt_DHZfirst__66->SetBinContent(1,24441.09);
   CutFlow_evt_DHZfirst__66->SetBinContent(2,24393.05);
   CutFlow_evt_DHZfirst__66->SetBinContent(3,3668.176);
   CutFlow_evt_DHZfirst__66->SetBinContent(4,795.1078);
   CutFlow_evt_DHZfirst__66->SetBinContent(5,409.6635);
   CutFlow_evt_DHZfirst__66->SetBinContent(6,224.2918);
   CutFlow_evt_DHZfirst__66->SetBinContent(7,70.01196);
   CutFlow_evt_DHZfirst__66->SetBinContent(8,23.44134);
   CutFlow_evt_DHZfirst__66->SetBinError(1,6.922378);
   CutFlow_evt_DHZfirst__66->SetBinError(2,6.916404);
   CutFlow_evt_DHZfirst__66->SetBinError(3,2.488204);
   CutFlow_evt_DHZfirst__66->SetBinError(4,0.9919419);
   CutFlow_evt_DHZfirst__66->SetBinError(5,0.7426923);
   CutFlow_evt_DHZfirst__66->SetBinError(6,0.5681749);
   CutFlow_evt_DHZfirst__66->SetBinError(7,0.3151786);
   CutFlow_evt_DHZfirst__66->SetBinError(8,0.1837483);
   CutFlow_evt_DHZfirst__66->SetEntries(3.441596e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__66->SetLineColor(ci);
   CutFlow_evt_DHZfirst__66->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__66->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__66->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__66->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__66->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__66->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__66->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__66->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__66->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__66->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__66->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__66->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__66->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__66->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__66->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__66->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__66->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__66->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__66->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__66->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__66->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__66->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__66->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZHbb_DHZfirst_18->Modified();
   CutFlow_ZHbb_DHZfirst_18->cd();
   CutFlow_ZHbb_DHZfirst_18->SetSelected(CutFlow_ZHbb_DHZfirst_18);
}
