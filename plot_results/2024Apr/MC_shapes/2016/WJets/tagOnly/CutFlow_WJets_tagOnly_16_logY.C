#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_WJets_tagOnly_16_logY()
{
//=========Macro generated from canvas: CutFlow_WJets_tagOnly_16/CutFlow_WJets_tagOnly_16
//=========  (Mon Apr 22 15:12:12 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_WJets_tagOnly_16 = new TCanvas("CutFlow_WJets_tagOnly_16", "CutFlow_WJets_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_WJets_tagOnly_16->SetHighLightColor(2);
   CutFlow_WJets_tagOnly_16->Range(-1.4,3.720256,7.933333,9.034402);
   CutFlow_WJets_tagOnly_16->SetFillColor(0);
   CutFlow_WJets_tagOnly_16->SetFillStyle(4000);
   CutFlow_WJets_tagOnly_16->SetBorderMode(0);
   CutFlow_WJets_tagOnly_16->SetBorderSize(2);
   CutFlow_WJets_tagOnly_16->SetLogy();
   CutFlow_WJets_tagOnly_16->SetLeftMargin(0.15);
   CutFlow_WJets_tagOnly_16->SetFrameFillStyle(1000);
   CutFlow_WJets_tagOnly_16->SetFrameBorderMode(0);
   CutFlow_WJets_tagOnly_16->SetFrameFillStyle(1000);
   CutFlow_WJets_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagOnly__40 = new TH1D("CutFlow_evt_tagOnly__40","",8,0,8);
   CutFlow_evt_tagOnly__40->SetBinContent(1,1.680501e+08);
   CutFlow_evt_tagOnly__40->SetBinContent(2,1.641392e+08);
   CutFlow_evt_tagOnly__40->SetBinContent(3,8804375);
   CutFlow_evt_tagOnly__40->SetBinContent(4,774756.6);
   CutFlow_evt_tagOnly__40->SetBinContent(5,260867.2);
   CutFlow_evt_tagOnly__40->SetBinContent(6,53436.65);
   CutFlow_evt_tagOnly__40->SetBinContent(7,35702.65);
   CutFlow_evt_tagOnly__40->SetBinContent(8,11785.51);
   CutFlow_evt_tagOnly__40->SetBinError(1,25121.55);
   CutFlow_evt_tagOnly__40->SetBinError(2,25063.14);
   CutFlow_evt_tagOnly__40->SetBinError(3,5026.536);
   CutFlow_evt_tagOnly__40->SetBinError(4,1296.242);
   CutFlow_evt_tagOnly__40->SetBinError(5,715.8511);
   CutFlow_evt_tagOnly__40->SetBinError(6,301.5657);
   CutFlow_evt_tagOnly__40->SetBinError(7,239.0215);
   CutFlow_evt_tagOnly__40->SetBinError(8,123.0845);
   CutFlow_evt_tagOnly__40->SetEntries(3.193575e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagOnly__40->SetLineColor(ci);
   CutFlow_evt_tagOnly__40->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagOnly__40->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagOnly__40->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagOnly__40->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagOnly__40->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_tagOnly__40->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_tagOnly__40->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_tagOnly__40->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_tagOnly__40->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_tagOnly__40->GetXaxis()->SetRange(1,7);
   CutFlow_evt_tagOnly__40->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__40->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__40->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__40->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagOnly__40->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__40->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagOnly__40->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagOnly__40->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagOnly__40->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__40->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__40->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__40->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__40->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_WJets_tagOnly_16->Modified();
   CutFlow_WJets_tagOnly_16->cd();
   CutFlow_WJets_tagOnly_16->SetSelected(CutFlow_WJets_tagOnly_16);
}
