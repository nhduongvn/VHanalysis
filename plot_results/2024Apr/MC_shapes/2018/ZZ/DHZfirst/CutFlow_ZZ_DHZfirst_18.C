#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZZ_DHZfirst_18()
{
//=========Macro generated from canvas: CutFlow_ZZ_DHZfirst_18/CutFlow_ZZ_DHZfirst_18
//=========  (Mon Apr 22 15:10:08 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZZ_DHZfirst_18 = new TCanvas("CutFlow_ZZ_DHZfirst_18", "CutFlow_ZZ_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZZ_DHZfirst_18->SetHighLightColor(2);
   CutFlow_ZZ_DHZfirst_18->Range(-1.4,-129309.5,7.933333,1163785);
   CutFlow_ZZ_DHZfirst_18->SetFillColor(0);
   CutFlow_ZZ_DHZfirst_18->SetFillStyle(4000);
   CutFlow_ZZ_DHZfirst_18->SetBorderMode(0);
   CutFlow_ZZ_DHZfirst_18->SetBorderSize(2);
   CutFlow_ZZ_DHZfirst_18->SetLeftMargin(0.15);
   CutFlow_ZZ_DHZfirst_18->SetFrameFillStyle(1000);
   CutFlow_ZZ_DHZfirst_18->SetFrameBorderMode(0);
   CutFlow_ZZ_DHZfirst_18->SetFrameFillStyle(1000);
   CutFlow_ZZ_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__90 = new TH1D("CutFlow_evt_DHZfirst__90","",8,0,8);
   CutFlow_evt_DHZfirst__90->SetBinContent(1,985215);
   CutFlow_evt_DHZfirst__90->SetBinContent(2,959307.7);
   CutFlow_evt_DHZfirst__90->SetBinContent(3,25169.92);
   CutFlow_evt_DHZfirst__90->SetBinContent(4,711.3889);
   CutFlow_evt_DHZfirst__90->SetBinContent(5,315.1794);
   CutFlow_evt_DHZfirst__90->SetBinContent(6,173.2369);
   CutFlow_evt_DHZfirst__90->SetBinContent(7,57.83877);
   CutFlow_evt_DHZfirst__90->SetBinContent(8,18.72076);
   CutFlow_evt_DHZfirst__90->SetBinError(1,524.6744);
   CutFlow_evt_DHZfirst__90->SetBinError(2,517.73);
   CutFlow_evt_DHZfirst__90->SetBinError(3,83.86202);
   CutFlow_evt_DHZfirst__90->SetBinError(4,14.09866);
   CutFlow_evt_DHZfirst__90->SetBinError(5,9.38433);
   CutFlow_evt_DHZfirst__90->SetBinError(6,6.957361);
   CutFlow_evt_DHZfirst__90->SetBinError(7,4.020072);
   CutFlow_evt_DHZfirst__90->SetBinError(8,2.287105);
   CutFlow_evt_DHZfirst__90->SetEntries(7053929);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__90->SetLineColor(ci);
   CutFlow_evt_DHZfirst__90->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__90->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__90->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__90->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__90->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__90->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__90->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__90->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__90->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__90->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__90->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__90->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__90->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__90->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__90->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__90->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__90->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__90->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__90->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__90->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__90->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__90->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__90->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZZ_DHZfirst_18->Modified();
   CutFlow_ZZ_DHZfirst_18->cd();
   CutFlow_ZZ_DHZfirst_18->SetSelected(CutFlow_ZZ_DHZfirst_18);
}
