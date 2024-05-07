#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_WJets_tagOnly_18_logY()
{
//=========Macro generated from canvas: CutFlow_WJets_tagOnly_18/CutFlow_WJets_tagOnly_18
//=========  (Mon Apr 22 15:12:12 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_WJets_tagOnly_18 = new TCanvas("CutFlow_WJets_tagOnly_18", "CutFlow_WJets_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_WJets_tagOnly_18->SetHighLightColor(2);
   CutFlow_WJets_tagOnly_18->Range(-1.4,3.366155,7.933333,9.319761);
   CutFlow_WJets_tagOnly_18->SetFillColor(0);
   CutFlow_WJets_tagOnly_18->SetFillStyle(4000);
   CutFlow_WJets_tagOnly_18->SetBorderMode(0);
   CutFlow_WJets_tagOnly_18->SetBorderSize(2);
   CutFlow_WJets_tagOnly_18->SetLogy();
   CutFlow_WJets_tagOnly_18->SetLeftMargin(0.15);
   CutFlow_WJets_tagOnly_18->SetFrameFillStyle(1000);
   CutFlow_WJets_tagOnly_18->SetFrameBorderMode(0);
   CutFlow_WJets_tagOnly_18->SetFrameFillStyle(1000);
   CutFlow_WJets_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagOnly__42 = new TH1D("CutFlow_evt_tagOnly__42","",8,0,8);
   CutFlow_evt_tagOnly__42->SetBinContent(1,2.798024e+08);
   CutFlow_evt_tagOnly__42->SetBinContent(2,2.728909e+08);
   CutFlow_evt_tagOnly__42->SetBinContent(3,1.462762e+07);
   CutFlow_evt_tagOnly__42->SetBinContent(4,56847.4);
   CutFlow_evt_tagOnly__42->SetBinContent(5,44134);
   CutFlow_evt_tagOnly__42->SetBinContent(6,24011.69);
   CutFlow_evt_tagOnly__42->SetBinContent(7,18303.98);
   CutFlow_evt_tagOnly__42->SetBinContent(8,7126.23);
   CutFlow_evt_tagOnly__42->SetBinError(1,43676.24);
   CutFlow_evt_tagOnly__42->SetBinError(2,43601.69);
   CutFlow_evt_tagOnly__42->SetBinError(3,8904.758);
   CutFlow_evt_tagOnly__42->SetBinError(4,322.8161);
   CutFlow_evt_tagOnly__42->SetBinError(5,282.2551);
   CutFlow_evt_tagOnly__42->SetBinError(6,207.2489);
   CutFlow_evt_tagOnly__42->SetBinError(7,179.0834);
   CutFlow_evt_tagOnly__42->SetBinError(8,99.24452);
   CutFlow_evt_tagOnly__42->SetEntries(3.833628e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagOnly__42->SetLineColor(ci);
   CutFlow_evt_tagOnly__42->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagOnly__42->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagOnly__42->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagOnly__42->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagOnly__42->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_tagOnly__42->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_tagOnly__42->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_tagOnly__42->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_tagOnly__42->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_tagOnly__42->GetXaxis()->SetRange(1,7);
   CutFlow_evt_tagOnly__42->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__42->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__42->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__42->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagOnly__42->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__42->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagOnly__42->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagOnly__42->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagOnly__42->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__42->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__42->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__42->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__42->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_WJets_tagOnly_18->Modified();
   CutFlow_WJets_tagOnly_18->cd();
   CutFlow_WJets_tagOnly_18->SetSelected(CutFlow_WJets_tagOnly_18);
}
