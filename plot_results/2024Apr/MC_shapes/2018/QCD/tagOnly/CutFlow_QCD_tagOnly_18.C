#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_QCD_tagOnly_18()
{
//=========Macro generated from canvas: CutFlow_QCD_tagOnly_18/CutFlow_QCD_tagOnly_18
//=========  (Mon Apr 22 15:10:07 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_QCD_tagOnly_18 = new TCanvas("CutFlow_QCD_tagOnly_18", "CutFlow_QCD_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_QCD_tagOnly_18->SetHighLightColor(2);
   CutFlow_QCD_tagOnly_18->Range(-1.4,-2.358102e+11,7.933333,2.122292e+12);
   CutFlow_QCD_tagOnly_18->SetFillColor(0);
   CutFlow_QCD_tagOnly_18->SetFillStyle(4000);
   CutFlow_QCD_tagOnly_18->SetBorderMode(0);
   CutFlow_QCD_tagOnly_18->SetBorderSize(2);
   CutFlow_QCD_tagOnly_18->SetLeftMargin(0.15);
   CutFlow_QCD_tagOnly_18->SetFrameFillStyle(1000);
   CutFlow_QCD_tagOnly_18->SetFrameBorderMode(0);
   CutFlow_QCD_tagOnly_18->SetFrameFillStyle(1000);
   CutFlow_QCD_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagOnly__39 = new TH1D("CutFlow_evt_tagOnly__39","",8,0,8);
   CutFlow_evt_tagOnly__39->SetBinContent(1,1.796649e+12);
   CutFlow_evt_tagOnly__39->SetBinContent(2,1.796542e+12);
   CutFlow_evt_tagOnly__39->SetBinContent(3,3.881443e+09);
   CutFlow_evt_tagOnly__39->SetBinContent(4,1.225219e+07);
   CutFlow_evt_tagOnly__39->SetBinContent(5,1.082824e+07);
   CutFlow_evt_tagOnly__39->SetBinContent(6,7606778);
   CutFlow_evt_tagOnly__39->SetBinContent(7,4708017);
   CutFlow_evt_tagOnly__39->SetBinContent(8,1400081);
   CutFlow_evt_tagOnly__39->SetBinError(1,1.824155e+08);
   CutFlow_evt_tagOnly__39->SetBinError(2,1.824112e+08);
   CutFlow_evt_tagOnly__39->SetBinError(3,2712152);
   CutFlow_evt_tagOnly__39->SetBinError(4,102678.5);
   CutFlow_evt_tagOnly__39->SetBinError(5,85683.91);
   CutFlow_evt_tagOnly__39->SetBinError(6,69459.52);
   CutFlow_evt_tagOnly__39->SetBinError(7,45283.13);
   CutFlow_evt_tagOnly__39->SetBinError(8,18595.26);
   CutFlow_evt_tagOnly__39->SetEntries(6.742881e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagOnly__39->SetLineColor(ci);
   CutFlow_evt_tagOnly__39->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagOnly__39->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagOnly__39->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagOnly__39->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagOnly__39->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_tagOnly__39->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_tagOnly__39->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_tagOnly__39->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_tagOnly__39->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_tagOnly__39->GetXaxis()->SetRange(1,7);
   CutFlow_evt_tagOnly__39->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__39->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__39->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__39->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagOnly__39->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__39->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagOnly__39->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagOnly__39->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagOnly__39->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__39->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__39->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__39->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__39->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_QCD_tagOnly_18->Modified();
   CutFlow_QCD_tagOnly_18->cd();
   CutFlow_QCD_tagOnly_18->SetSelected(CutFlow_QCD_tagOnly_18);
}
