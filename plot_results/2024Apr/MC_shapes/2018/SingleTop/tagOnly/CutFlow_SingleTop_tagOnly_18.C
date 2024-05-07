#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_SingleTop_tagOnly_18()
{
//=========Macro generated from canvas: CutFlow_SingleTop_tagOnly_18/CutFlow_SingleTop_tagOnly_18
//=========  (Mon Apr 22 15:10:08 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_SingleTop_tagOnly_18 = new TCanvas("CutFlow_SingleTop_tagOnly_18", "CutFlow_SingleTop_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_SingleTop_tagOnly_18->SetHighLightColor(2);
   CutFlow_SingleTop_tagOnly_18->Range(-1.4,-2262289,7.933333,2.03606e+07);
   CutFlow_SingleTop_tagOnly_18->SetFillColor(0);
   CutFlow_SingleTop_tagOnly_18->SetFillStyle(4000);
   CutFlow_SingleTop_tagOnly_18->SetBorderMode(0);
   CutFlow_SingleTop_tagOnly_18->SetBorderSize(2);
   CutFlow_SingleTop_tagOnly_18->SetLeftMargin(0.15);
   CutFlow_SingleTop_tagOnly_18->SetFrameFillStyle(1000);
   CutFlow_SingleTop_tagOnly_18->SetFrameBorderMode(0);
   CutFlow_SingleTop_tagOnly_18->SetFrameFillStyle(1000);
   CutFlow_SingleTop_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagOnly__51 = new TH1D("CutFlow_evt_tagOnly__51","",8,0,8);
   CutFlow_evt_tagOnly__51->SetBinContent(1,1.723649e+07);
   CutFlow_evt_tagOnly__51->SetBinContent(2,1.686586e+07);
   CutFlow_evt_tagOnly__51->SetBinContent(3,1457818);
   CutFlow_evt_tagOnly__51->SetBinContent(4,79259.55);
   CutFlow_evt_tagOnly__51->SetBinContent(5,77594.04);
   CutFlow_evt_tagOnly__51->SetBinContent(6,60544.92);
   CutFlow_evt_tagOnly__51->SetBinContent(7,46469.89);
   CutFlow_evt_tagOnly__51->SetBinContent(8,19730.88);
   CutFlow_evt_tagOnly__51->SetBinError(1,1351.238);
   CutFlow_evt_tagOnly__51->SetBinError(2,1328.078);
   CutFlow_evt_tagOnly__51->SetBinError(3,486.7779);
   CutFlow_evt_tagOnly__51->SetBinError(4,112.1993);
   CutFlow_evt_tagOnly__51->SetBinError(5,110.8301);
   CutFlow_evt_tagOnly__51->SetBinError(6,96.98045);
   CutFlow_evt_tagOnly__51->SetBinError(7,85.69762);
   CutFlow_evt_tagOnly__51->SetBinError(8,57.53202);
   CutFlow_evt_tagOnly__51->SetEntries(5.646117e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagOnly__51->SetLineColor(ci);
   CutFlow_evt_tagOnly__51->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagOnly__51->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagOnly__51->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagOnly__51->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagOnly__51->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_tagOnly__51->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_tagOnly__51->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_tagOnly__51->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_tagOnly__51->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_tagOnly__51->GetXaxis()->SetRange(1,7);
   CutFlow_evt_tagOnly__51->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__51->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__51->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__51->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagOnly__51->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__51->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagOnly__51->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagOnly__51->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagOnly__51->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__51->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__51->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__51->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__51->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_SingleTop_tagOnly_18->Modified();
   CutFlow_SingleTop_tagOnly_18->cd();
   CutFlow_SingleTop_tagOnly_18->SetSelected(CutFlow_SingleTop_tagOnly_18);
}
