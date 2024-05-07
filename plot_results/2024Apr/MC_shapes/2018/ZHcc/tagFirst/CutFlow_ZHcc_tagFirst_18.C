#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZHcc_tagFirst_18()
{
//=========Macro generated from canvas: CutFlow_ZHcc_tagFirst_18/CutFlow_ZHcc_tagFirst_18
//=========  (Mon Apr 22 15:10:07 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZHcc_tagFirst_18 = new TCanvas("CutFlow_ZHcc_tagFirst_18", "CutFlow_ZHcc_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZHcc_tagFirst_18->SetHighLightColor(2);
   CutFlow_ZHcc_tagFirst_18->Range(-1.2,-159.325,6.8,1433.924);
   CutFlow_ZHcc_tagFirst_18->SetFillColor(0);
   CutFlow_ZHcc_tagFirst_18->SetFillStyle(4000);
   CutFlow_ZHcc_tagFirst_18->SetBorderMode(0);
   CutFlow_ZHcc_tagFirst_18->SetBorderSize(2);
   CutFlow_ZHcc_tagFirst_18->SetLeftMargin(0.15);
   CutFlow_ZHcc_tagFirst_18->SetFrameFillStyle(1000);
   CutFlow_ZHcc_tagFirst_18->SetFrameBorderMode(0);
   CutFlow_ZHcc_tagFirst_18->SetFrameFillStyle(1000);
   CutFlow_ZHcc_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__3 = new TH1D("CutFlow_evt_tagFirst__3","",5,0,5);
   CutFlow_evt_tagFirst__3->SetBinContent(1,1213.904);
   CutFlow_evt_tagFirst__3->SetBinContent(2,1212.577);
   CutFlow_evt_tagFirst__3->SetBinContent(3,194.8793);
   CutFlow_evt_tagFirst__3->SetBinContent(4,8.857052);
   CutFlow_evt_tagFirst__3->SetBinContent(5,3.047893);
   CutFlow_evt_tagFirst__3->SetBinError(1,1.522797);
   CutFlow_evt_tagFirst__3->SetBinError(2,1.52205);
   CutFlow_evt_tagFirst__3->SetBinError(3,0.5598215);
   CutFlow_evt_tagFirst__3->SetBinError(4,0.1157925);
   CutFlow_evt_tagFirst__3->SetBinError(5,0.0677442);
   CutFlow_evt_tagFirst__3->SetEntries(2254455);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__3->SetLineColor(ci);
   CutFlow_evt_tagFirst__3->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__3->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__3->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__3->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__3->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__3->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__3->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__3->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__3->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__3->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__3->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__3->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__3->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__3->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__3->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__3->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__3->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__3->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__3->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__3->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZHcc_tagFirst_18->Modified();
   CutFlow_ZHcc_tagFirst_18->cd();
   CutFlow_ZHcc_tagFirst_18->SetSelected(CutFlow_ZHcc_tagFirst_18);
}
