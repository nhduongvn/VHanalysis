#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZZ_tagFirst_18_logY()
{
//=========Macro generated from canvas: CutFlow_ZZ_tagFirst_18/CutFlow_ZZ_tagFirst_18
//=========  (Mon Apr 22 15:12:12 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZZ_tagFirst_18 = new TCanvas("CutFlow_ZZ_tagFirst_18", "CutFlow_ZZ_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZZ_tagFirst_18->SetHighLightColor(2);
   CutFlow_ZZ_tagFirst_18->Range(-1.2,1.335614,6.8,6.819465);
   CutFlow_ZZ_tagFirst_18->SetFillColor(0);
   CutFlow_ZZ_tagFirst_18->SetFillStyle(4000);
   CutFlow_ZZ_tagFirst_18->SetBorderMode(0);
   CutFlow_ZZ_tagFirst_18->SetBorderSize(2);
   CutFlow_ZZ_tagFirst_18->SetLogy();
   CutFlow_ZZ_tagFirst_18->SetLeftMargin(0.15);
   CutFlow_ZZ_tagFirst_18->SetFrameFillStyle(1000);
   CutFlow_ZZ_tagFirst_18->SetFrameBorderMode(0);
   CutFlow_ZZ_tagFirst_18->SetFrameFillStyle(1000);
   CutFlow_ZZ_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__30 = new TH1D("CutFlow_evt_tagFirst__30","",5,0,5);
   CutFlow_evt_tagFirst__30->SetBinContent(1,985215);
   CutFlow_evt_tagFirst__30->SetBinContent(2,959307.7);
   CutFlow_evt_tagFirst__30->SetBinContent(3,25169.92);
   CutFlow_evt_tagFirst__30->SetBinContent(4,711.3889);
   CutFlow_evt_tagFirst__30->SetBinContent(5,153.1191);
   CutFlow_evt_tagFirst__30->SetBinError(1,524.6744);
   CutFlow_evt_tagFirst__30->SetBinError(2,517.73);
   CutFlow_evt_tagFirst__30->SetBinError(3,83.86202);
   CutFlow_evt_tagFirst__30->SetBinError(4,14.09866);
   CutFlow_evt_tagFirst__30->SetBinError(5,6.540922);
   CutFlow_evt_tagFirst__30->SetEntries(7052455);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__30->SetLineColor(ci);
   CutFlow_evt_tagFirst__30->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__30->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__30->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__30->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__30->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__30->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__30->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__30->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__30->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__30->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__30->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__30->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__30->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__30->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__30->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__30->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__30->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__30->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__30->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__30->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZZ_tagFirst_18->Modified();
   CutFlow_ZZ_tagFirst_18->cd();
   CutFlow_ZZ_tagFirst_18->SetSelected(CutFlow_ZZ_tagFirst_18);
}
