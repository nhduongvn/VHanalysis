#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_WJets_tagFirst_18()
{
//=========Macro generated from canvas: CutFlow_WJets_tagFirst_18/CutFlow_WJets_tagFirst_18
//=========  (Mon Apr 22 15:10:07 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_WJets_tagFirst_18 = new TCanvas("CutFlow_WJets_tagFirst_18", "CutFlow_WJets_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_WJets_tagFirst_18->SetHighLightColor(2);
   CutFlow_WJets_tagFirst_18->Range(-1.2,-3.672407e+07,6.8,3.305166e+08);
   CutFlow_WJets_tagFirst_18->SetFillColor(0);
   CutFlow_WJets_tagFirst_18->SetFillStyle(4000);
   CutFlow_WJets_tagFirst_18->SetBorderMode(0);
   CutFlow_WJets_tagFirst_18->SetBorderSize(2);
   CutFlow_WJets_tagFirst_18->SetLeftMargin(0.15);
   CutFlow_WJets_tagFirst_18->SetFrameFillStyle(1000);
   CutFlow_WJets_tagFirst_18->SetFrameBorderMode(0);
   CutFlow_WJets_tagFirst_18->SetFrameFillStyle(1000);
   CutFlow_WJets_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__12 = new TH1D("CutFlow_evt_tagFirst__12","",5,0,5);
   CutFlow_evt_tagFirst__12->SetBinContent(1,2.798024e+08);
   CutFlow_evt_tagFirst__12->SetBinContent(2,2.728909e+08);
   CutFlow_evt_tagFirst__12->SetBinContent(3,1.462762e+07);
   CutFlow_evt_tagFirst__12->SetBinContent(4,56847.4);
   CutFlow_evt_tagFirst__12->SetBinContent(5,7425.445);
   CutFlow_evt_tagFirst__12->SetBinError(1,43676.24);
   CutFlow_evt_tagFirst__12->SetBinError(2,43601.69);
   CutFlow_evt_tagFirst__12->SetBinError(3,8904.758);
   CutFlow_evt_tagFirst__12->SetBinError(4,322.8161);
   CutFlow_evt_tagFirst__12->SetBinError(5,100.7428);
   CutFlow_evt_tagFirst__12->SetEntries(3.829682e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__12->SetLineColor(ci);
   CutFlow_evt_tagFirst__12->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__12->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__12->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__12->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__12->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__12->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__12->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__12->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__12->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__12->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__12->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__12->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__12->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__12->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__12->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__12->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__12->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__12->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__12->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__12->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_WJets_tagFirst_18->Modified();
   CutFlow_WJets_tagFirst_18->cd();
   CutFlow_WJets_tagFirst_18->SetSelected(CutFlow_WJets_tagFirst_18);
}
