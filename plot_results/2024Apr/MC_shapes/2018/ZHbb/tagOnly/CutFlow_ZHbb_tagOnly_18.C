#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_ZHbb_tagOnly_18()
{
//=========Macro generated from canvas: CutFlow_ZHbb_tagOnly_18/CutFlow_ZHbb_tagOnly_18
//=========  (Mon Apr 22 15:10:07 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_ZHbb_tagOnly_18 = new TCanvas("CutFlow_ZHbb_tagOnly_18", "CutFlow_ZHbb_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_ZHbb_tagOnly_18->SetHighLightColor(2);
   CutFlow_ZHbb_tagOnly_18->Range(-1.4,-3207.894,7.933333,28871.04);
   CutFlow_ZHbb_tagOnly_18->SetFillColor(0);
   CutFlow_ZHbb_tagOnly_18->SetFillStyle(4000);
   CutFlow_ZHbb_tagOnly_18->SetBorderMode(0);
   CutFlow_ZHbb_tagOnly_18->SetBorderSize(2);
   CutFlow_ZHbb_tagOnly_18->SetLeftMargin(0.15);
   CutFlow_ZHbb_tagOnly_18->SetFrameFillStyle(1000);
   CutFlow_ZHbb_tagOnly_18->SetFrameBorderMode(0);
   CutFlow_ZHbb_tagOnly_18->SetFrameFillStyle(1000);
   CutFlow_ZHbb_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagOnly__36 = new TH1D("CutFlow_evt_tagOnly__36","",8,0,8);
   CutFlow_evt_tagOnly__36->SetBinContent(1,24441.09);
   CutFlow_evt_tagOnly__36->SetBinContent(2,24393.02);
   CutFlow_evt_tagOnly__36->SetBinContent(3,3668.468);
   CutFlow_evt_tagOnly__36->SetBinContent(4,793.6737);
   CutFlow_evt_tagOnly__36->SetBinContent(5,772.0994);
   CutFlow_evt_tagOnly__36->SetBinContent(6,614.4167);
   CutFlow_evt_tagOnly__36->SetBinContent(7,347.3234);
   CutFlow_evt_tagOnly__36->SetBinContent(8,144.4497);
   CutFlow_evt_tagOnly__36->SetBinError(1,7.019716);
   CutFlow_evt_tagOnly__36->SetBinError(2,7.013622);
   CutFlow_evt_tagOnly__36->SetBinError(3,2.532482);
   CutFlow_evt_tagOnly__36->SetBinError(4,1.018562);
   CutFlow_evt_tagOnly__36->SetBinError(5,1.009432);
   CutFlow_evt_tagOnly__36->SetBinError(6,0.92948);
   CutFlow_evt_tagOnly__36->SetBinError(7,0.6908111);
   CutFlow_evt_tagOnly__36->SetBinError(8,0.453572);
   CutFlow_evt_tagOnly__36->SetEntries(3.361117e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagOnly__36->SetLineColor(ci);
   CutFlow_evt_tagOnly__36->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagOnly__36->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagOnly__36->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagOnly__36->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagOnly__36->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_tagOnly__36->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_tagOnly__36->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_tagOnly__36->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_tagOnly__36->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_tagOnly__36->GetXaxis()->SetRange(1,7);
   CutFlow_evt_tagOnly__36->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__36->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__36->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__36->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagOnly__36->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__36->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagOnly__36->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagOnly__36->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagOnly__36->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__36->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__36->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__36->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__36->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_ZHbb_tagOnly_18->Modified();
   CutFlow_ZHbb_tagOnly_18->cd();
   CutFlow_ZHbb_tagOnly_18->SetSelected(CutFlow_ZHbb_tagOnly_18);
}
