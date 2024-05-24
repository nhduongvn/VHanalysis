#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_WZ_tagFirst_18_logY()
{
//=========Macro generated from canvas: CutFlow_WZ_tagFirst_18/CutFlow_WZ_tagFirst_18
//=========  (Thu May 23 15:31:42 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_WZ_tagFirst_18 = new TCanvas("CutFlow_WZ_tagFirst_18", "CutFlow_WZ_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_WZ_tagFirst_18->SetHighLightColor(2);
   CutFlow_WZ_tagFirst_18->Range(-1.2,1.371732,6.8,7.321604);
   CutFlow_WZ_tagFirst_18->SetFillColor(0);
   CutFlow_WZ_tagFirst_18->SetFillStyle(4000);
   CutFlow_WZ_tagFirst_18->SetBorderMode(0);
   CutFlow_WZ_tagFirst_18->SetBorderSize(2);
   CutFlow_WZ_tagFirst_18->SetLogy();
   CutFlow_WZ_tagFirst_18->SetLeftMargin(0.15);
   CutFlow_WZ_tagFirst_18->SetFrameFillStyle(1000);
   CutFlow_WZ_tagFirst_18->SetFrameBorderMode(0);
   CutFlow_WZ_tagFirst_18->SetFrameFillStyle(1000);
   CutFlow_WZ_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__27 = new TH1D("CutFlow_evt_tagFirst__27","",5,0,5);
   CutFlow_evt_tagFirst__27->SetBinContent(1,2812341);
   CutFlow_evt_tagFirst__27->SetBinContent(2,2746083);
   CutFlow_evt_tagFirst__27->SetBinContent(3,71073.24);
   CutFlow_evt_tagFirst__27->SetBinContent(4,962.359);
   CutFlow_evt_tagFirst__27->SetBinContent(5,185.2461);
   CutFlow_evt_tagFirst__27->SetBinError(1,998.0625);
   CutFlow_evt_tagFirst__27->SetBinError(2,986.2353);
   CutFlow_evt_tagFirst__27->SetBinError(3,158.6634);
   CutFlow_evt_tagFirst__27->SetBinError(4,18.46258);
   CutFlow_evt_tagFirst__27->SetBinError(5,8.100248);
   CutFlow_evt_tagFirst__27->SetEntries(1.589683e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__27->SetLineColor(ci);
   CutFlow_evt_tagFirst__27->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__27->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__27->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__27->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__27->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__27->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__27->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__27->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__27->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__27->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__27->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__27->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__27->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__27->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__27->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__27->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__27->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__27->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__27->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__27->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_WZ_tagFirst_18->Modified();
   CutFlow_WZ_tagFirst_18->cd();
   CutFlow_WZ_tagFirst_18->SetSelected(CutFlow_WZ_tagFirst_18);
}
