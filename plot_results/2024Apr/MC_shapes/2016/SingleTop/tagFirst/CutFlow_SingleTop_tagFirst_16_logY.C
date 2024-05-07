#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_SingleTop_tagFirst_16_logY()
{
//=========Macro generated from canvas: CutFlow_SingleTop_tagFirst_16/CutFlow_SingleTop_tagFirst_16
//=========  (Mon Apr 22 15:12:11 2024) by ROOT version 6.28/10
   TCanvas *CutFlow_SingleTop_tagFirst_16 = new TCanvas("CutFlow_SingleTop_tagFirst_16", "CutFlow_SingleTop_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_SingleTop_tagFirst_16->SetHighLightColor(2);
   CutFlow_SingleTop_tagFirst_16->Range(-1.2,3.779068,6.8,7.682976);
   CutFlow_SingleTop_tagFirst_16->SetFillColor(0);
   CutFlow_SingleTop_tagFirst_16->SetFillStyle(4000);
   CutFlow_SingleTop_tagFirst_16->SetBorderMode(0);
   CutFlow_SingleTop_tagFirst_16->SetBorderSize(2);
   CutFlow_SingleTop_tagFirst_16->SetLogy();
   CutFlow_SingleTop_tagFirst_16->SetLeftMargin(0.15);
   CutFlow_SingleTop_tagFirst_16->SetFrameFillStyle(1000);
   CutFlow_SingleTop_tagFirst_16->SetFrameBorderMode(0);
   CutFlow_SingleTop_tagFirst_16->SetFrameFillStyle(1000);
   CutFlow_SingleTop_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *CutFlow_evt_tagFirst__19 = new TH1D("CutFlow_evt_tagFirst__19","",5,0,5);
   CutFlow_evt_tagFirst__19->SetBinContent(1,1.035228e+07);
   CutFlow_evt_tagFirst__19->SetBinContent(2,1.014655e+07);
   CutFlow_evt_tagFirst__19->SetBinContent(3,873066.6);
   CutFlow_evt_tagFirst__19->SetBinContent(4,250560.8);
   CutFlow_evt_tagFirst__19->SetBinContent(5,29545.33);
   CutFlow_evt_tagFirst__19->SetBinError(1,1016.045);
   CutFlow_evt_tagFirst__19->SetBinError(2,999.2517);
   CutFlow_evt_tagFirst__19->SetBinError(3,369.8496);
   CutFlow_evt_tagFirst__19->SetBinError(4,194.8518);
   CutFlow_evt_tagFirst__19->SetBinError(5,67.35673);
   CutFlow_evt_tagFirst__19->SetEntries(3.837944e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   CutFlow_evt_tagFirst__19->SetLineColor(ci);
   CutFlow_evt_tagFirst__19->GetXaxis()->SetTitle(""Cut flow"");
   CutFlow_evt_tagFirst__19->GetXaxis()->SetBinLabel(1,"Total");
   CutFlow_evt_tagFirst__19->GetXaxis()->SetBinLabel(2,"MET cut");
   CutFlow_evt_tagFirst__19->GetXaxis()->SetBinLabel(3,"Jet Mult.");
   CutFlow_evt_tagFirst__19->GetXaxis()->SetBinLabel(4,"triggers");
   CutFlow_evt_tagFirst__19->GetXaxis()->SetBinLabel(5,"tags cut");
   CutFlow_evt_tagFirst__19->GetXaxis()->SetRange(1,6);
   CutFlow_evt_tagFirst__19->GetXaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__19->GetXaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__19->GetXaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__19->GetYaxis()->SetTitle("Events/1.0");
   CutFlow_evt_tagFirst__19->GetYaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__19->GetYaxis()->SetLabelSize(0.05);
   CutFlow_evt_tagFirst__19->GetYaxis()->SetTitleSize(0.057);
   CutFlow_evt_tagFirst__19->GetYaxis()->SetTitleOffset(1.2);
   CutFlow_evt_tagFirst__19->GetYaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__19->GetZaxis()->SetLabelFont(42);
   CutFlow_evt_tagFirst__19->GetZaxis()->SetTitleOffset(1);
   CutFlow_evt_tagFirst__19->GetZaxis()->SetTitleFont(42);
   CutFlow_evt_tagFirst__19->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CutFlow_SingleTop_tagFirst_16->Modified();
   CutFlow_SingleTop_tagFirst_16->cd();
   CutFlow_SingleTop_tagFirst_16->SetSelected(CutFlow_SingleTop_tagFirst_16);
}
