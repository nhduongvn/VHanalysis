#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZZ_tagFirst_16()
{
//=========Macro generated from canvas: CutFlow_ZZ_tagFirst_16/CutFlow_ZZ_tagFirst_16
//=========  (Mon Apr 22 15:10:07 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZZ_tagFirst_16 = new TCanvas("CutFlow_ZZ_tagFirst_16", "CutFlow_ZZ_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZZ_tagFirst_16->SetHighLightColor(2);
   CutFlow_ZZ_tagFirst_16->Range(-1.2,-77663.65,6.8,698972.8);
   CutFlow_ZZ_tagFirst_16->SetFillColor(0);
   CutFlow_ZZ_tagFirst_16->SetFillStyle(4000);
   CutFlow_ZZ_tagFirst_16->SetBorderMode(0);
   CutFlow_ZZ_tagFirst_16->SetBorderSize(2);
   CutFlow_ZZ_tagFirst_16->SetLeftMargin(0.15);
   CutFlow_ZZ_tagFirst_16->SetFrameFillStyle(1000);
   CutFlow_ZZ_tagFirst_16->SetFrameBorderMode(0);
   CutFlow_ZZ_tagFirst_16->SetFrameFillStyle(1000);
   CutFlow_ZZ_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__28 = new TH1D("CutFlow_evt_tagFirst__28","",5,0,5);
   CutFlow_evt_tagFirst__28->SetBinContent(1,591723);
   CutFlow_evt_tagFirst__28->SetBinContent(2,576919.5);
   CutFlow_evt_tagFirst__28->SetBinContent(3,14992.5);
   CutFlow_evt_tagFirst__28->SetBinContent(4,2397.536);
   CutFlow_evt_tagFirst__28->SetBinContent(5,211.1038);
   CutFlow_evt_tagFirst__28->SetBinError(1,379.3564);
   CutFlow_evt_tagFirst__28->SetBinError(2,374.581);
   CutFlow_evt_tagFirst__28->SetBinError(3,60.38447);
   CutFlow_evt_tagFirst__28->SetBinError(4,24.14742);
   CutFlow_evt_tagFirst__28->SetBinError(5,7.16533);
   CutFlow_evt_tagFirst__28->SetEntries(4877503);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__28->SetLineColor(ci);
   CutFlow_evt_tagFirst__28->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__28->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__28->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__28->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__28->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__28->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__28->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__28->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__28->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__28->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__28->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__28->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__28->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__28->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__28->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__28->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__28->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__28->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__28->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__28->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZZ_tagFirst_16->Modified();
   CutFlow_ZZ_tagFirst_16->cd();
   CutFlow_ZZ_tagFirst_16->SetSelected(CutFlow_ZZ_tagFirst_16);
}
