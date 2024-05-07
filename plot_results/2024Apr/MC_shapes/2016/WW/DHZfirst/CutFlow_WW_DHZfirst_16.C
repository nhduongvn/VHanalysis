#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_WW_DHZfirst_16()
{
//=========Macro generated from canvas: CutFlow_WW_DHZfirst_16/CutFlow_WW_DHZfirst_16
//=========  (Mon Apr 22 15:10:08 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_WW_DHZfirst_16 = new TCanvas("CutFlow_WW_DHZfirst_16", "CutFlow_WW_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_WW_DHZfirst_16->SetHighLightColor(2);
   CutFlow_WW_DHZfirst_16->Range(-1.4,-558707.6,7.933333,5028368);
   CutFlow_WW_DHZfirst_16->SetFillColor(0);
   CutFlow_WW_DHZfirst_16->SetFillStyle(4000);
   CutFlow_WW_DHZfirst_16->SetBorderMode(0);
   CutFlow_WW_DHZfirst_16->SetBorderSize(2);
   CutFlow_WW_DHZfirst_16->SetLeftMargin(0.15);
   CutFlow_WW_DHZfirst_16->SetFrameFillStyle(1000);
   CutFlow_WW_DHZfirst_16->SetFrameBorderMode(0);
   CutFlow_WW_DHZfirst_16->SetFrameFillStyle(1000);
   CutFlow_WW_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__82 = new TH1D("CutFlow_evt_DHZfirst__82","",8,0,8);
   CutFlow_evt_DHZfirst__82->SetBinContent(1,4256819);
   CutFlow_evt_DHZfirst__82->SetBinContent(2,4192757);
   CutFlow_evt_DHZfirst__82->SetBinContent(3,84693.24);
   CutFlow_evt_DHZfirst__82->SetBinContent(4,7712.395);
   CutFlow_evt_DHZfirst__82->SetBinContent(5,737.0156);
   CutFlow_evt_DHZfirst__82->SetBinContent(6,73.76875);
   CutFlow_evt_DHZfirst__82->SetBinContent(7,28.08318);
   CutFlow_evt_DHZfirst__82->SetBinContent(8,10.48081);
   CutFlow_evt_DHZfirst__82->SetBinError(1,756.2975);
   CutFlow_evt_DHZfirst__82->SetBinError(2,750.585);
   CutFlow_evt_DHZfirst__82->SetBinError(3,106.6779);
   CutFlow_evt_DHZfirst__82->SetBinError(4,32.19175);
   CutFlow_evt_DHZfirst__82->SetBinError(5,9.951496);
   CutFlow_evt_DHZfirst__82->SetBinError(6,3.148373);
   CutFlow_evt_DHZfirst__82->SetBinError(7,1.942554);
   CutFlow_evt_DHZfirst__82->SetBinError(8,1.186718);
   CutFlow_evt_DHZfirst__82->SetEntries(6.357726e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__82->SetLineColor(ci);
   CutFlow_evt_DHZfirst__82->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__82->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__82->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__82->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__82->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__82->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__82->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__82->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__82->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__82->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__82->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__82->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__82->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__82->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__82->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__82->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__82->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__82->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__82->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__82->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__82->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__82->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__82->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_WW_DHZfirst_16->Modified();
   CutFlow_WW_DHZfirst_16->cd();
   CutFlow_WW_DHZfirst_16->SetSelected(CutFlow_WW_DHZfirst_16);
}
