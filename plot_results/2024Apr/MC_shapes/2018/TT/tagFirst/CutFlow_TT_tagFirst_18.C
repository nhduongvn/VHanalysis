#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_TT_tagFirst_18()
{
//=========Macro generated from canvas: CutFlow_TT_tagFirst_18/CutFlow_TT_tagFirst_18
//=========  (Mon Apr 22 15:10:07 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_TT_tagFirst_18 = new TCanvas("CutFlow_TT_tagFirst_18", "CutFlow_TT_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_TT_tagFirst_18->SetHighLightColor(2);
   CutFlow_TT_tagFirst_18->Range(-1.2,-6533890,6.8,5.880501e+07);
   CutFlow_TT_tagFirst_18->SetFillColor(0);
   CutFlow_TT_tagFirst_18->SetFillStyle(4000);
   CutFlow_TT_tagFirst_18->SetBorderMode(0);
   CutFlow_TT_tagFirst_18->SetBorderSize(2);
   CutFlow_TT_tagFirst_18->SetLeftMargin(0.15);
   CutFlow_TT_tagFirst_18->SetFrameFillStyle(1000);
   CutFlow_TT_tagFirst_18->SetFrameBorderMode(0);
   CutFlow_TT_tagFirst_18->SetFrameFillStyle(1000);
   CutFlow_TT_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__18 = new TH1D("CutFlow_evt_tagFirst__18","",5,0,5);
   CutFlow_evt_tagFirst__18->SetBinContent(1,4.978202e+07);
   CutFlow_evt_tagFirst__18->SetBinContent(2,4.721097e+07);
   CutFlow_evt_tagFirst__18->SetBinContent(3,1.515959e+07);
   CutFlow_evt_tagFirst__18->SetBinContent(4,1284753);
   CutFlow_evt_tagFirst__18->SetBinContent(5,369038.9);
   CutFlow_evt_tagFirst__18->SetBinError(1,1697.976);
   CutFlow_evt_tagFirst__18->SetBinError(2,1662.44);
   CutFlow_evt_tagFirst__18->SetBinError(3,988.5159);
   CutFlow_evt_tagFirst__18->SetBinError(4,288.3615);
   CutFlow_evt_tagFirst__18->SetBinError(5,155.9315);
   CutFlow_evt_tagFirst__18->SetEntries(2.026989e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__18->SetLineColor(ci);
   CutFlow_evt_tagFirst__18->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__18->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__18->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__18->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__18->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__18->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__18->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__18->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__18->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__18->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__18->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__18->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__18->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__18->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__18->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__18->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__18->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__18->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__18->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__18->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_TT_tagFirst_18->Modified();
   CutFlow_TT_tagFirst_18->cd();
   CutFlow_TT_tagFirst_18->SetSelected(CutFlow_TT_tagFirst_18);
}
