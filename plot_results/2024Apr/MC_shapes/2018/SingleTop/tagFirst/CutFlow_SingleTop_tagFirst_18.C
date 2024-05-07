#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_SingleTop_tagFirst_18()
{
//=========Macro generated from canvas: CutFlow_SingleTop_tagFirst_18/CutFlow_SingleTop_tagFirst_18
//=========  (Mon Apr 22 15:10:07 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_SingleTop_tagFirst_18 = new TCanvas("CutFlow_SingleTop_tagFirst_18", "CutFlow_SingleTop_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_SingleTop_tagFirst_18->SetHighLightColor(2);
   CutFlow_SingleTop_tagFirst_18->Range(-1.2,-2262289,6.8,2.03606e+07);
   CutFlow_SingleTop_tagFirst_18->SetFillColor(0);
   CutFlow_SingleTop_tagFirst_18->SetFillStyle(4000);
   CutFlow_SingleTop_tagFirst_18->SetBorderMode(0);
   CutFlow_SingleTop_tagFirst_18->SetBorderSize(2);
   CutFlow_SingleTop_tagFirst_18->SetLeftMargin(0.15);
   CutFlow_SingleTop_tagFirst_18->SetFrameFillStyle(1000);
   CutFlow_SingleTop_tagFirst_18->SetFrameBorderMode(0);
   CutFlow_SingleTop_tagFirst_18->SetFrameFillStyle(1000);
   CutFlow_SingleTop_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__21 = new TH1D("CutFlow_evt_tagFirst__21","",5,0,5);
   CutFlow_evt_tagFirst__21->SetBinContent(1,1.723649e+07);
   CutFlow_evt_tagFirst__21->SetBinContent(2,1.686586e+07);
   CutFlow_evt_tagFirst__21->SetBinContent(3,1457818);
   CutFlow_evt_tagFirst__21->SetBinContent(4,79259.55);
   CutFlow_evt_tagFirst__21->SetBinContent(5,20791.8);
   CutFlow_evt_tagFirst__21->SetBinError(1,1351.238);
   CutFlow_evt_tagFirst__21->SetBinError(2,1328.078);
   CutFlow_evt_tagFirst__21->SetBinError(3,486.7779);
   CutFlow_evt_tagFirst__21->SetBinError(4,112.1993);
   CutFlow_evt_tagFirst__21->SetBinError(5,59.12976);
   CutFlow_evt_tagFirst__21->SetEntries(5.623804e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__21->SetLineColor(ci);
   CutFlow_evt_tagFirst__21->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__21->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__21->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__21->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__21->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__21->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__21->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__21->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__21->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__21->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__21->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__21->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__21->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__21->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__21->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__21->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__21->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__21->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__21->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__21->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_SingleTop_tagFirst_18->Modified();
   CutFlow_SingleTop_tagFirst_18->cd();
   CutFlow_SingleTop_tagFirst_18->SetSelected(CutFlow_SingleTop_tagFirst_18);
}
