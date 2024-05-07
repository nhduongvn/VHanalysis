#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_WJets_tagFirst_16_logY()
{
//=========Macro generated from canvas: CutFlow_WJets_tagFirst_16/CutFlow_WJets_tagFirst_16
//=========  (Mon Apr 22 15:12:11 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_WJets_tagFirst_16 = new TCanvas("CutFlow_WJets_tagFirst_16", "CutFlow_WJets_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_WJets_tagFirst_16->SetHighLightColor(2);
   CutFlow_WJets_tagFirst_16->Range(-1.2,3.18915,6.8,9.093414);
   CutFlow_WJets_tagFirst_16->SetFillColor(0);
   CutFlow_WJets_tagFirst_16->SetFillStyle(4000);
   CutFlow_WJets_tagFirst_16->SetBorderMode(0);
   CutFlow_WJets_tagFirst_16->SetBorderSize(2);
   CutFlow_WJets_tagFirst_16->SetLogy();
   CutFlow_WJets_tagFirst_16->SetLeftMargin(0.15);
   CutFlow_WJets_tagFirst_16->SetFrameFillStyle(1000);
   CutFlow_WJets_tagFirst_16->SetFrameBorderMode(0);
   CutFlow_WJets_tagFirst_16->SetFrameFillStyle(1000);
   CutFlow_WJets_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__10 = new TH1D("CutFlow_evt_tagFirst__10","",5,0,5);
   CutFlow_evt_tagFirst__10->SetBinContent(1,1.680501e+08);
   CutFlow_evt_tagFirst__10->SetBinContent(2,1.641392e+08);
   CutFlow_evt_tagFirst__10->SetBinContent(3,8804375);
   CutFlow_evt_tagFirst__10->SetBinContent(4,774756.6);
   CutFlow_evt_tagFirst__10->SetBinContent(5,12039.45);
   CutFlow_evt_tagFirst__10->SetBinError(1,25121.55);
   CutFlow_evt_tagFirst__10->SetBinError(2,25063.14);
   CutFlow_evt_tagFirst__10->SetBinError(3,5026.536);
   CutFlow_evt_tagFirst__10->SetBinError(4,1296.242);
   CutFlow_evt_tagFirst__10->SetBinError(5,123.5498);
   CutFlow_evt_tagFirst__10->SetEntries(3.172588e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__10->SetLineColor(ci);
   CutFlow_evt_tagFirst__10->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__10->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__10->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__10->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__10->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__10->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__10->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__10->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__10->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__10->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__10->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__10->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__10->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__10->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__10->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__10->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__10->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__10->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__10->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__10->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_WJets_tagFirst_16->Modified();
   CutFlow_WJets_tagFirst_16->cd();
   CutFlow_WJets_tagFirst_16->SetSelected(CutFlow_WJets_tagFirst_16);
}
