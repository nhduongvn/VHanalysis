#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZHbb_tagFirst_17()
{
//=========Macro generated from canvas: CutFlow_ZHbb_tagFirst_17/CutFlow_ZHbb_tagFirst_17
//=========  (Mon Apr 22 15:10:07 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZHbb_tagFirst_17 = new TCanvas("CutFlow_ZHbb_tagFirst_17", "CutFlow_ZHbb_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZHbb_tagFirst_17->SetHighLightColor(2);
   CutFlow_ZHbb_tagFirst_17->Range(-1.2,-1974.378,6.8,17769.4);
   CutFlow_ZHbb_tagFirst_17->SetFillColor(0);
   CutFlow_ZHbb_tagFirst_17->SetFillStyle(4000);
   CutFlow_ZHbb_tagFirst_17->SetBorderMode(0);
   CutFlow_ZHbb_tagFirst_17->SetBorderSize(2);
   CutFlow_ZHbb_tagFirst_17->SetLeftMargin(0.15);
   CutFlow_ZHbb_tagFirst_17->SetFrameFillStyle(1000);
   CutFlow_ZHbb_tagFirst_17->SetFrameBorderMode(0);
   CutFlow_ZHbb_tagFirst_17->SetFrameFillStyle(1000);
   CutFlow_ZHbb_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__5 = new TH1D("CutFlow_evt_tagFirst__5","",5,0,5);
   CutFlow_evt_tagFirst__5->SetBinContent(1,15042.88);
   CutFlow_evt_tagFirst__5->SetBinContent(2,15011.87);
   CutFlow_evt_tagFirst__5->SetBinContent(3,2263.159);
   CutFlow_evt_tagFirst__5->SetBinContent(4,505.4565);
   CutFlow_evt_tagFirst__5->SetBinContent(5,103.1869);
   CutFlow_evt_tagFirst__5->SetBinError(1,4.303714);
   CutFlow_evt_tagFirst__5->SetBinError(2,4.299755);
   CutFlow_evt_tagFirst__5->SetBinError(3,1.555413);
   CutFlow_evt_tagFirst__5->SetBinError(4,0.64313);
   CutFlow_evt_tagFirst__5->SetBinError(5,0.3041399);
   CutFlow_evt_tagFirst__5->SetEntries(3.206535e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__5->SetLineColor(ci);
   CutFlow_evt_tagFirst__5->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__5->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__5->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__5->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__5->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__5->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__5->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__5->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__5->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__5->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__5->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__5->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__5->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__5->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__5->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__5->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__5->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__5->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__5->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__5->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZHbb_tagFirst_17->Modified();
   CutFlow_ZHbb_tagFirst_17->cd();
   CutFlow_ZHbb_tagFirst_17->SetSelected(CutFlow_ZHbb_tagFirst_17);
}
