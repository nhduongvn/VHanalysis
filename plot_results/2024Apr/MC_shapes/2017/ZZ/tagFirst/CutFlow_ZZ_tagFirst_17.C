#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZZ_tagFirst_17()
{
//=========Macro generated from canvas: CutFlow_ZZ_tagFirst_17/CutFlow_ZZ_tagFirst_17
//=========  (Mon Apr 22 15:10:07 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZZ_tagFirst_17 = new TCanvas("CutFlow_ZZ_tagFirst_17", "CutFlow_ZZ_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZZ_tagFirst_17->SetHighLightColor(2);
   CutFlow_ZZ_tagFirst_17->Range(-1.2,-79586.72,6.8,716280.5);
   CutFlow_ZZ_tagFirst_17->SetFillColor(0);
   CutFlow_ZZ_tagFirst_17->SetFillStyle(4000);
   CutFlow_ZZ_tagFirst_17->SetBorderMode(0);
   CutFlow_ZZ_tagFirst_17->SetBorderSize(2);
   CutFlow_ZZ_tagFirst_17->SetLeftMargin(0.15);
   CutFlow_ZZ_tagFirst_17->SetFrameFillStyle(1000);
   CutFlow_ZZ_tagFirst_17->SetFrameBorderMode(0);
   CutFlow_ZZ_tagFirst_17->SetFrameFillStyle(1000);
   CutFlow_ZZ_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__29 = new TH1D("CutFlow_evt_tagFirst__29","",5,0,5);
   CutFlow_evt_tagFirst__29->SetBinContent(1,606375);
   CutFlow_evt_tagFirst__29->SetBinContent(2,590445.2);
   CutFlow_evt_tagFirst__29->SetBinContent(3,15527.55);
   CutFlow_evt_tagFirst__29->SetBinContent(4,516.5168);
   CutFlow_evt_tagFirst__29->SetBinContent(5,107.7851);
   CutFlow_evt_tagFirst__29->SetBinError(1,368.6187);
   CutFlow_evt_tagFirst__29->SetBinError(2,363.7446);
   CutFlow_evt_tagFirst__29->SetBinError(3,58.98725);
   CutFlow_evt_tagFirst__29->SetBinError(4,10.75843);
   CutFlow_evt_tagFirst__29->SetBinError(5,4.914576);
   CutFlow_evt_tagFirst__29->SetEntries(5412991);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__29->SetLineColor(ci);
   CutFlow_evt_tagFirst__29->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__29->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__29->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__29->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__29->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__29->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__29->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__29->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__29->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__29->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__29->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__29->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__29->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__29->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__29->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__29->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__29->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__29->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__29->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__29->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZZ_tagFirst_17->Modified();
   CutFlow_ZZ_tagFirst_17->cd();
   CutFlow_ZZ_tagFirst_17->SetSelected(CutFlow_ZZ_tagFirst_17);
}
