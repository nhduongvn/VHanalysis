#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_SingleTop_tagOnly_17_logY()
{
//=========Macro generated from canvas: CutFlow_SingleTop_tagOnly_17/CutFlow_SingleTop_tagOnly_17
//=========  (Mon Apr 22 15:12:12 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_SingleTop_tagOnly_17 = new TCanvas("CutFlow_SingleTop_tagOnly_17", "CutFlow_SingleTop_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_SingleTop_tagOnly_17->SetHighLightColor(2);
   CutFlow_SingleTop_tagOnly_17->Range(-1.4,3.862875,7.933333,7.685467);
   CutFlow_SingleTop_tagOnly_17->SetFillColor(0);
   CutFlow_SingleTop_tagOnly_17->SetFillStyle(4000);
   CutFlow_SingleTop_tagOnly_17->SetBorderMode(0);
   CutFlow_SingleTop_tagOnly_17->SetBorderSize(2);
   CutFlow_SingleTop_tagOnly_17->SetLogy();
   CutFlow_SingleTop_tagOnly_17->SetLeftMargin(0.15);
   CutFlow_SingleTop_tagOnly_17->SetFrameFillStyle(1000);
   CutFlow_SingleTop_tagOnly_17->SetFrameBorderMode(0);
   CutFlow_SingleTop_tagOnly_17->SetFrameFillStyle(1000);
   CutFlow_SingleTop_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagOnly__50 = new TH1D("CutFlow_evt_tagOnly__50","",8,0,8);
   CutFlow_evt_tagOnly__50->SetBinContent(1,1.060862e+07);
   CutFlow_evt_tagOnly__50->SetBinContent(2,1.037981e+07);
   CutFlow_evt_tagOnly__50->SetBinContent(3,896560.2);
   CutFlow_evt_tagOnly__50->SetBinContent(4,63058.37);
   CutFlow_evt_tagOnly__50->SetBinContent(5,61252.03);
   CutFlow_evt_tagOnly__50->SetBinContent(6,45395.47);
   CutFlow_evt_tagOnly__50->SetBinContent(7,35169.32);
   CutFlow_evt_tagOnly__50->SetBinContent(8,14833.65);
   CutFlow_evt_tagOnly__50->SetBinError(1,1006.912);
   CutFlow_evt_tagOnly__50->SetBinError(2,989.1527);
   CutFlow_evt_tagOnly__50->SetBinError(3,367.1691);
   CutFlow_evt_tagOnly__50->SetBinError(4,96.32186);
   CutFlow_evt_tagOnly__50->SetBinError(5,94.69704);
   CutFlow_evt_tagOnly__50->SetBinError(6,80.40878);
   CutFlow_evt_tagOnly__50->SetBinError(7,71.495);
   CutFlow_evt_tagOnly__50->SetBinError(8,47.89555);
   CutFlow_evt_tagOnly__50->SetEntries(4.101321e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagOnly__50->SetLineColor(ci);
   CutFlow_evt_tagOnly__50->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagOnly__50->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagOnly__50->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagOnly__50->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagOnly__50->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_tagOnly__50->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_tagOnly__50->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_tagOnly__50->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_tagOnly__50->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_tagOnly__50->GetXaxis()->SetRange(1,7);
   CutFlow_evt_tagOnly__50->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__50->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__50->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__50->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagOnly__50->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__50->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagOnly__50->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagOnly__50->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagOnly__50->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__50->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagOnly__50->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagOnly__50->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagOnly__50->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_SingleTop_tagOnly_17->Modified();
   CutFlow_SingleTop_tagOnly_17->cd();
   CutFlow_SingleTop_tagOnly_17->SetSelected(CutFlow_SingleTop_tagOnly_17);
}
