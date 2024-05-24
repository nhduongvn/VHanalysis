#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZHcc_tagOnly_18_logY()
{
//=========Macro generated from canvas: CutFlow_ZHcc_tagOnly_18/CutFlow_ZHcc_tagOnly_18
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZHcc_tagOnly_18 = new TCanvas("CutFlow_ZHcc_tagOnly_18", "CutFlow_ZHcc_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZHcc_tagOnly_18->SetHighLightColor(2);
   CutFlow_ZHcc_tagOnly_18->Range(-1.4,0.05505324,7.933333,3.729142);
   CutFlow_ZHcc_tagOnly_18->SetFillColor(0);
   CutFlow_ZHcc_tagOnly_18->SetFillStyle(4000);
   CutFlow_ZHcc_tagOnly_18->SetBorderMode(0);
   CutFlow_ZHcc_tagOnly_18->SetBorderSize(2);
   CutFlow_ZHcc_tagOnly_18->SetLogy();
   CutFlow_ZHcc_tagOnly_18->SetLeftMargin(0.15);
   CutFlow_ZHcc_tagOnly_18->SetFrameFillStyle(1000);
   CutFlow_ZHcc_tagOnly_18->SetFrameBorderMode(0);
   CutFlow_ZHcc_tagOnly_18->SetFrameFillStyle(1000);
   CutFlow_ZHcc_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagOnly__33 = new TH1D("CutFlow_evt_tagOnly__33","",8,0,8);
   CutFlow_evt_tagOnly__33->SetBinContent(1,1213.904);
   CutFlow_evt_tagOnly__33->SetBinContent(2,1212.577);
   CutFlow_evt_tagOnly__33->SetBinContent(3,194.8793);
   CutFlow_evt_tagOnly__33->SetBinContent(4,8.857052);
   CutFlow_evt_tagOnly__33->SetBinContent(5,8.180523);
   CutFlow_evt_tagOnly__33->SetBinContent(6,6.106121);
   CutFlow_evt_tagOnly__33->SetBinContent(7,5.290445);
   CutFlow_evt_tagOnly__33->SetBinContent(8,2.926718);
   CutFlow_evt_tagOnly__33->SetBinError(1,1.522797);
   CutFlow_evt_tagOnly__33->SetBinError(2,1.52205);
   CutFlow_evt_tagOnly__33->SetBinError(3,0.5598215);
   CutFlow_evt_tagOnly__33->SetBinError(4,0.1157925);
   CutFlow_evt_tagOnly__33->SetBinError(5,0.1112617);
   CutFlow_evt_tagOnly__33->SetBinError(6,0.0959026);
   CutFlow_evt_tagOnly__33->SetBinError(7,0.08918869);
   CutFlow_evt_tagOnly__33->SetBinError(8,0.06642314);
   CutFlow_evt_tagOnly__33->SetEntries(2282597);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagOnly__33->SetLineColor(ci);
   CutFlow_evt_tagOnly__33->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagOnly__33->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagOnly__33->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagOnly__33->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagOnly__33->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_tagOnly__33->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_tagOnly__33->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_tagOnly__33->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_tagOnly__33->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_tagOnly__33->GetXaxis()->SetRange(1,7);
   CutFlow_evt_tagOnly__33->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__33->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__33->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__33->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagOnly__33->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__33->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagOnly__33->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagOnly__33->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagOnly__33->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__33->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__33->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__33->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__33->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZHcc_tagOnly_18->Modified();
   CutFlow_ZHcc_tagOnly_18->cd();
   CutFlow_ZHcc_tagOnly_18->SetSelected(CutFlow_ZHcc_tagOnly_18);
}
