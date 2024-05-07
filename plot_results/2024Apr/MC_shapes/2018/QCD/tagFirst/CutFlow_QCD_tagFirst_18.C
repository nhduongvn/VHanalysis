#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_QCD_tagFirst_18()
{
//=========Macro generated from canvas: CutFlow_QCD_tagFirst_18/CutFlow_QCD_tagFirst_18
//=========  (Mon Apr 22 15:10:07 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_QCD_tagFirst_18 = new TCanvas("CutFlow_QCD_tagFirst_18", "CutFlow_QCD_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_QCD_tagFirst_18->SetHighLightColor(2);
   CutFlow_QCD_tagFirst_18->Range(-1.2,-2.358102e+11,6.8,2.122292e+12);
   CutFlow_QCD_tagFirst_18->SetFillColor(0);
   CutFlow_QCD_tagFirst_18->SetFillStyle(4000);
   CutFlow_QCD_tagFirst_18->SetBorderMode(0);
   CutFlow_QCD_tagFirst_18->SetBorderSize(2);
   CutFlow_QCD_tagFirst_18->SetLeftMargin(0.15);
   CutFlow_QCD_tagFirst_18->SetFrameFillStyle(1000);
   CutFlow_QCD_tagFirst_18->SetFrameBorderMode(0);
   CutFlow_QCD_tagFirst_18->SetFrameFillStyle(1000);
   CutFlow_QCD_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__9 = new TH1D("CutFlow_evt_tagFirst__9","",5,0,5);
   CutFlow_evt_tagFirst__9->SetBinContent(1,1.796649e+12);
   CutFlow_evt_tagFirst__9->SetBinContent(2,1.796542e+12);
   CutFlow_evt_tagFirst__9->SetBinContent(3,3.881443e+09);
   CutFlow_evt_tagFirst__9->SetBinContent(4,1.225219e+07);
   CutFlow_evt_tagFirst__9->SetBinContent(5,1476600);
   CutFlow_evt_tagFirst__9->SetBinError(1,1.824155e+08);
   CutFlow_evt_tagFirst__9->SetBinError(2,1.824112e+08);
   CutFlow_evt_tagFirst__9->SetBinError(3,2712152);
   CutFlow_evt_tagFirst__9->SetBinError(4,102678.5);
   CutFlow_evt_tagFirst__9->SetBinError(5,18974.77);
   CutFlow_evt_tagFirst__9->SetEntries(6.733122e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__9->SetLineColor(ci);
   CutFlow_evt_tagFirst__9->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__9->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__9->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__9->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__9->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__9->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__9->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__9->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__9->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__9->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__9->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__9->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__9->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__9->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__9->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__9->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__9->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__9->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__9->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__9->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_QCD_tagFirst_18->Modified();
   CutFlow_QCD_tagFirst_18->cd();
   CutFlow_QCD_tagFirst_18->SetSelected(CutFlow_QCD_tagFirst_18);
}
