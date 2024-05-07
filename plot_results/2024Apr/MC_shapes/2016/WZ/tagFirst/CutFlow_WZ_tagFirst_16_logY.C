#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_WZ_tagFirst_16_logY()
{
//=========Macro generated from canvas: CutFlow_WZ_tagFirst_16/CutFlow_WZ_tagFirst_16
//=========  (Mon Apr 22 15:12:12 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_WZ_tagFirst_16 = new TCanvas("CutFlow_WZ_tagFirst_16", "CutFlow_WZ_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_WZ_tagFirst_16->SetHighLightColor(2);
   CutFlow_WZ_tagFirst_16->Range(-1.2,1.5983,6.8,7.050416);
   CutFlow_WZ_tagFirst_16->SetFillColor(0);
   CutFlow_WZ_tagFirst_16->SetFillStyle(4000);
   CutFlow_WZ_tagFirst_16->SetBorderMode(0);
   CutFlow_WZ_tagFirst_16->SetBorderSize(2);
   CutFlow_WZ_tagFirst_16->SetLogy();
   CutFlow_WZ_tagFirst_16->SetLeftMargin(0.15);
   CutFlow_WZ_tagFirst_16->SetFrameFillStyle(1000);
   CutFlow_WZ_tagFirst_16->SetFrameBorderMode(0);
   CutFlow_WZ_tagFirst_16->SetFrameFillStyle(1000);
   CutFlow_WZ_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__25 = new TH1D("CutFlow_evt_tagFirst__25","",5,0,5);
   CutFlow_evt_tagFirst__25->SetBinContent(1,1689100);
   CutFlow_evt_tagFirst__25->SetBinContent(2,1651559);
   CutFlow_evt_tagFirst__25->SetBinContent(3,42460.71);
   CutFlow_evt_tagFirst__25->SetBinContent(4,5329.458);
   CutFlow_evt_tagFirst__25->SetBinContent(5,278.3183);
   CutFlow_evt_tagFirst__25->SetBinError(1,435.3843);
   CutFlow_evt_tagFirst__25->SetBinError(2,430.5188);
   CutFlow_evt_tagFirst__25->SetBinError(3,69.03012);
   CutFlow_evt_tagFirst__25->SetBinError(4,24.45606);
   CutFlow_evt_tagFirst__25->SetBinError(5,5.588766);
   CutFlow_evt_tagFirst__25->SetEntries(3.01958e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__25->SetLineColor(ci);
   CutFlow_evt_tagFirst__25->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__25->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__25->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__25->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__25->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__25->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__25->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__25->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__25->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__25->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__25->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__25->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__25->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__25->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__25->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__25->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__25->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__25->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__25->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__25->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_WZ_tagFirst_16->Modified();
   CutFlow_WZ_tagFirst_16->cd();
   CutFlow_WZ_tagFirst_16->SetSelected(CutFlow_WZ_tagFirst_16);
}
