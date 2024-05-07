#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_SingleTop_DHZfirst_18()
{
//=========Macro generated from canvas: CutFlow_SingleTop_DHZfirst_18/CutFlow_SingleTop_DHZfirst_18
//=========  (Mon Apr 22 15:10:08 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_SingleTop_DHZfirst_18 = new TCanvas("CutFlow_SingleTop_DHZfirst_18", "CutFlow_SingleTop_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_SingleTop_DHZfirst_18->SetHighLightColor(2);
   CutFlow_SingleTop_DHZfirst_18->Range(-1.4,-2262289,7.933333,2.03606e+07);
   CutFlow_SingleTop_DHZfirst_18->SetFillColor(0);
   CutFlow_SingleTop_DHZfirst_18->SetFillStyle(4000);
   CutFlow_SingleTop_DHZfirst_18->SetBorderMode(0);
   CutFlow_SingleTop_DHZfirst_18->SetBorderSize(2);
   CutFlow_SingleTop_DHZfirst_18->SetLeftMargin(0.15);
   CutFlow_SingleTop_DHZfirst_18->SetFrameFillStyle(1000);
   CutFlow_SingleTop_DHZfirst_18->SetFrameBorderMode(0);
   CutFlow_SingleTop_DHZfirst_18->SetFrameFillStyle(1000);
   CutFlow_SingleTop_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_DHZfirst__81 = new TH1D("CutFlow_evt_DHZfirst__81","",8,0,8);
   CutFlow_evt_DHZfirst__81->SetBinContent(1,1.723649e+07);
   CutFlow_evt_DHZfirst__81->SetBinContent(2,1.686586e+07);
   CutFlow_evt_DHZfirst__81->SetBinContent(3,1457818);
   CutFlow_evt_DHZfirst__81->SetBinContent(4,79259.55);
   CutFlow_evt_DHZfirst__81->SetBinContent(5,33879.94);
   CutFlow_evt_DHZfirst__81->SetBinContent(6,11645.21);
   CutFlow_evt_DHZfirst__81->SetBinContent(7,4412.514);
   CutFlow_evt_DHZfirst__81->SetBinContent(8,1522.553);
   CutFlow_evt_DHZfirst__81->SetBinError(1,1351.238);
   CutFlow_evt_DHZfirst__81->SetBinError(2,1328.078);
   CutFlow_evt_DHZfirst__81->SetBinError(3,486.7779);
   CutFlow_evt_DHZfirst__81->SetBinError(4,112.1993);
   CutFlow_evt_DHZfirst__81->SetBinError(5,73.1438);
   CutFlow_evt_DHZfirst__81->SetBinError(6,42.19847);
   CutFlow_evt_DHZfirst__81->SetBinError(7,26.13791);
   CutFlow_evt_DHZfirst__81->SetBinError(8,15.39291);
   CutFlow_evt_DHZfirst__81->SetEntries(5.627721e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_DHZfirst__81->SetLineColor(ci);
   CutFlow_evt_DHZfirst__81->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_DHZfirst__81->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_DHZfirst__81->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_DHZfirst__81->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_DHZfirst__81->GetXaxis()->SetBinLabel(4,"Triggers");
   CutFlow_evt_DHZfirst__81->GetXaxis()->SetBinLabel(5,"b-tag #1");
   CutFlow_evt_DHZfirst__81->GetXaxis()->SetBinLabel(6,"b-tag #2");
   CutFlow_evt_DHZfirst__81->GetXaxis()->SetBinLabel(7,"c-tag #1");
   CutFlow_evt_DHZfirst__81->GetXaxis()->SetBinLabel(8,"c-tag #2");
   CutFlow_evt_DHZfirst__81->GetXaxis()->SetRange(1,7);
   CutFlow_evt_DHZfirst__81->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__81->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__81->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__81->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_DHZfirst__81->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__81->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_DHZfirst__81->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_DHZfirst__81->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_DHZfirst__81->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__81->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_DHZfirst__81->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_DHZfirst__81->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_DHZfirst__81->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_SingleTop_DHZfirst_18->Modified();
   CutFlow_SingleTop_DHZfirst_18->cd();
   CutFlow_SingleTop_DHZfirst_18->SetSelected(CutFlow_SingleTop_DHZfirst_18);
}
