#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_WZ_tagOnly_16()
{
//=========Macro generated from canvas: CutFlow_WZ_tagOnly_16/CutFlow_WZ_tagOnly_16
//=========  (Mon Apr 22 15:10:08 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_WZ_tagOnly_16 = new TCanvas("CutFlow_WZ_tagOnly_16", "CutFlow_WZ_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_WZ_tagOnly_16->SetHighLightColor(2);
   CutFlow_WZ_tagOnly_16->Range(-1.4,-221694.4,7.933333,1995250);
   CutFlow_WZ_tagOnly_16->SetFillColor(0);
   CutFlow_WZ_tagOnly_16->SetFillStyle(4000);
   CutFlow_WZ_tagOnly_16->SetBorderMode(0);
   CutFlow_WZ_tagOnly_16->SetBorderSize(2);
   CutFlow_WZ_tagOnly_16->SetLeftMargin(0.15);
   CutFlow_WZ_tagOnly_16->SetFrameFillStyle(1000);
   CutFlow_WZ_tagOnly_16->SetFrameBorderMode(0);
   CutFlow_WZ_tagOnly_16->SetFrameFillStyle(1000);
   CutFlow_WZ_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagOnly__55 = new TH1D("CutFlow_evt_tagOnly__55","",8,0,8);
   CutFlow_evt_tagOnly__55->SetBinContent(1,1689100);
   CutFlow_evt_tagOnly__55->SetBinContent(2,1651559);
   CutFlow_evt_tagOnly__55->SetBinContent(3,42460.71);
   CutFlow_evt_tagOnly__55->SetBinContent(4,5329.458);
   CutFlow_evt_tagOnly__55->SetBinContent(5,3017.06);
   CutFlow_evt_tagOnly__55->SetBinContent(6,1332.337);
   CutFlow_evt_tagOnly__55->SetBinContent(7,887.5884);
   CutFlow_evt_tagOnly__55->SetBinContent(8,271.5848);
   CutFlow_evt_tagOnly__55->SetBinError(1,435.3843);
   CutFlow_evt_tagOnly__55->SetBinError(2,430.5188);
   CutFlow_evt_tagOnly__55->SetBinError(3,69.03012);
   CutFlow_evt_tagOnly__55->SetBinError(4,24.45606);
   CutFlow_evt_tagOnly__55->SetBinError(5,18.40081);
   CutFlow_evt_tagOnly__55->SetBinError(6,12.2279);
   CutFlow_evt_tagOnly__55->SetBinError(7,9.980467);
   CutFlow_evt_tagOnly__55->SetBinError(8,5.520746);
   CutFlow_evt_tagOnly__55->SetEntries(3.024241e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagOnly__55->SetLineColor(ci);
   CutFlow_evt_tagOnly__55->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagOnly__55->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagOnly__55->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagOnly__55->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagOnly__55->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_tagOnly__55->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_tagOnly__55->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_tagOnly__55->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_tagOnly__55->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_tagOnly__55->GetXaxis()->SetRange(1,7);
   CutFlow_evt_tagOnly__55->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__55->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__55->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__55->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagOnly__55->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__55->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagOnly__55->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagOnly__55->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagOnly__55->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__55->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__55->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__55->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__55->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_WZ_tagOnly_16->Modified();
   CutFlow_WZ_tagOnly_16->cd();
   CutFlow_WZ_tagOnly_16->SetSelected(CutFlow_WZ_tagOnly_16);
}
