#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZJets_tagOnly_18_logY()
{
//=========Macro generated from canvas: CutFlow_ZJets_tagOnly_18/CutFlow_ZJets_tagOnly_18
//=========  (Thu May 23 15:31:43 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZJets_tagOnly_18 = new TCanvas("CutFlow_ZJets_tagOnly_18", "CutFlow_ZJets_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZJets_tagOnly_18->SetHighLightColor(2);
   CutFlow_ZJets_tagOnly_18->Range(-1.4,3.779658,7.933333,8.598661);
   CutFlow_ZJets_tagOnly_18->SetFillColor(0);
   CutFlow_ZJets_tagOnly_18->SetFillStyle(4000);
   CutFlow_ZJets_tagOnly_18->SetBorderMode(0);
   CutFlow_ZJets_tagOnly_18->SetBorderSize(2);
   CutFlow_ZJets_tagOnly_18->SetLogy();
   CutFlow_ZJets_tagOnly_18->SetLeftMargin(0.15);
   CutFlow_ZJets_tagOnly_18->SetFrameFillStyle(1000);
   CutFlow_ZJets_tagOnly_18->SetFrameBorderMode(0);
   CutFlow_ZJets_tagOnly_18->SetFrameFillStyle(1000);
   CutFlow_ZJets_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagOnly__45 = new TH1D("CutFlow_evt_tagOnly__45","",8,0,8);
   CutFlow_evt_tagOnly__45->SetBinContent(1,6.90576e+07);
   CutFlow_evt_tagOnly__45->SetBinContent(2,6.900853e+07);
   CutFlow_evt_tagOnly__45->SetBinContent(3,5159935);
   CutFlow_evt_tagOnly__45->SetBinContent(4,80388.58);
   CutFlow_evt_tagOnly__45->SetBinContent(5,75463.82);
   CutFlow_evt_tagOnly__45->SetBinContent(6,57944.95);
   CutFlow_evt_tagOnly__45->SetBinContent(7,36524.84);
   CutFlow_evt_tagOnly__45->SetBinContent(8,13609.48);
   CutFlow_evt_tagOnly__45->SetBinError(1,15562.92);
   CutFlow_evt_tagOnly__45->SetBinError(2,15561.42);
   CutFlow_evt_tagOnly__45->SetBinError(3,3027.834);
   CutFlow_evt_tagOnly__45->SetBinError(4,200.2639);
   CutFlow_evt_tagOnly__45->SetBinError(5,194.4479);
   CutFlow_evt_tagOnly__45->SetBinError(6,170.5706);
   CutFlow_evt_tagOnly__45->SetBinError(7,133.3902);
   CutFlow_evt_tagOnly__45->SetBinError(8,76.59386);
   CutFlow_evt_tagOnly__45->SetEntries(1.184499e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagOnly__45->SetLineColor(ci);
   CutFlow_evt_tagOnly__45->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagOnly__45->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagOnly__45->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagOnly__45->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagOnly__45->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_tagOnly__45->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_tagOnly__45->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_tagOnly__45->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_tagOnly__45->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_tagOnly__45->GetXaxis()->SetRange(1,7);
   CutFlow_evt_tagOnly__45->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__45->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__45->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__45->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagOnly__45->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__45->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagOnly__45->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagOnly__45->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagOnly__45->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__45->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__45->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__45->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__45->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZJets_tagOnly_18->Modified();
   CutFlow_ZJets_tagOnly_18->cd();
   CutFlow_ZJets_tagOnly_18->SetSelected(CutFlow_ZJets_tagOnly_18);
}
