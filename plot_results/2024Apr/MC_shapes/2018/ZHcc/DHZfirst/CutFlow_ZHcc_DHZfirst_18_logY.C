#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZHcc_DHZfirst_18_logY()
{
//=========Macro generated from canvas: CutFlow_ZHcc_DHZfirst_18/CutFlow_ZHcc_DHZfirst_18
//=========  (Mon Apr 22 15:12:12 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZHcc_DHZfirst_18 = new TCanvas("CutFlow_ZHcc_DHZfirst_18", "CutFlow_ZHcc_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZHcc_DHZfirst_18->SetHighLightColor(2);
   CutFlow_ZHcc_DHZfirst_18->Range(-1.4,-0.8058067,7.933333,3.824793);
   CutFlow_ZHcc_DHZfirst_18->SetFillColor(0);
   CutFlow_ZHcc_DHZfirst_18->SetFillStyle(4000);
   CutFlow_ZHcc_DHZfirst_18->SetBorderMode(0);
   CutFlow_ZHcc_DHZfirst_18->SetBorderSize(2);
   CutFlow_ZHcc_DHZfirst_18->SetLogy();
   CutFlow_ZHcc_DHZfirst_18->SetLeftMargin(0.15);
   CutFlow_ZHcc_DHZfirst_18->SetFrameFillStyle(1000);
   CutFlow_ZHcc_DHZfirst_18->SetFrameBorderMode(0);
   CutFlow_ZHcc_DHZfirst_18->SetFrameFillStyle(1000);
   CutFlow_ZHcc_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__63 = new TH1D("CutFlow_evt_DHZfirst__63","",8,0,8);
   CutFlow_evt_DHZfirst__63->SetBinContent(1,1213.904);
   CutFlow_evt_DHZfirst__63->SetBinContent(2,1212.577);
   CutFlow_evt_DHZfirst__63->SetBinContent(3,194.8793);
   CutFlow_evt_DHZfirst__63->SetBinContent(4,8.857052);
   CutFlow_evt_DHZfirst__63->SetBinContent(5,3.326406);
   CutFlow_evt_DHZfirst__63->SetBinContent(6,1.586594);
   CutFlow_evt_DHZfirst__63->SetBinContent(7,0.9084129);
   CutFlow_evt_DHZfirst__63->SetBinContent(8,0.5028041);
   CutFlow_evt_DHZfirst__63->SetBinError(1,1.522797);
   CutFlow_evt_DHZfirst__63->SetBinError(2,1.52205);
   CutFlow_evt_DHZfirst__63->SetBinError(3,0.5598215);
   CutFlow_evt_DHZfirst__63->SetBinError(4,0.1157925);
   CutFlow_evt_DHZfirst__63->SetBinError(5,0.07099804);
   CutFlow_evt_DHZfirst__63->SetBinError(6,0.04960055);
   CutFlow_evt_DHZfirst__63->SetBinError(7,0.0380347);
   CutFlow_evt_DHZfirst__63->SetBinError(8,0.02870551);
   CutFlow_evt_DHZfirst__63->SetEntries(2258820);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__63->SetLineColor(ci);
   CutFlow_evt_DHZfirst__63->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__63->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__63->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__63->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__63->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__63->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__63->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__63->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__63->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__63->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__63->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__63->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__63->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__63->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__63->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__63->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__63->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__63->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__63->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__63->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__63->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__63->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__63->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZHcc_DHZfirst_18->Modified();
   CutFlow_ZHcc_DHZfirst_18->cd();
   CutFlow_ZHcc_DHZfirst_18->SetSelected(CutFlow_ZHcc_DHZfirst_18);
}
