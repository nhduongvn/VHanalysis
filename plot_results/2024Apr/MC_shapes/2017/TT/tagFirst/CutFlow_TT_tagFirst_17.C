#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_TT_tagFirst_17()
{
//=========Macro generated from canvas: CutFlow_TT_tagFirst_17/CutFlow_TT_tagFirst_17
//=========  (Mon Apr 22 15:10:07 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_TT_tagFirst_17 = new TCanvas("CutFlow_TT_tagFirst_17", "CutFlow_TT_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_TT_tagFirst_17->SetHighLightColor(2);
   CutFlow_TT_tagFirst_17->Range(-1.2,-4021445,6.8,3.6193e+07);
   CutFlow_TT_tagFirst_17->SetFillColor(0);
   CutFlow_TT_tagFirst_17->SetFillStyle(4000);
   CutFlow_TT_tagFirst_17->SetBorderMode(0);
   CutFlow_TT_tagFirst_17->SetBorderSize(2);
   CutFlow_TT_tagFirst_17->SetLeftMargin(0.15);
   CutFlow_TT_tagFirst_17->SetFrameFillStyle(1000);
   CutFlow_TT_tagFirst_17->SetFrameBorderMode(0);
   CutFlow_TT_tagFirst_17->SetFrameFillStyle(1000);
   CutFlow_TT_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__17 = new TH1D("CutFlow_evt_tagFirst__17","",5,0,5);
   CutFlow_evt_tagFirst__17->SetBinContent(1,3.063958e+07);
   CutFlow_evt_tagFirst__17->SetBinContent(2,2.905104e+07);
   CutFlow_evt_tagFirst__17->SetBinContent(3,9323286);
   CutFlow_evt_tagFirst__17->SetBinContent(4,975710.2);
   CutFlow_evt_tagFirst__17->SetBinContent(5,269647.8);
   CutFlow_evt_tagFirst__17->SetBinError(1,1223.206);
   CutFlow_evt_tagFirst__17->SetBinError(2,1197.997);
   CutFlow_evt_tagFirst__17->SetBinError(3,714.4529);
   CutFlow_evt_tagFirst__17->SetBinError(4,232.3916);
   CutFlow_evt_tagFirst__17->SetBinError(5,123.1426);
   CutFlow_evt_tagFirst__17->SetEntries(1.491769e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__17->SetLineColor(ci);
   CutFlow_evt_tagFirst__17->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__17->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__17->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__17->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__17->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__17->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__17->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__17->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__17->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__17->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__17->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__17->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__17->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__17->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__17->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__17->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__17->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__17->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__17->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__17->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_TT_tagFirst_17->Modified();
   CutFlow_TT_tagFirst_17->cd();
   CutFlow_TT_tagFirst_17->SetSelected(CutFlow_TT_tagFirst_17);
}
