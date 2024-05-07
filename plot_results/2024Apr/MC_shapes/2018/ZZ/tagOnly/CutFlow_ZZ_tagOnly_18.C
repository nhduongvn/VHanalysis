#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZZ_tagOnly_18()
{
//=========Macro generated from canvas: CutFlow_ZZ_tagOnly_18/CutFlow_ZZ_tagOnly_18
//=========  (Mon Apr 22 15:10:08 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZZ_tagOnly_18 = new TCanvas("CutFlow_ZZ_tagOnly_18", "CutFlow_ZZ_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZZ_tagOnly_18->SetHighLightColor(2);
   CutFlow_ZZ_tagOnly_18->Range(-1.4,-129309.5,7.933333,1163785);
   CutFlow_ZZ_tagOnly_18->SetFillColor(0);
   CutFlow_ZZ_tagOnly_18->SetFillStyle(4000);
   CutFlow_ZZ_tagOnly_18->SetBorderMode(0);
   CutFlow_ZZ_tagOnly_18->SetBorderSize(2);
   CutFlow_ZZ_tagOnly_18->SetLeftMargin(0.15);
   CutFlow_ZZ_tagOnly_18->SetFrameFillStyle(1000);
   CutFlow_ZZ_tagOnly_18->SetFrameBorderMode(0);
   CutFlow_ZZ_tagOnly_18->SetFrameFillStyle(1000);
   CutFlow_ZZ_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagOnly__60 = new TH1D("CutFlow_evt_tagOnly__60","",8,0,8);
   CutFlow_evt_tagOnly__60->SetBinContent(1,985215);
   CutFlow_evt_tagOnly__60->SetBinContent(2,959307.7);
   CutFlow_evt_tagOnly__60->SetBinContent(3,25169.92);
   CutFlow_evt_tagOnly__60->SetBinContent(4,711.3889);
   CutFlow_evt_tagOnly__60->SetBinContent(5,681.771);
   CutFlow_evt_tagOnly__60->SetBinContent(6,573.6377);
   CutFlow_evt_tagOnly__60->SetBinContent(7,354.5768);
   CutFlow_evt_tagOnly__60->SetBinContent(8,142.2219);
   CutFlow_evt_tagOnly__60->SetBinError(1,524.6744);
   CutFlow_evt_tagOnly__60->SetBinError(2,517.73);
   CutFlow_evt_tagOnly__60->SetBinError(3,83.86202);
   CutFlow_evt_tagOnly__60->SetBinError(4,14.09866);
   CutFlow_evt_tagOnly__60->SetBinError(5,13.80205);
   CutFlow_evt_tagOnly__60->SetBinError(6,12.66028);
   CutFlow_evt_tagOnly__60->SetBinError(7,9.953585);
   CutFlow_evt_tagOnly__60->SetBinError(8,6.303875);
   CutFlow_evt_tagOnly__60->SetEntries(7058178);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagOnly__60->SetLineColor(ci);
   CutFlow_evt_tagOnly__60->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagOnly__60->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagOnly__60->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagOnly__60->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagOnly__60->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_tagOnly__60->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_tagOnly__60->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_tagOnly__60->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_tagOnly__60->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_tagOnly__60->GetXaxis()->SetRange(1,7);
   CutFlow_evt_tagOnly__60->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__60->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__60->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__60->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagOnly__60->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__60->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagOnly__60->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagOnly__60->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagOnly__60->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__60->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__60->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__60->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__60->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZZ_tagOnly_18->Modified();
   CutFlow_ZZ_tagOnly_18->cd();
   CutFlow_ZZ_tagOnly_18->SetSelected(CutFlow_ZZ_tagOnly_18);
}
