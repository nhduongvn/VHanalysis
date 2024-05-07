#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_WJets_tagFirst_17_logY()
{
//=========Macro generated from canvas: CutFlow_WJets_tagFirst_17/CutFlow_WJets_tagFirst_17
//=========  (Mon Apr 22 15:12:11 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_WJets_tagFirst_17 = new TCanvas("CutFlow_WJets_tagFirst_17", "CutFlow_WJets_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_WJets_tagFirst_17->SetHighLightColor(2);
   CutFlow_WJets_tagFirst_17->Range(-1.2,2.842734,6.8,9.143708);
   CutFlow_WJets_tagFirst_17->SetFillColor(0);
   CutFlow_WJets_tagFirst_17->SetFillStyle(4000);
   CutFlow_WJets_tagFirst_17->SetBorderMode(0);
   CutFlow_WJets_tagFirst_17->SetBorderSize(2);
   CutFlow_WJets_tagFirst_17->SetLogy();
   CutFlow_WJets_tagFirst_17->SetLeftMargin(0.15);
   CutFlow_WJets_tagFirst_17->SetFrameFillStyle(1000);
   CutFlow_WJets_tagFirst_17->SetFrameBorderMode(0);
   CutFlow_WJets_tagFirst_17->SetFrameFillStyle(1000);
   CutFlow_WJets_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__11 = new TH1D("CutFlow_evt_tagFirst__11","",5,0,5);
   CutFlow_evt_tagFirst__11->SetBinContent(1,1.722113e+08);
   CutFlow_evt_tagFirst__11->SetBinContent(2,1.679288e+08);
   CutFlow_evt_tagFirst__11->SetBinContent(3,9022090);
   CutFlow_evt_tagFirst__11->SetBinContent(4,64640.28);
   CutFlow_evt_tagFirst__11->SetBinContent(5,5941.025);
   CutFlow_evt_tagFirst__11->SetBinError(1,24833.11);
   CutFlow_evt_tagFirst__11->SetBinError(2,24776.19);
   CutFlow_evt_tagFirst__11->SetBinError(3,5017.899);
   CutFlow_evt_tagFirst__11->SetBinError(4,288.4105);
   CutFlow_evt_tagFirst__11->SetBinError(5,77.47924);
   CutFlow_evt_tagFirst__11->SetEntries(3.4044e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__11->SetLineColor(ci);
   CutFlow_evt_tagFirst__11->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__11->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__11->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__11->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__11->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__11->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__11->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__11->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__11->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__11->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__11->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__11->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__11->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__11->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__11->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__11->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__11->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__11->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__11->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__11->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_WJets_tagFirst_17->Modified();
   CutFlow_WJets_tagFirst_17->cd();
   CutFlow_WJets_tagFirst_17->SetSelected(CutFlow_WJets_tagFirst_17);
}
