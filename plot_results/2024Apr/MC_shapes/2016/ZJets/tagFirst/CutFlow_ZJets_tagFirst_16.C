#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZJets_tagFirst_16()
{
//=========Macro generated from canvas: CutFlow_ZJets_tagFirst_16/CutFlow_ZJets_tagFirst_16
//=========  (Mon Apr 22 15:10:07 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZJets_tagFirst_16 = new TCanvas("CutFlow_ZJets_tagFirst_16", "CutFlow_ZJets_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZJets_tagFirst_16->SetHighLightColor(2);
   CutFlow_ZJets_tagFirst_16->Range(-1.2,-5443751,6.8,4.899376e+07);
   CutFlow_ZJets_tagFirst_16->SetFillColor(0);
   CutFlow_ZJets_tagFirst_16->SetFillStyle(4000);
   CutFlow_ZJets_tagFirst_16->SetBorderMode(0);
   CutFlow_ZJets_tagFirst_16->SetBorderSize(2);
   CutFlow_ZJets_tagFirst_16->SetLeftMargin(0.15);
   CutFlow_ZJets_tagFirst_16->SetFrameFillStyle(1000);
   CutFlow_ZJets_tagFirst_16->SetFrameBorderMode(0);
   CutFlow_ZJets_tagFirst_16->SetFrameFillStyle(1000);
   CutFlow_ZJets_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__13 = new TH1D("CutFlow_evt_tagFirst__13","",5,0,5);
   CutFlow_evt_tagFirst__13->SetBinContent(1,4.14762e+07);
   CutFlow_evt_tagFirst__13->SetBinContent(2,4.145527e+07);
   CutFlow_evt_tagFirst__13->SetBinContent(3,3097071);
   CutFlow_evt_tagFirst__13->SetBinContent(4,403656.1);
   CutFlow_evt_tagFirst__13->SetBinContent(5,20947.15);
   CutFlow_evt_tagFirst__13->SetBinError(1,9879.745);
   CutFlow_evt_tagFirst__13->SetBinError(2,9879.367);
   CutFlow_evt_tagFirst__13->SetBinError(3,1903.715);
   CutFlow_evt_tagFirst__13->SetBinError(4,564.86);
   CutFlow_evt_tagFirst__13->SetBinError(5,108.1296);
   CutFlow_evt_tagFirst__13->SetEntries(1.124707e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__13->SetLineColor(ci);
   CutFlow_evt_tagFirst__13->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__13->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__13->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__13->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__13->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__13->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__13->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__13->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__13->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__13->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__13->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__13->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__13->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__13->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__13->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__13->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__13->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__13->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__13->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__13->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZJets_tagFirst_16->Modified();
   CutFlow_ZJets_tagFirst_16->cd();
   CutFlow_ZJets_tagFirst_16->SetSelected(CutFlow_ZJets_tagFirst_16);
}
